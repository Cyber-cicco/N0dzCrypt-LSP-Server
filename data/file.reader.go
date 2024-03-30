package data

import (
	"encoding/json"
	"errors"
	"io/fs"
	"os"

	"github.com/Cyber-cicco/nodzcript-lsp/config"
)

type fileFunc func(fileContent, filePath string) error
type checkFunc func(path string) bool

// Get the nodzcript config file of the project if it exists in any
// of the parent directories of the current document
func GetNodzcriptFile(path string) (*config.NodzcriptFile, string, error) {

	path, fileName, err := GetConfigFilePath(path)

	if err != nil {
		return nil, "", err
	}

	file, err := os.ReadFile(path + "/" + fileName)

	if err != nil {
		return nil, "", err
	}

	fileTree := config.NodzcriptFile{
		ProjectAbsolutePath: path + "/",
	}

	json.Unmarshal(file, &fileTree)
	return &fileTree, path + "/", nil
}

func GetConfigFilePath(path string) (string, string, error) {

	if path == "" {
		return "", "", errors.New("Couldn't find n0dzCrypt.json")
	}

	if !FileExists(path) {
		return "", "", errors.New("Directory " + path + " does not exist")
	}

	dir, err := os.ReadDir(path)

	if err != nil {
		return "", "", err
	}

	for _, file := range dir {
		if file.Name() == config.CONFIG_FILE {
			return path, file.Name(), nil
		}
	}

	return GetConfigFilePath(walkToParentDirectory(path))
}

func walkToParentDirectory(path string) string {
	indexOfLastSlash := 0
	i := 0
	for i < len(path) {
		if path[i] == '\\' {
			i += 2
			continue
		}
		if path[i] == '/' {
			indexOfLastSlash = i
		}
		i += 1
	}
	return path[:indexOfLastSlash]
}

func FileExists(path string) bool {
	_, err := os.Stat(path)
	if err != nil {
		if os.IsNotExist(err) {
			return false
		}
		panic(err)
	}
	return true
}

func parseFolders(files []fs.DirEntry, path string, check checkFunc, executable fileFunc) error {

	for _, file := range files {

		if file.IsDir() {

			dirname := path + "/" + file.Name()
			files, err := os.ReadDir(dirname)

			if err != nil {
				return err
			}

			parseFolders(files, dirname, check, executable)

		} else if check(file.Name()) {

			filePath := path + "/" + file.Name()

			err := executable(path, filePath)

			if err != nil {
				return err
			}

		}

	}
	return nil
}

func ParseFolders(check checkFunc, path string, executable fileFunc) error {

	files, err := os.ReadDir(path)

	if err != nil {
		return err
	}

	return parseFolders(files, path, check, executable)

}

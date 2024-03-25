package data

import (
	"encoding/json"
	"errors"
	"os"

	"github.com/Cyber-cicco/nodzcript-lsp/config"
)

//Get the nodzcript config file of the project if it exists in any
//of the parent directoris of the current document
func GetNodzcriptFile(path string) (*config.NodzcriptFile, error) {

    path, fileName, err := GetConfigFilePath(path)

    if err != nil {
        return nil, err
    }

    file, err := os.ReadFile(path + "/" + fileName)

    if err != nil {
        return nil, err
    }

    fileTree := config.NodzcriptFile{
        ProjectAbsolutePath: path + "/",
    }

    json.Unmarshal(file, &fileTree)
    return &fileTree, nil
}

func GetConfigFilePath(path string) (string, string, error) {

    if path == "" {
        return "", "", errors.New("Couldn't find n0dzCrypt.json")
    }

    if !FileExists(path) {
        return "","", errors.New("Directory " + path + " does not exist")
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
    indexOfLastSlash := 0;
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

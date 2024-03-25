package config

import (
	"path/filepath"
	"strings"
)

type NodzcriptFile struct {
    JavaBack JavaBack `json:"java-back"`
    Resources Resources`json:"resources"`
    JavaTest JavaTest`json:"java-test"`
    ProjectAbsolutePath string`json:"-"`
    PageDomains []Domain `json:"page-domains"`
    Routes []Route `json:"routes"`
}

type Route struct {
    RouteName string`json:"name"`
    CorrespondingRoute string`json:"route"`
}

type ProjectProps struct {
    MainPackage string
    HasMavenProfil bool
}

type PageBackDir struct {
    RootDir string `json:"root"`
    Controller string `json:"controller"`
    Irrigator string `json:"irrigator"`
}

type UtilsDir struct {
    RootDir string `json:"root"`
    HX string`json:"hx"`
}

type Domain struct {
    Name string
    SubDomains []Domain
}

type SecurityDir struct {
    RootDir string `json:"root"`
    Service string`json:"service"`
    Config string`json:"config"`
}

type EntityDir struct {
    RootDir string `json:"root"`
    Enum string`json:"enum"`
}

type JsonDir struct {
    RootDir string `json:"root"`
    Dto string`json:"dto"`
    Mapper string`json:"mapper"`
}

type JavaBack struct {
    RootDir string `json:"root"`
    BasePackage string`json:"basepackage"`
    PagesDir PageBackDir`json:"page"` 
    Service string `json:"service"`
    Security SecurityDir `json:"security"`
    Repository string`json:"repository"`
    Utils UtilsDir `json:"util"`
    Entities EntityDir`json:"entities"`
    Validators string`json:"validators"`
    Json JsonDir`json:"json"`
}

type FrontTemplates struct {
    RootDir string `json:"root"`
    PagesFront string`json:"pages"`
    Components string`json:"components"`
    Layouts string`json:"layouts"`
    SVG string`json:"svg"`
    JS string`json:"javascript"`
    StyleTemplates string`json:"styletemplates"`
}


type Resources struct {
    RootDir string `json:"root"`
    Templates FrontTemplates`json:"templates"`
    Static Static`json:"static"`
}

type Static struct {
    RootDir string `json:"root"`
    Style string`json:"style"`
    JS string`json:"jsstatic"`
    Img string`json:"img"`
}

type JavaTest struct {
    RootDir string `json:"root"`
    TestRessources string `json:"resources"`
    TestMain string `json:"base-dir"`
}


func (f *NodzcriptFile) GetRepositoryDir() string{
    return f.JavaBack.RootDir  + f.JavaBack.Repository
}
func (f *NodzcriptFile) GetServiceDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Service
}
func (f *NodzcriptFile) GetValidatorDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Validators
}
func (f *NodzcriptFile) GetJavaDir() string{
    return f.JavaBack.RootDir 
}
func (f *NodzcriptFile) GetPageBackDir() string{
    return f.JavaBack.RootDir + f.JavaBack.PagesDir.RootDir
}
func (f *NodzcriptFile) GetIrrigatorDir() string{
    return f.JavaBack.RootDir + f.JavaBack.PagesDir.RootDir + f.JavaBack.PagesDir.Irrigator
}
func (f *NodzcriptFile) GetJsonMapperDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Json.RootDir + f.JavaBack.Json.Mapper
}
func (f *NodzcriptFile) GetJsonDtoDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Json.RootDir + f.JavaBack.Json.Dto
}
func (f *NodzcriptFile) GetJsonDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Json.RootDir
}
func (f *NodzcriptFile) GetEntityDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Entities.RootDir
}
func (f *NodzcriptFile) GetEntityEnumDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Entities.RootDir + f.JavaBack.Entities.Enum
}
func (f *NodzcriptFile) GetSecurityDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Security.RootDir
}
func (f *NodzcriptFile) GetSecurityConfigDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Security.RootDir + f.JavaBack.Security.Config
}
func (f *NodzcriptFile) GetSecurityServiceDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Security.RootDir + f.JavaBack.Security.Service
}
func (f *NodzcriptFile) GetUtilsDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Utils.RootDir
}
func (f *NodzcriptFile) GetHXDir() string{
    return f.JavaBack.RootDir + f.JavaBack.Utils.RootDir + f.JavaBack.Utils.HX
}
func (f *NodzcriptFile) GetResourcesDir() string{
    return f.Resources.RootDir 
}
func (f *NodzcriptFile) GetTemplateSVGDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.SVG
}
func (f *NodzcriptFile) GetTemplateStyleDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.StyleTemplates
}
func (f *NodzcriptFile) GetTemplateDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir
}
func (f *NodzcriptFile) GetTemplateComponentsDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.Components
}
func (f *NodzcriptFile) GetTemplateLayoutsDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.Layouts
}
func (f *NodzcriptFile) GetTemplateJSDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.JS
}
func (f *NodzcriptFile) GetPageFrontDir() string{
    return f.Resources.RootDir + f.Resources.Templates.RootDir + f.Resources.Templates.PagesFront
}
func (f *NodzcriptFile) GetTestDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir
}
func (f *NodzcriptFile) GetTestRessourcesDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir + f.JavaTest.TestMain + f.JavaTest.TestRessources
}
func (f *NodzcriptFile) GetTestMainDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir + f.JavaTest.TestMain
}
func (f *NodzcriptFile) GetStaticStyleDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir + f.Resources.Static.Style
}
func (f *NodzcriptFile) GetStaticImgDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir + f.Resources.Static.Img
}
func (f *NodzcriptFile) GetStaticJsDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir + f.Resources.Static.JS
}
func (f *NodzcriptFile) GetStaticDir() string{
    return f.Resources.RootDir + f.Resources.Static.RootDir
}

//Gets the name of the fragment based on it's absoulte URL
func (f *NodzcriptFile) GetFragmentReference(fragmentPath string) (string, error) {

    var fragmentReference string
    absPath, err := filepath.Abs(fragmentPath)

    if err != nil {
        return "", err
    }

    splitPath := strings.Split(absPath, f.Resources.Templates.RootDir)
    fragmentReference = splitPath[len(splitPath)-1]
    fragmentReference = strings.TrimSuffix(fragmentReference, ".html")

    return fragmentReference, nil
}

# vscode_qt_demo

a demo for vscode using qt cmake

vscode 依赖插件：

- `C++`
- `CMake`
- `CMake Tools`


使用方法：

1. git clone
2. 修改 Kit 为 QT 目录下的环境，例如 `C:/Qt/Qt5.9.9/Tools/mingw530_32/bin`
3. 修改 `C_Cpp.default.includePath` 为 QT include 目录，例如 `C:/Qt/Qt5.9.9/5.9.9/mingw53_32/include/**`
4. build & run

> 注意不要使用 workspace 打开，否则编译会失败

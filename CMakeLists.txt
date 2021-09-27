cmake_minimum_required(VERSION 3.5)

project(QT_DEMO LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)

#查找当前文件夹中的所有源代码文件，也可以通过Set命令将所有文件设置为一个变量
FILE(GLOB_RECURSE SRC_FILES "src/*.cpp")
#同理，查找当前文件夹中所有的头文件
FILE(GLOB_RECURSE HEAD_FILES "src/*.h")

#同理，查找当前文件夹中所有的ui文件
#FILE(GLOB_RECURSE UI_FILES "./*.ui")
#通过Ui文件生成对应的头文件，一定要添加
#qt5_wrap_ui(WRAP_FILES ${UI_FILES})

#添加资源文件
set(RCC_FILES resource.qrc)
qt5_add_resources(QRC ${QRC_FILE})

add_executable(QT_DEMO
  main.cpp
  ${SRC_FILES}
  ${HEAD_FILES}
  ${RCC_FILES}
)

target_link_libraries(QT_DEMO PRIVATE Qt5::Widgets)

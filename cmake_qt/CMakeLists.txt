cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(app)

find_package(Qt5 REQUIRED COMPONENTS Core)
find_package(Qt5 REQUIRED COMPONENTS Gui)
find_package(Qt5 REQUIRED COMPONENTS Widgets)
#find_package(Qt5 REQUIRED COMPONENTS WebEngineWidgets)


add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC 
    Qt5::Core 
    Qt5::Gui 
    Qt5::Widgets
#   Qt5::WebEngineWidgets
)

add_compile_options(-Wall -Wextra -g)

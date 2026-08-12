cmake_minimum_required(VERSION 3.16)
project(CopyCat VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SOURCES
    src/main.cpp
    src/core/HistoryManager.cpp
    src/gui/CopyCATWindow.cpp
    src/gui/CopyCATWindow.ui
)

set(HEADERS
    src/core/HistoryManager.h
    src/gui/CopyCATWindow.h
)

add_executable(CopyCat ${SOURCES} ${HEADERS})

target_link_libraries(CopyCat PRIVATE Qt5::Widgets)

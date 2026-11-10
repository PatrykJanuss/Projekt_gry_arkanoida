cmake_minimum_required(VERSION 3.16)
project(gra VERSION 1.0 LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Quick Qml)

qt_standard_project_setup()

qt_add_executable(gra
    main.cpp
    
    licznik.hpp
    licznik.cpp

    ball.cpp
    ball.hpp

    belka.cpp 
    belka.hpp

    bloczki.cpp
    bloczki.hpp
)

qt_add_qml_module(gra
    URI ModulGry
    VERSION 1.0
    QML_FILES
        plik2.qml
)

target_link_libraries(gra PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Quick
    Qt6::Qml
)

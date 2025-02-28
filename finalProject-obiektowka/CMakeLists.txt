cmake_minimum_required(VERSION 3.16)

project(finalProject-obiektowka LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(finalProject-obiektowka
    circle.h
    circle.tpp
    figure.cpp
    figure.h
    figureFunction.h
    iShape.h
    main.cpp
    rectangle.cpp
    rectangle.h
    rightTriangle.cpp
    rightTriangle.h
)

include(GNUInstallDirs)
install(TARGETS finalProject-obiektowka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

cmake_minimum_required(VERSION 3.16)

project(abstrakcja LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(abstrakcja main.cpp
    figure.h
    figure.cpp
    rectangle.h
    rectangle.cpp
    rightTriangle.h
    rightTriangle.cpp
    square.h
    square.cpp
    figureFunction.h
)

include(GNUInstallDirs)
install(TARGETS abstrakcja
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

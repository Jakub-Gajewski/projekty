cmake_minimum_required(VERSION 3.16)

project(finalProject-obiektowka LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(finalproject_obiektowka
    circle.h
    figure.cpp
    figure.h
    figurefunction.h
    ishape.h
    main.cpp
    rectangle.cpp
    rectangle.h
    righttriangle.cpp
    righttriangle.h
)

include(GNUInstallDirs)
install(TARGETS finalproject_obiektowka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

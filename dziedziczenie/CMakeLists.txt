cmake_minimum_required(VERSION 3.16)

project(dziedziczenie LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dziedziczenie main.cpp
    Vehicle.h
    Motorcycle.h
    Car.h
    Truck.h
    Car.cpp
    Vehicle.cpp
    Truck.cpp
    Motocycle.cpp
    Car.h Car.cpp

)

include(GNUInstallDirs)
install(TARGETS dziedziczenie
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

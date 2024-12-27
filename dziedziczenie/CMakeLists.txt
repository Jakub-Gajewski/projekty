cmake_minimum_required(VERSION 3.16)

project(dziedziczenie LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dziedziczenie 
    Car.h
    Car.cpp
    main.cpp
    Motorcycle.h
    Motocycle.cpp
    Truck.h
    Truck.cpp
    Vehicle.h
    Vehicle.cpp

)

include(GNUInstallDirs)
install(TARGETS dziedziczenie
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

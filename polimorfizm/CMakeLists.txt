cmake_minimum_required(VERSION 3.16)

project(polimorfizm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(polimorfizm main.cpp
    animal.h animal.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS polimorfizm
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

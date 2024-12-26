cmake_minimum_required(VERSION 3.16)

project(polimorfizm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(polimorfizm
    animal.cpp
    animal.h
    dog.cpp
    dog.h
    bird.cpp
    bird.h
    fish.cpp
    fish.h
    main.cpp
)

include(GNUInstallDirs)
install(TARGETS polimorfizm
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

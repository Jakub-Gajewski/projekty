cmake_minimum_required(VERSION 3.16)

project(hermetyzacja LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hermetyzacja 
    adminAccount.cpp
    adminAccount.h
    main.cpp
    userAccount.cpp
    userAccount.h
)

include(GNUInstallDirs)
install(TARGETS hermetyzacja
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

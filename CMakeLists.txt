cmake_minimum_required(VERSION 3.26)
project(tp2)

set(CMAKE_CXX_STANDARD 23)

add_executable(tp2 main.cpp

    header/employe.h
    header/employequalifie.h
    header/gestionnaireemployes.h
    header/rapport.h

    source/employe.cpp
    source/employequalifie.cpp
    source/gestionnaireemployes.cpp
    source/rapport.cpp
)

cmake_minimum_required(VERSION 3.17)
project(cpp_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_project
        Cleaner.h
        Company.h
        Date.h
        Employee.h
        Engineer.h
        EngineeringTeamLead.h
        Guard.h
        main.cpp
        Manager.h
        Person.h
        Pistol.h)

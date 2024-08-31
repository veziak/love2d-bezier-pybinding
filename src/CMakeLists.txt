cmake_minimum_required(VERSION 3.28)
project(bezier_curve)
find_package(Python 3.12 COMPONENTS Interpreter Development REQUIRED)
set(CMAKE_CXX_STANDARD 20)
set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 CONFIG REQUIRED)
include_directories(common)

pybind11_add_module(bezier_curve
        BezierCurve.cpp
        common/Exception.cpp
        common/Vector.cpp
        common/MathModule.cpp
        common/floattypes.cpp)



cmake_minimum_required(VERSION 3.24.2)
project(bezier_curve)
find_package(Python 3.12 COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)
include_directories(common)

pybind11_add_module(bezier_curve BezierCurve.cpp)

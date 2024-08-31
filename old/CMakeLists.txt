cmake_minimum_required(VERSION 3.24.2)
project(bezier_curve)
find_package(pybind11 REQUIRED)

include_directories(common)

add_library(love_common STATIC
	common/android.cpp
	common/android.h
	common/b64.cpp
	common/b64.h
	common/Color.h
	common/config.h
	common/Data.cpp
	common/Data.h
	common/delay.cpp
	common/delay.h
	common/EnumMap.h
	common/Exception.cpp
	common/Exception.h
	common/floattypes.cpp
	common/floattypes.h
	common/int.h
	common/math.h
	common/Matrix.cpp
	common/Matrix.h
	common/memory.cpp
	common/memory.h
	common/Module.cpp
	common/Module.h
	common/Object.cpp
	common/Object.h
	common/Optional.h
	common/pixelformat.cpp
	common/pixelformat.h
	common/Range.h
	common/StringMap.cpp
	common/StringMap.h
	common/types.cpp
	common/types.h
	common/utf8.cpp
	common/utf8.h
	common/Variant.cpp
	common/Variant.h
	#old/common/Vector.cpp # Vector.cpp is empty.
	common/Vector.h
	common/version.h
)

add_executable(bezier_curve example.cpp)

#pybind11_add_module(bezier_curve BezierCurve.cpp)

cmake_minimum_required (VERSION 2.8.7)
project (reflang)
enable_testing()

include_directories(${CMAKE_SOURCE_DIR})

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -stdlib=libc++")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	set(LLVM_CONFIG true)
	set(CLANG_INCLUDEDIR "C:/Program Files/LLVM/include")
	set(CLANG_LIBDIR "C:/Program Files/LLVM/lib")
endif()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
find_package(LibClang REQUIRED)
include_directories(${CLANG_INCLUDEDIR})

set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_library(libreflang STATIC lib/reflang.hpp lib/reflang.cpp)

add_executable(
	reflang
	gen/cmdargs.cpp gen/cmdargs.hpp
	gen/main.cpp
	gen/parser.class.cpp gen/parser.class.hpp
	gen/parser.cpp gen/parser.hpp
	gen/parser.enum.cpp gen/parser.enum.hpp
	gen/parser.function.cpp gen/parser.function.hpp
	gen/parser.util.cpp gen/parser.util.hpp
	gen/serializer.class.cpp gen/serializer.class.hpp
	gen/serializer.cpp gen/serializer.hpp
	gen/serializer.enum.cpp gen/serializer.enum.hpp
	gen/serializer.function.cpp gen/serializer.function.hpp
	gen/serializer.util.cpp gen/serializer.util.hpp
	gen/types.cpp gen/types.hpp)
target_link_libraries(reflang ${CLANG_LIBS})

add_subdirectory(tests)

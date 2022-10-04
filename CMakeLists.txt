cmake_minimum_required(VERSION 3.23)
project(BoostDemo)

set(CMAKE_CXX_STANDARD 14)

set(BOOST_ROOT "C:\\Users\\zhoubing\\Downloads\\boost_1_80_0")
set(Boost_LIBRARY_DIRS ${BOOST_ROOT}\\stage\\lib)


set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
# set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost 1.80.0 REQUIRED system filesystem thread)
if (Boost_FOUND)
    message(STATUS "boost include path is : ${Boost_INCLUDE_DIRS}")
    message(STATUS "boost library path is : ${Boost_LIBRARY_DIRS}")
    message(STATUS "boost libraries is : ${Boost_LIBRARIES}")
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
else ()
    message(WARNING "boost not found.")
endif ()

include_directories(BOOST "C:\\Users\\zhoubing\\Downloads\\boost_1_80_0")

aux_source_directory(. DIR_SRCS)
#add_executable(IntelligencePointer ${DIR_SRCS})
link_directories(BoostDemo ${LIB_FILE})
add_executable(BoostDemo server.cpp main.cpp)

#target_link_libraries(BoostDemo foo1)


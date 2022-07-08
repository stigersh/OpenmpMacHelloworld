project(OpenmpMacHelloworld)

 
OPTION (USE_OpenMP "Use OpenMP" ON)
IF(USE_OpenMP)
  FIND_PACKAGE(OpenMP)
  IF(OPENMP_FOUND)
    SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  ENDIF()
ENDIF()

find_package(OpenMP REQUIRED)

 

add_executable(OpenmpMacHelloworld main.cpp)

target_link_libraries(OpenmpMacHelloworld PRIVATE OpenMP::OpenMP_C)


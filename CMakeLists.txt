cmake_minimum_required(VERSION 3.0)

project(MathLibrary)




# test set
option(TestOption "Build all tests." ON) 

if(MSVC)
  set(variables CMAKE_CXX_FLAGS_DEBUG 
                CMAKE_CXX_FLAGS_RELEASE
                CMAKE_CXX_FLAGS_RELWITHDEBINFO 
                CMAKE_CXX_FLAGS_MINSIZEREL)
  foreach(variable ${variables})
    if(${variable} MATCHES "/MD")
      string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
    endif()
  endforeach()
endif()


add_subdirectory(./Vector)
add_subdirectory(./Color)
add_subdirectory(./Matrix)

add_subdirectory(./Common)

set(Source ${Vector} ${Color} ${Matrix} ${Common}  CACHE STRING "" FORCE)
set(IncludeDir  ${VectorIncludeDir} ${ColorIncludeDir} ${MatrixIncludeDir} ${CommonIncludeDir}  CACHE STRING "" FORCE)

# include_directories(${})
add_executable(test1  ./Test/test.cpp ${Vector} ${Color} ${Matrix} ${Common})
target_include_directories(test1 PUBLIC ${VectorIncludeDir} ${ColorIncludeDir} ${MatrixIncludeDir} ${CommonIncludeDir} )



# Test
add_subdirectory(./External/googletest-release-1.10.0)
enable_testing()
add_subdirectory(./Test)

# Doc
add_subdirectory(./Doc)
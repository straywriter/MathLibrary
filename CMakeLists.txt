cmake_minimum_required(VERSION 3.0)
option(test "Build all tests." ON) # Makes boolean 'test' availabl
project(MathLibrary)

# test set

# if(MSVC)
#   set(variables CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
#                 CMAKE_CXX_FLAGS_RELWITHDEBINFO CMAKE_CXX_FLAGS_MINSIZEREL)
#   foreach(variable ${variables})
#     if(${variable} MATCHES "/MD")
#       string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
#     endif()
#   endforeach()
# endif()

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


# set(IncludeFile CACHE STRING "" FORCE)
# set(SrcFile CACHE STRING "" FORCE)
file(GLOB_RECURSE IncludeFile ${CMAKE_CURRENT_SOURCE_DIR}/Include/*.h CACHE STRING "" FORCE)
file(GLOB_RECURSE SrcFile ${CMAKE_CURRENT_SOURCE_DIR}/Src/*.cpp CACHE STRING "" FORCE)
set(IncludeDir
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
    CACHE STRING "" FORCE)
message(${IncludeDir})
# include_directories(${})
message(${SrcFile})

# include_directories(${IncludeDir})
# add_executable(test1 ./Test/test.cpp)
# target_include_directories(test1 PUBLIC ${IncludeDir})
# message(${SrcFile})
# Test
add_subdirectory(./External/googletest-release-1.10.0)
enable_testing()
add_subdirectory(./Test)

# Doc
add_subdirectory(./Doc)

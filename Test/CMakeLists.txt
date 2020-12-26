#Test
option(test "Build all tests." ON)
project(Test)


# include_directories(${IncludeDir})
# add_executable(test1 test1.cpp ${IncludeFile} ${SrcFile})
# target_include_directories(test1 PUBLIC ${IncludeDir})

file(GLOB VectorTestSrc ./VectorTest/*.cpp)

find_package(Threads REQUIRED)

foreach(TestFile ${VectorTestSrc})
  get_filename_component(TestFileName ${TestFile} NAME_WE)
  add_executable(${TestFileName} ${TestFile} ${SrcFile} ${IncludeFile})
  target_include_directories(${TestFileName}  PUBLIC ${IncludeDir})
  target_link_libraries(${TestFileName} gtest gtest_main  ${CMAKE_THREAD_LIBS_INIT} )
  add_test(${TestFileName} ${TestFileName})
  set_tests_properties(${TestFileName} PROPERTIES TIMEOUT 5)
endforeach()
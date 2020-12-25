#Test



file(GLOB VectorTestSrc ./VectorTest/*.cpp)
# message(${VectorTestSrc})

find_package(Threads REQUIRED)
# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

foreach(TestFile ${VectorTestSrc})
  get_filename_component(TestFileName ${TestFile} NAME_WE)
  add_executable(${TestFileName} ${TestFile} ${Source})
  target_include_directories(${TestFileName}  PUBLIC ${IncludeDir})
  target_link_libraries(${TestFileName} gtest gtest_main  ${CMAKE_THREAD_LIBS_INIT} )
  add_test(${TestFileName} ${TestFileName})
  set_tests_properties(${TestFileName} PROPERTIES TIMEOUT 5)
endforeach()
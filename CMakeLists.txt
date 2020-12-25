cmake_minimum_required(VERSION 3.0)

project(Math)

add_subdirectory(./Vector)
add_subdirectory(./Color)
add_subdirectory(./Matrix)

add_subdirectory(./Common)
# include_directories(${})
add_executable(test  ./Test/test.cpp ${Vector} ${Color} ${Matrix} ${Common})
target_include_directories(test PUBLIC ${VectorIncludeDir} ${ColorIncludeDir} ${MatrixIncludeDir} ${CommonIncludeDir} )

# Doc
add_subdirectory(./Doc)
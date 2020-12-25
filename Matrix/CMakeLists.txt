

file(GLOB_RECURSE MatrixInclude ${CMAKE_CURRENT_SOURCE_DIR}/Include *.h)
file(GLOB_RECURSE MatrixSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src *.cpp)
set(MatrixIncludeDir ${CMAKE_CURRENT_SOURCE_DIR}/Include CACHE STRING "" FORCE)

# set(MatrixSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(Matrix ${MatrixInclude} ${MatrixSrc} CACHE STRING "" FORCE)
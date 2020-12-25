

file(GLOB_RECURSE VectorInclude ${CMAKE_CURRENT_SOURCE_DIR}/Include *.h)
file(GLOB_RECURSE VectorSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src *.cpp)
set(VectorIncludeDir ${CMAKE_CURRENT_SOURCE_DIR}/Include CACHE STRING "" FORCE)

# set(VectorSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(Vector ${VectorInclude} ${VectorSrc} CACHE STRING "" FORCE) 


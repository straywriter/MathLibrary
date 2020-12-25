 

file(GLOB_RECURSE ColorInclude ${CMAKE_CURRENT_SOURCE_DIR}/Include *.h)
file(GLOB_RECURSE ColorSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src *.cpp)
set(ColorIncludeDir ${CMAKE_CURRENT_SOURCE_DIR}/Include CACHE STRING "" FORCE)

# set(VectorSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(Color ${ColorInclude} ${ColorSrc} CACHE STRING "" FORCE) 
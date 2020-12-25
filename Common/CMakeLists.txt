
file(GLOB_RECURSE CommonInclude ${CMAKE_CURRENT_SOURCE_DIR}/Include *.h)
file(GLOB_RECURSE CommonSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src *.cpp)
set(CommonIncludeDir ${CMAKE_CURRENT_SOURCE_DIR}/Include CACHE STRING "" FORCE)

# set(CommonSrc ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(Common ${CommonInclude} ${CommonSrc} CACHE STRING "" FORCE) 
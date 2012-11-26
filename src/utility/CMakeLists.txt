SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#Puts here Include Directorys
#INCLUDE_DIRECTORIES (
#    .
#    /usr/include/boost
#)

INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/include
)

#Puts here Link Directorys                                                                                                         
LINK_DIRECTORIES(          
    /usr/lib
)                          


SET( TARGET_SOURCES 
    Find.cpp
    Configure.cpp
)

SET( TARGET_HEADERS
    Find.hpp
    Configure.hpp
)

#SET( TARGET_LINK
#    boost_system
#    boost_filesystem
#)

SET( TARGET_LINK

)

#add_library ( FxrefUtils SHARED ${TARGET_SOURCES} ${TARGET_HEADERS} ) 
add_library (FxrefUtils ${TARGET_SOURCES} ${TARGET_HEADERS}) 
TARGET_LINK_LIBRARIES( FxrefUtils ${TARGET_LINK})

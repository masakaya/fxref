SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
)  

#Puts here Link Directorys
LINK_DIRECTORIES(
)   

#Puts here link library
SET( TARGET_LINK_LIBS                                                                                                              
) 

SET( TARGET_SOURCES 
    ./MurmurHash3.cpp
)                  
                   
SET( TARGET_HEADERS
    ./MurmurHash3.h
)              

add_library ( murmurhash  ${TARGET_SOURCES} ${TARGET_HEADERS})  
TARGET_LINK_LIBRARIES( murmurhash ${TARGET_LINK_LIBS})

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#Puts here Include Directorys
INCLUDE_DIRECTORIES (
    .
    ${PROJECT_SOURCE_DIR}/src/utility
)  

#Puts here Link Directorys
LINK_DIRECTORIES(
    ${CMAKE_BINARY_DIR}/lib
)   

SET( TARGET_LINK                                                                                                              
    FxrefUtils
) 


#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#INCLUDE_DIRECTORIES( ${PROJECT_SOURCE_DIR}/utility/)
#LINK_DIRECTORIES( ${PROJECT_SOURCE_DIR}/lib/)
ADD_EXECUTABLE(main.x main.cpp)
#target_link_libraries( main.x mfind)
TARGET_LINK_LIBRARIES( main.x ${TARGET_LINK})

#
# fxref
# Author: Masashi Kayahara <sylphs.mb AT gmail.com>
#
ADD_SUBDIRECTORY(vender)
ADD_SUBDIRECTORY(utility)
ADD_SUBDIRECTORY(main)
CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/cmake/config.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.h)

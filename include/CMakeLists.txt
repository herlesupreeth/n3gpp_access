file(GLOB_RECURSE HDR_FILES *.hpp)

########################################################################
# Install headers
########################################################################
install(DIRECTORY ${HDR_FILES} DESTINATION include/gtp)

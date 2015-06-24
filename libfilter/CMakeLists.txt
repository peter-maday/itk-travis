set(libfilter_SRCS
    bilateral_filter.h
    bilateral_filter.cxx
)

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

# Declare the library
add_library(libfilter STATIC
    ${libfilter_SRCS}
)

target_link_libraries(libfilter ${ITK_LIBRARIES})

# Specify here the include directories exported
# by this library
target_include_directories(libfilter PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

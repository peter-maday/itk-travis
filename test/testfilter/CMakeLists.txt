
file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testfilter ${SRCS})

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

TARGET_LINK_LIBRARIES(testfilter
    libfilter
    ${ITK_LIBRARIES}
    libgtest
    libgmock
)

add_test(testfilter testfilter ${DATA_DIR}/Gourds.png Gourds_out.png)
# midas_add_test(testfilter testfilter MIDAS{Gourds.png.md5} Gourds_out.png)


cmake_minimum_required(VERSION 3.5)
project(sofa-pbrpc)
add_definitions(-O2 -g2)
add_definitions(-pipe -W -Wall -fPIC -D_GNU_SOURCE -D__STDC_LIMIT_MACROS -DHAVE_SNAPPY)
add_definitions(-DSOFA_PBRPC_ENABLE_DETAILED_LOGGING)
include_directories(src)
aux_source_directory(src/sofa/pbrpc/ LIB_SRC)
aux_source_directory(src/sofa/pbrpc/http-agent/ BIN_SRC)
set(LDFLAGS
        rt
        z
        protobuf
        snappy
        pthread)
add_library(sofa-pbrpc  ${LIB_SRC})
target_link_libraries(sofa-pbrpc ${LDFLAGS})

add_executable(sofa-pbrpc-client ${BIN_SRC})
target_link_libraries(sofa-pbrpc-client sofa-pbrpc ${LDFLAGS})



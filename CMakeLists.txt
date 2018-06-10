cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0015 NEW)

set(DXLIB_DIR C:/DxLib_VC)

# GameFramework Project
set(PROJ_NAME GameFramework)
project(${PROJ_NAME} CXX)

include_directories(${DXLIB_DIR}/プロジェクトに追加すべきファイル_VC用)
link_directories(${DXLIB_DIR}/プロジェクトに追加すべきファイル_VC用)
file(GLOB_RECURSE SOURCES
	Libraries/*.h
	Libraries/*.cpp
)
add_library(${PROJ_NAME} STATIC ${SOURCES})
set_target_properties(${PROJ_NAME} PROPERTIES LINKER_LANGUAGE CXX)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4996 /W3 /EHsc")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")

include(ExternalProject)
if(NOT EXISTS "${DXLIB_DIR}")
    ExternalProject_Add(
        DxLib
        PREFIX "DxLib"
        URL http://dxlib.o.oo7.jp/DxLib/DxLib_VC3_19b.zip
        URL_HASH SHA512=4d19f3aa752c53b92f8f077ebeaed1a82353a9687dcb482b57cdaafcc3c707f66e4d062ea0782055c11c2b984ba96625f9225cbb2913bbe679587481d2a5ab3e
        SOURCE_DIR ${DXLIB_DIR}
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        INSTALL_COMMAND ""
    )
endif()
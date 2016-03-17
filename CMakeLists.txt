cmake_minimum_required(VERSION 3.2)

set(projectName "easyloggingpp")
set(projectVersion "9.80")

set(
  ${projectName}_header_source_directory
  "${CMAKE_CURRENT_SOURCE_DIR}/src"
  )

set(${projectName}_src_header easylogging++.h)

set(${projectName}_bin_header easylogging++.h)

if(NOT DEFINED commonCMakeScripts_path)
  set(commonCMakeScripts_path "${CMAKE_CURRENT_SOURCE_DIR}/commonCMakeScripts")
endif(NOT DEFINED commonCMakeScripts_path)

include(subprojects.cmake)
include(${commonCMakeScripts_path}/base.cmake)
include(${commonCMakeScripts_path}/assemble.cmake)
include(${commonCMakeScripts_path}/terminus.cmake)

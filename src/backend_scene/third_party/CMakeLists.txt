
add_subdirectory(glad)

SET(SKIP_GLSLANG_INSTALL ON CACHE BOOL "")
SET(ENABLE_GLSLANG_BINARIES OFF CACHE BOOL "")
SET(ENABLE_SPVREMAPPER OFF CACHE BOOL "")
SET(ENABLE_GLSLANG_JS OFF CACHE BOOL "")
SET(NABLE_HLSL ON CACHE BOOL "")
add_subdirectory(glslang)
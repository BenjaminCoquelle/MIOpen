#include <miopen/version.h>

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VER_FILE_DESCRIPTION_STR "MIOpen inference engine"
#define VER_FILE_VERSION MIOPEN_VERSION_MAJOR, MIOPEN_VERSION_MINOR, MIOPEN_VERSION_PATCH, 2
#define VER_FILE_VERSION_STR \
    STRINGIZE(MIOPEN_VERSION_MAJOR) \
    "." STRINGIZE(MIOPEN_VERSION_MINOR) "." STRINGIZE(MIOPEN_VERSION_PATCH) "." STRINGIZE(2)

#define VER_PRODUCTNAME_STR "MIOpen"
#define VER_PRODUCT_VERSION VER_FILE_VERSION
#define VER_PRODUCT_VERSION_STR VER_FILE_VERSION_STR
#define VER_ORIGINAL_FILENAME_STR VER_PRODUCTNAME_STR ".dll"
#define VER_INTERNAL_NAME_STR VER_ORIGINAL_FILENAME_STR
#define VER_COPYRIGHT_STR "Copyright (C) 2019 by Advanced Micro Devices"

#ifdef _DEBUG
#define VER_VER_DEBUG VS_FF_DEBUG
#else
#define VER_VER_DEBUG 0
#endif

#define VER_FILEOS VOS_NT_WINDOWS32
#define VER_FILEFLAGS VER_VER_DEBUG
#define VER_FILETYPE VFT_DLL
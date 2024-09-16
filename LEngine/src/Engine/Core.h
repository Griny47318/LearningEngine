#pragma once

#ifdef LE_PLATFORM_WINDOW
    #ifdef LE_BUILD_DLL
        #define LE_API __declspec(dllexport)
    #else
        #define LE_API __declspec(dllimport)
    #endif
#else
    #error LE now only support to Windows
#endif

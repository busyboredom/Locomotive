#pragma once

#if defined(_MSC_VER)
  #if defined(LM_BUILD_DLL)
    #define LOCOMOTIVE_API __declspec(dllexport)
  #else
    #define LOCOMOTIVE_API __declspec(dllimport)
  #endif
#elif defined(__GNUC__)
  #if defined(LM_BUILD_DLL)
    #define LOCOMOTIVE_API __attribute__((visibility ("default")))
  #else
    #define LOCOMOTIVE_API
  #endif
#else
  #define LOCOMOTIVE_API
  #pragma warning Unknown dynamic link import/export semantics.
#endif

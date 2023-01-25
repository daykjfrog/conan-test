#pragma once

#ifdef _WIN32
  #define newpkg_EXPORT __declspec(dllexport)
#else
  #define newpkg_EXPORT
#endif

newpkg_EXPORT void newpkg();

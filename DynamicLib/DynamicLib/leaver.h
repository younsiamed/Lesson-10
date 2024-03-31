#pragma once
#include <string>

#ifdef DYNAMICLIBCMAKE_EXPORTS
#define DYNAMICLIB __declspec(dllexport)
#else
#define DYNAMICLIB __declspec(dllimport)
#endif

class DYNAMICLIB Leaver {
public:
    std::string leave(const std::string& name);
};

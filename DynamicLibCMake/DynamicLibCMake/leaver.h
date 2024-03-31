#pragma once
#include <string>

#ifdef DYNAMICLIBCMAKE_EXPORTS
#define DYNAMICLIBCMAKE __declspec(dllexport)
#else
#define DYNAMICLIBCMAKE __declspec(dllimport)
#endif

class DYNAMICLIBCMAKE Leaver {
public:
    std::string leave(const std::string& name);
};

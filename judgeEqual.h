#ifndef BIANLIB_CHAREQUAL_H
#define BIANLIB_CHAREQUAL_H

#include <string.h>
#include <string>

inline bool charEqual(char a, char b, bool caseMatter = false){
    if(caseMatter){
        return a == b;
    }else{
        char aStr[2] = {a, '\0'};
        char bStr[2] = {b, '\0'};
        return strcasecmp(aStr, bStr) == 0;
    }
}

inline bool strEqual(const char *a, const char *b, bool caseMatter = false){
    if(caseMatter){
        return strcmp(a, b) == 0;
    }else{
        return strcasecmp(a, b) == 0;
    }
}

inline bool strEqual(std::string a, std::string b, bool caseMatter = false){
    return strEqual(a.c_str(), b.c_str(), caseMatter);
}

#endif  // BIANLIB_CHAREQUAL_H
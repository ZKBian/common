/*
copied from logkeys(https://github.com/kernc/logkeys)
*/

#ifndef BIANLIB_EXECUTECMD_H
#define BIANLIB_EXECUTECMD_H

#include <string>
#include <error.h>

// executes cmd and returns string ouput
inline std::string execute(const char* cmd){
    FILE* pipe = popen(cmd, "r");
    if (!pipe)
      error(EXIT_FAILURE, errno, "[ERROR] Pipe error");
    char buffer[128];
    std::string result = "";
    while(!feof(pipe))
    	if(fgets(buffer, 128, pipe) != NULL)
    		result += buffer;
    pclose(pipe);
    return result;
}

#endif // BIANLIB_EXECUTECMD_H
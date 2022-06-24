#ifndef BIANLIB_GETUSER_H
#define BIANLIB_GETUSER_H

/*
https://blog.csdn.net/taiyang1987912/article/details/79303296
C++ 获取linux和windows系统的用户名
*/

#include <iostream>  
#include <string>  
#include <unistd.h>  
#include <pwd.h>  
    
inline passwd getUserInfo(uid_t userid = getuid()){  
    struct passwd* pwd;  
    pwd=getpwuid(userid); 

    return *pwd;
}

/*
userid start from 1000 
return bian
*/
inline std::string getUserName(uid_t userid = getuid()){  
    return getUserInfo(userid).pw_name;  
} 

/*
userid start from 1000 
return /home/bian
*/
inline std::string getUserHomePath(uid_t userid = getuid()){  
    return getUserInfo(userid).pw_dir;  
}  



#endif  // BIANLIB_GETUSER_H
#include "getUser.h"
#include "executeCmd.h"
#include "cutVector.h"

/*
    cutVector
*/
int main(){
    std::vector<int> vec{1, 2, 3, 4, 5, 6};
    std::vector<int> res = cutVector(vec, 2, 3);

    std::cout << "length: " << res.size() << std::endl;
    for(int i(0); i< res.size(); ++i){
        std::cout << res.at(i) << std::endl;
    }
}


/*
executeCmd.h
*/
// #define EXE_GREP "grep"

// int main(){

//     // std::cout << execute("ls /dev | grep ttyUSB") << std::endl;
//     // std::cout << execute("ls /dev | ttyUSB") << std::endl;

//     const char* cmd = EXE_GREP " -B8 -E 'KEY=.*e$' /proc/bus/input/devices | "
//     EXE_GREP " -E 'Name|Handlers|KEY' ";

//     std::cout << execute(cmd) << std::endl;

//     return 0;
// }

/*
getUser.h
*/
// int main(){  
//     // std::string ss = getUserName();  
//     // std::cout << ss << std::endl;  

//     // ss = getUserHomePath();
//     // std::cout << ss << std::endl;

//     std::cout << getUserInfo().pw_dir << std::endl;
//     std::cout << getUserInfo().pw_gecos << std::endl;
//     std::cout << getUserInfo().pw_gid << std::endl;
//     std::cout << getUserInfo().pw_name << std::endl;
//     std::cout << getUserInfo().pw_passwd << std::endl;
//     std::cout << getUserInfo().pw_shell << std::endl;
//     std::cout << getUserInfo().pw_uid << std::endl;

//     std::cout << "**************" << std::endl;

//     std::cout << getUserInfo(1000).pw_dir << std::endl;
//     std::cout << getUserInfo(1000).pw_gecos << std::endl;
//     std::cout << getUserInfo(1000).pw_gid << std::endl;
//     std::cout << getUserInfo(1000).pw_name << std::endl;
//     std::cout << getUserInfo(1000).pw_passwd << std::endl;
//     std::cout << getUserInfo(1000).pw_shell << std::endl;
//     std::cout << getUserInfo(1000).pw_uid << std::endl;
//     return 0;  
// }  
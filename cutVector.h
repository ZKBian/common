#ifndef BIANLIB_CUTVECTOR_H
#define BIANLIB_CUTVECTOR_H

#include <vector>

/*
    include startID
*/
template<typename T>
std::vector<T> cutVector(std::vector<T> vec, size_t startID, size_t length){
    std::vector<T> result;
    result.assign(vec.begin()+startID, vec.begin()+startID+length);
    return result;
}

#endif  // BIANLIB_CUTVECTOR_H
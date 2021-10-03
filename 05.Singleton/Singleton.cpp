#include "Singleton.h"
#include <iostream>
#include <mutex>
static Singleton* singleton_ = nullptr;
std::mutex mtx_;
Singleton* Singleton::getInstance(){
    std::lock_guard<std::mutex> lock(mtx_);    //スレッドセーフ用
    if(singleton_ == nullptr){
        singleton_ = new Singleton();
    }
    return singleton_;
};
#ifndef _SINGLETON_
#define _SINGLETON_
#include <iostream>
class Singleton{
    private:
        Singleton(){
            std::cout << "インスタンスを生成しました" << std::endl;
        };
    public:
        static Singleton* getInstance();
};
#endif //_SINGLETON_
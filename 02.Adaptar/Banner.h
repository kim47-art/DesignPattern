#ifndef __BANNER__
#define __BANNER__
#include <string>
#include <iostream>
class Banner{
    private:
        std::string string_;
    public:
        Banner(std::string string){
            string_ = string;
        };
        void showWithParen(){
            std::cout << "(" << string_ << ")" << std::endl;
        };
        void showWithAster(){
            std::cout << "*" << string_ << "*" << std::endl;
        };
};
#endif //__BANNER__
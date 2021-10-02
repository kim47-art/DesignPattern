#ifndef _CHARDISPLAY_
#define _CHARDISPLAY_
#include <iostream>
#include "AbstractDisplay.h"
class CharDisplay final: public AbstractDisplay{
    private:
        char ch_;
    public:
        CharDisplay(char ch){
            ch_ = ch;
        };
        void open() override{
            std::cout << "<<";
        };
        void print() override{
            std::cout << ch_;
        };
        void close() override{
            std::cout << ">>" << std::endl;
        };
};
#endif //_CHARDISPLAY_
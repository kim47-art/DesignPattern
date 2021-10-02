#ifndef _STRINGDISPLAY_
#define _STRINGDISPLAY_
#include <iostream>
#include <string>
#include "AbstractDisplay.h"
class StringDisplay final: public AbstractDisplay{
    private:
        std::string string_;
        int width_;
    public:
        StringDisplay(std::string string){
            string_ = string;
            width_= string_.length();    
        };
        void open() override{
            printLine();
        };
        void print() override{
            std::cout << "|" << string_ << "|" << std::endl;
        };
        void close() override{
            printLine();
        };
    private:
        void printLine(){
            std::cout << "+";
            for (int i = 0; i < width_; i++)
            {
                std::cout << "-";
            }
            std::cout << "+" << std::endl;
            
        };
        
};
#endif //_STRINGDISPLAY_
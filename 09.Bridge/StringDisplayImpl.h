#ifndef _STRINGDISPLAYIMPL_
#define _STRINGDISPLAYIMPL_
#include <string>
#include <iostream>
class StringDisplayImpl : public DisplayImpl{
    private:
        std::string string_;
        int width_;
    public:
        StringDisplayImpl(std::string string){
            string_ = string;
            width_ = string.length();
        }
        void rawOpen() override{
            printLine();
        };
        void rawPrint() override{
            std::cout << "|" << string_ << "|" << std::endl;
        };
        void rawClose(){
            printLine();
        };
    private:
        void printLine(){
            std::cout << "+";
            for (size_t i = 0; i < width_; i++)
            {
                std::cout << "-";
            }
            std::cout << "+" << std::endl; 
        };
};
#endif //_STRINGDISPLAYIMPL_
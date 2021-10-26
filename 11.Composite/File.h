#ifndef _FILE_
#define _FILE_
#include "Entry.h"
#include <iostream>
class File :public Entry{
    private:
        std::string name_;
        int size_;
    public:
        File(std::string name, int size){
            name_ = name;
            size_ = size;
        }
        std::string getName() override{
            return name_;
        };
        int getSize() override{
            return size_;
        };
        void printList(std::string prefix) override{
            std::cout << prefix << "/" << toString() << std::endl;
        };
};
#endif //_FILE_
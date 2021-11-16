#ifndef _FILE_
#define _FILE_
#include "Entry.h"
#include <iostream>
class File :public Entry{
    private:
        std::string name_;
        int size_;
    public:
        File(std::string name, int size);
        std::string getName() override;
        int getSize() override;
        void accept(Visitor* v) override;

};
#endif //_FILE_
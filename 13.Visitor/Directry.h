#ifndef _DIRECTRY_
#define _DIRECTRY_
#include <vector>
#include <iostream>
#include "Entry.h"

class Directry : public Entry{
    private:
        std::string name_;
        std::vector<Entry*> directry_; 
    public:
        Directry(std::string name);
        std::string getName() override;
        int getSize() override;
        void add(Entry* entry);
        std::vector<Entry*> getVector();
        void accept(Visitor* v);
};
#endif //_DIRECTRY_
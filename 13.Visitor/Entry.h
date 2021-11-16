#ifndef _ENTRY_
#define _ENTRY_
#include <string>
#include <stdexcept>
#include <vector>
#include "Element.h"

class Entry : public Element{
    public:
        virtual std::string getName() = 0;
        virtual int getSize() = 0;
        
        void add(Entry* entry){
            throw std::runtime_error("FileTreatmentException");
        };
        
        std::vector<Entry*> getVector(){
            throw std::runtime_error("FileTreatmentException");
            std::vector<Entry*> v;
            return v;
        };

        std::string toString(){
            return getName() + " (" + std::to_string(getSize()) + ")";
        };
};
#endif //_ENTRY_
#ifndef _ENTRY_
#define _ENTRY_
#include <string>
#include <stdexcept>
class Entry{
    public:
        virtual std::string getName() = 0;
        virtual int getSize() = 0;
        void add(Entry* entry){
            throw std::runtime_error("FileTreatmentException");
        };
        void printList(){
            printList("");
        };
        virtual void printList(std::string prefix) = 0;
        std::string toString(){
            return getName() + " (" + std::to_string(getSize()) + ")";
        };
};
#endif //_ENTRY_
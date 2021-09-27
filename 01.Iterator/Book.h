#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
class Book{
    private:
        std::string name_;
    public:
        Book(std::string name){
            this->name_=name;
        };
        std::string getName(){
            return this->name_;
        };
};
#endif //_BOOK_H_

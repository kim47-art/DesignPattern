#ifndef _TROUBLE_H_
#define _TROUBLE_H_
#include <string>

class Trouble{
private:
    int number_;
public:
    Trouble(int number){
        number_ = number;
    };
    
    int getNumber(){
        return number_;
    };

    std::string toString(){
        return "[Trouble" + std::to_string(number_) + "]";
    };
};

#endif //_TROUBLE_H_
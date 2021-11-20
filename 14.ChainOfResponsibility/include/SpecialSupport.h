#ifndef _SPECIALSUPPORT_H_
#define _SPECIALSUPPORT_H_
#include <string>
#include "Support.h"

class SuppecialSupport : public Support{
private:
    int number_;
public:
    SuppecialSupport(std::string name, int number) : Support(name){
        number_ = number;
    };

protected:
    bool resolve(Trouble trouble) override{
        if (trouble.getNumber() == number_ ){
            return true;
        }else{
            return false;
        }
    };
};

#endif //_SPECIALSUPPORT_H_
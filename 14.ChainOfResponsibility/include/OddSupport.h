#ifndef _ODDSUPPORT_H_
#define _ODDSUPPORT_H_
#include <string>
#include "Support.h"

class OddSupport : public Support{
public:
    OddSupport(std::string name) : Support(name){
    };

protected:
    bool resolve(Trouble trouble) override{
        if (trouble.getNumber() % 2 == 1){
            return true;
        }else{
            return false;
        }
    };
};

#endif //_ODDSUPPORT_H_
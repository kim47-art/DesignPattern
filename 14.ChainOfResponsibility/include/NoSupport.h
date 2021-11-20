#ifndef _NOSUPPORT_H_
#define _NOSUPPORT_H_
#include <string>
#include "Support.h"

class NoSupport : public Support{
public:
    NoSupport(std::string name) : Support(name){
    };

protected:
    bool resolve(Trouble trouble) override{
        return false;
    };
};

#endif //_NOSUPPORT_H_
#ifndef _LIMMITSUPPORT_H_
#define _LIMMITSUPPORT_H_
#include <string>
#include "Support.h"

class LimmitSupport : public Support{
private:
    int limit_;
public:
    LimmitSupport(std::string name, int limit) : Support(name){
        limit_ = limit;
    };

protected:
    bool resolve(Trouble trouble) override{
        if (trouble.getNumber() < limit_){
            return true;
        }else{
            return false;
        }
    };
};

#endif //_LIMMITSUPPORT_H_
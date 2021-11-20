#ifndef _SUPPORT_H_
#define _SUPPORT_H_
#include <string>
#include <iostream>
#include "Trouble.h"
class Support{
private:
    std::string name_;
    Support* next_;
public:
    Support(std::string name){
        name_ = name;
    };
    
    Support* setNext(Support* support){
        next_ = support;
        return next_;
    };

    virtual void support(Trouble trouble) final{
        if (resolve(trouble)){
            done(trouble);
        }else if (next_ != nullptr){
            next_->support(trouble);
        }else{
            fail(trouble);
        }
    };

    std::string toString(){
        return "[" + name_ + "]";
    };

protected:
    virtual bool resolve(Trouble trouble) = 0;
    void done(Trouble trouble){
        std::cout << trouble.toString() << "is resolved by" << toString() << "." << std::endl;
    };
    void fail(Trouble trouble){
        std::cout << trouble.toString() << "cannot be resolved." << std::endl;
    };
};

#endif //_SUPPORT_H_
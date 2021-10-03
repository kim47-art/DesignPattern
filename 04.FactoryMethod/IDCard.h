#ifndef _IDCARD_
#define _IDCARD_
#include <string>
#include <iostream>
#include "Product.h"
class IDCard : public Product{
    private:
        std::string owner_;
    public:
        IDCard(std::string owner){
            std::cout << owner << "のカードを作ります。" << std::endl;
            this->owner_ = owner;
        };
        void use() override{
            std::cout << owner_ << "のカードを使います。" << std::endl;
        };
        std::string getOwner(){
            return owner_;
        };
};
#endif //_IDCARD_
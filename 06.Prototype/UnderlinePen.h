#ifndef _UNDERLINEPEN_
#define _UNDERLINEPEN_
#include <string>
#include <iostream>
#include "Product.h"
class UnderlinePen : public Product{
    private:
        char ulchar_;
    public:
        UnderlinePen(char decochar){
            this->ulchar_ = decochar;
        };
        void use(std::string s) override{
            int length = s.length();
            std::cout << "\"" << s << "\"" << std::endl;
            std::cout << " ";
            for (size_t i = 0; i < length; i++)
            {
                std::cout << ulchar_;
            }
            std::cout << " " <<std::endl;
        };
        Product* createCrone() override{
            return (Product*)(new UnderlinePen(*this));
        };
};
#endif //_UNDERLINEPEN_
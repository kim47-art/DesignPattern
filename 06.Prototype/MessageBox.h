#ifndef _MESSAGEBOX_
#define _MESSAGEBOX_
#include <string>
#include <iostream>
#include "Product.h"
class MessageBox : public Product{
    private:
        char decochar_;
    public:
        MessageBox(char decochar){
            this->decochar_ = decochar;
        };
        void use(std::string s) override{
            int length = s.length();
            for (size_t i = 0; i < length+4; i++)
            {
                std::cout << decochar_;
            }
            std::cout << " " <<std::endl;
            std::cout << decochar_ << " " << s << "" << decochar_ << std::endl;
            for (size_t i = 0; i < length+4; i++)
            {
                std::cout << decochar_;
            }
            std::cout << " " <<std::endl;
        };
        Product* createCrone() override{
            return (Product*)(new MessageBox(*this));
        };
};
#endif //_MESSAGEBOX_
#ifndef _PRODUCT_
#define _PRODUCT_
#include <string>
class Product{
    public:
        virtual void use(std::string s) = 0;
        virtual Product* createCrone() = 0;
};
#endif //_PRODUCT_
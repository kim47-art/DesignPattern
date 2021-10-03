#ifndef _FACTORY_
#define _FACTORY_
#include <string>
#include "Product.h"

class Factory{
    public:
        virtual Product* create(std::string owner) final
        {
            Product* p = createProduct(owner);
            registerProduct(p);
            return p;
        };
    protected:
        virtual Product* createProduct(std::string owner) = 0;
        virtual void registerProduct(Product* product) = 0;
};
#endif //_FACTORY_
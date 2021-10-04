#ifndef _MANAGER_
#define _MANAGER_
#include <string>
#include <map>
#include "Product.h"
class Manager{
    private:
        std::map<std::string, Product*> showcase_;
    public:
        Product* create(std::string protoname){
            Product* p = showcase_.at(protoname);
            return p->createCrone();
        };
        void register_product(std::string name, Product* product){
            showcase_.insert(std::make_pair(name, product));
        };
};
#endif //_MANAGER_
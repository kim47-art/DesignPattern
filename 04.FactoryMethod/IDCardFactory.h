#ifndef _IDCARDFACTORY_
#define _IDCARDFACTORY_
#include <string>
#include <vector>
#include "Factory.h"
#include "IDCard.h"
class IDCardFactory : public Factory{
    private:
        std::vector<std::string> owners_;
    protected:
        Product* createProduct(std::string owner) override{
            return new IDCard(owner);
        };
       void registerProduct(Product* product) override{
           owners_.push_back(((IDCard*)product)->getOwner());
       };
    public:
        std::vector<std::string> getOwners(){
            return owners_;
        };
};
#endif //_IDCARDFACTORY_
#ifndef _ITEM_
#define _ITEM_
#include <string>
class Item{
    protected:
        std::string caption_;
    public:
        Item(std::string caption){
            caption_ = caption;
        };
        virtual std::string makeHTML() = 0;
};
#endif //_ITEM_
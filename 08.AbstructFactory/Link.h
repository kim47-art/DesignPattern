#ifndef _LINK_
#define _LINK_
#include <string>
#include "Item.h"
class Link : public Item{
    protected:
        std::string url_;
    public:
        Link(std::string caption, std::string url) : Item(caption){
            this->url_ = url;
        };
};
#endif //_LINK_
#ifndef _TABLELINK_
#define _TABLELINK_
#include <string>
#include "Link.h"
class TableLink : public Link{
    public:
        TableLink(std::string caption, std::string url):Link(caption, url){
        };
        std::string makeHTML(){
            return std::string("<td><a href=\""+url_+"\">"+caption_+"</a></td>\n");
        };
};
#endif //_TABLELINK_
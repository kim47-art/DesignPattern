#ifndef _TABLEPAGE_
#define _TABLEPAGE_
#include <string>
#include <vector>
#include <fstream>
#include "Item.h"
class TablePage :public Page{
    public:
        TablePage(std::string title, std::string author):Page(title,author){
        };
        std::string makeHTML() override {
            std::string buffer = std::string();
            buffer.append("<html><head><title>"+title_+"</title></head>\n");
            buffer.append("<body>\n");
            buffer.append("<h1>"+title_+"</h1>\n");
            buffer.append("<table width=\"80%\" border=\"3\">\n");
            for(auto& e : content_){
                buffer.append("<tr>"+ e->makeHTML()+"<tr>");
            }
            buffer.append("</table>\n");
            buffer.append("<hr><address>"+author_+"</address>");
            buffer.append("</body></html>\n");
            return buffer;
        };
};
#endif //_TABLEPAGE_
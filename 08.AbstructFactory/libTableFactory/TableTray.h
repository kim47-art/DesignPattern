#ifndef _TABLETRAY_
#define _TABLETRAY_
#include <string>
#include <vector>
#include "Tray.h"
class TableTray : public Tray{
    public:
        TableTray(std::string caption) : Tray(caption){
        };
        std::string makeHTML() override{
            std::string buffer = std::string();
            buffer.append("<td>");
            buffer.append("<table width=\"100%\" border=\"1\"><tr>");
            buffer.append("<td bgcoloer=\"#cccccc\" align=\"=\"center\" colspan=\""+std::to_string(tray_.size())+"\"><b>" +caption_+"</b></td>");
            buffer.append("</tr>\n");
            buffer.append("<tr>\n");
            for (const auto& e : tray_)
            {
                buffer.append(e->makeHTML());
            }
            buffer.append("</tr></table>");
            buffer.append("</td");
            return buffer;
        };
};
#endif //_TABLETRAY_
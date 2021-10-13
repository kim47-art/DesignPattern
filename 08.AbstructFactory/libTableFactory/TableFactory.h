#ifndef _TABLEFACTORY_
#define _TABLEFACTORY_
#include <string>
#include <dlfcn.h>
#include "Factory.h"
#include "TableLink.h"
#include "TableTray.h"
#include "TablePage.h"
class TableFactory : public Factory{
    public:
        Link* createLink(std::string caption, std::string url) override{
            return new TableLink(caption, url);
        };
        Tray* createTray(std::string caption) override{
            return new TableTray(caption);
        };
        Page* createPage(std::string title, std::string author) override{
            return new TablePage(title, author);
        };
};
#endif //_TABLEFACTORY_
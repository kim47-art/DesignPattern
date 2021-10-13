#ifndef _FACTORY_
#define _FACTORY_
#include <string>
#include <dlfcn.h>
#include <memory>
#include "Link.h"
#include "Tray.h"
#include "Page.h"
class Factory;
typedef Factory* PluginInterfaceCreateFunction();
class Factory{
    public:
        static Factory* getFactory(std::string libname){
            const auto lib = dlopen(libname.c_str(), RTLD_LAZY);
            if(lib == NULL){
                std::cout << "dlopen error:libname=" << libname <<std::endl;
                exit(-1);
            }
            auto createfunc = (PluginInterfaceCreateFunction*)(dlsym(lib, "makeObject"));
            Factory* factory = createfunc();
        };

        virtual Link* createLink(std::string caption, std::string url) = 0;
        virtual Tray* createTray(std::string caption) = 0;
        virtual Page* createPage(std::string title, std::string author) = 0;
};
//typedef std::unique_ptr<Factory> PluginInterfaceCreateFunction();

#endif //_FACTORY_
#ifndef __PRINTBANNER__
#define __PRINTBANNER__
#include "Print.h"
#include "Banner.h"
class PrintBanner:public Print, public Banner{
    public:
        PrintBanner(std::string string):Banner(string){
        };
        void printWeak() override{
            showWithParen();
        };
        void printStrong() override{
            showWithAster();
        };
};
#endif //__PRINTBANNER__
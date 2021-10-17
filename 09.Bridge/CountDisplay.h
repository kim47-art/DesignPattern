#ifndef _COUNTDISPLAY_
#define _COUNTDISPLAY_
#include <string>
#include "Display.h"
class CountDisplay : public Display{
    public:
        CountDisplay(DisplayImpl* impl):Display(impl){
        };
        void multiDisplay(int times){//times解繰り返して表示する。
            open();
            for (size_t i = 0; i < times; i++)
            {
                print();
            }
            close();
        };
};
#endif //_COUNTDISPLAY_
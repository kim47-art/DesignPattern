#ifndef _BORDER_
#define _BORDER_
#include "Display.h"
class Border : public Display{
    protected:
        Display* display_;
        Border(Display* display){
            display_ = display;
        };
};
#endif //_BORDER_
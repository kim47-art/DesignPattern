#ifndef _STRATEGY_
#define _STRATEGY_
#include "Hand.h"
class Strategy{
    public:
        virtual Hand nextHand() = 0;
        virtual void study(bool win) = 0;
};

#endif //_STRATEGY_
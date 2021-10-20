#ifndef _WINNINGSTRATEGY_
#define _WINNINGSTRATEGY_
#include <random>
#include "Strategy.h"
class WinningStrategy : public Strategy{
    private:
        std::mt19937 mt_;
        bool won_;
        int prevHandValue_;
    public:
        WinningStrategy(int seed):won_(false){
            mt_.seed(seed);
            prevHandValue_ = Hand::HANDVALUE_GUU;
        }
        Hand nextHand() override{
            if(!won_){
                prevHandValue_ = mt_() % 3;
            }
            return Hand::getHand(prevHandValue_);
        };
        void study(bool win) override{
            won_ = win;
        };
};

#endif //_WINNINGSTRATEGY_
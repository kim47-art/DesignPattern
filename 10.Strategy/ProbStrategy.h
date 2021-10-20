#ifndef _PROBSTRATEGY_
#define _PROBSTRATEGY_
#include "Hand.h"
#include <vector>
class ProbStrategy: public Strategy{
    private:
        std::mt19937 mt_;
        int prevHandValue_;
        int currentHandValue_;
        std::vector<std::vector<int>> history_;
    public:
        ProbStrategy(int seed){
            mt_.seed(seed);
            prevHandValue_ = Hand::HANDVALUE_GUU;
            currentHandValue_ = Hand::HANDVALUE_GUU;
            history_.assign(3, std::vector<int>(3, 1));
        }
        Hand nextHand() override{
            int bet = mt_() % getSum(currentHandValue_);
            int handvalue = Hand::HANDVALUE_GUU;
            if(bet < history_.at(currentHandValue_).at(0))
                handvalue = Hand::HANDVALUE_GUU;
            else if (bet < history_.at(currentHandValue_).at(0) + history_.at(currentHandValue_).at(1)){
                handvalue = Hand::HANDVALUE_CHO;
            }else{
                handvalue = Hand::HANDVALUE_PAA;
            }
            prevHandValue_ = currentHandValue_;
            currentHandValue_ = handvalue;
            return Hand::getHand(handvalue);
        };
        void study(bool win) override{
            if(win){
                history_.at(prevHandValue_).at(currentHandValue_)++;
            }else{
                history_.at(prevHandValue_).at((currentHandValue_ + 1) % 3 )++;
                history_.at(prevHandValue_).at((currentHandValue_ + 2) % 3 )++;
            }
        };
    private:
        int getSum(int hv){
            int sum = 0;
            for (int i = 0; i < 3; i++)
            {
                sum += history_.at(hv).at(i);
            }
            return sum;
        };
};

#endif //_PROBSTRATEGY_
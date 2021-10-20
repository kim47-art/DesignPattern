#ifndef _HAND_
#define _HAND_
#include <string>
class Hand{
    public:
        static const int HANDVALUE_GUU = 0;//グーを表す値
        static const int HANDVALUE_CHO = 1;//チョキを表す値
        static const int HANDVALUE_PAA = 2;//パーを表す値
        static const Hand hand[];//じゃんけんの手を表す3つのインスタンス
    private:
        static const std::string name[];
        int handvalue_;
        Hand(int handvalue){
            handvalue_ = handvalue;
        };
    public:
        static Hand getHand(int handvalue){
            return hand[handvalue];
        };
        bool isStrongerThan(Hand h){
            return fight(h) == 1;
        };
        bool isWeakerThan(Hand h){
            return fight(h) == -1;
        };
        int fight(Hand h){
            if(this == &h){
                return 0;
            }else if( (this->handvalue_ +1) % 3 == h.handvalue_){
                return 1;
            }else{
                return -1;
            }
        };
        std::string toString(){
            return name[handvalue_];
        };
};

#endif //_HAND_
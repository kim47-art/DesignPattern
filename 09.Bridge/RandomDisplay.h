#ifndef _RANDOMDISPLAY_
#define _RANDOMDISPLAY_
#include <string>
#include <random>
#include "CountDisplay.h"
class RandomDisplay : public CountDisplay{
    public:
        RandomDisplay(DisplayImpl* impl):CountDisplay(impl){
        };
        void randomDisplay(int times){//0以上times未満回繰り返して表示する。
            std::random_device rnd;     // 非決定的な乱数生成器を生成
            std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
            std::uniform_int_distribution<> rand100(0, times-1);        // [0, time-1] 範囲の一様乱数
            multiDisplay(rand100(mt)); 
        };
};
#endif //_RANDOMDISPLAY_
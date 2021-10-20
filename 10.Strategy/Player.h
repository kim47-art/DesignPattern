#ifndef _PLAYER_
#define _PLAYER_
#include <string>
#include <sstream>
#include "Strategy.h"
#include "Hand.h"
class Player{
    private:
        std::string name_;
        Strategy* strategy_;
        int wincount_;
        int losecount_;
        int gamecount_;
    public:
        Player(std::string name, Strategy* strategy){
            name_ = name;
            strategy_ = strategy;
            wincount_ = 0;
            losecount_ = 0;
            gamecount_ = 0;
        };
        Hand nextHand(){
            return strategy_->nextHand();
        };
        void win(){
            strategy_->study(true);
            wincount_++;
            gamecount_++;
        };
        void lose(){
            strategy_->study(false);
            losecount_++;
            gamecount_++;
        };
        void even(){
            gamecount_++;
        };
        std::string toString(){
            std::stringstream ret;
            ret << "[" << name_ << ":" << gamecount_ <<" games, "; 
            ret << wincount_ << " win, " << losecount_ << " lose]";
            return ret.str();
        };
};
#endif //_PLAYER_
#include "Hand.h"
#include "WinningStrategy.h"
#include "ProbStrategy.h"
#include "Player.h"
#include <stdio.h>
#include <iostream>
int main(int argc, char *argv[]){
    if(argc != 3){
        std::cout << "Usage: main.exe randomseed1 randomseed2"<< std::endl;
        std::cout << "Sample: main.exe 314 15"<< std::endl;     
        exit(0);
    }
    int seed1 = atoi(argv[1]);
    int seed2 = atoi(argv[2]);
    Player player1 = Player("Taro", new WinningStrategy(seed1));
    Player player2 = Player("Hana", new ProbStrategy(seed2));
    for (size_t i = 0; i < 1000; i++)
    {
        Hand nextHand1 = player1.nextHand();
        Hand nextHand2 = player2.nextHand();
        if (nextHand1.isStrongerThan(nextHand2)){
            std::cout << "Winner:" << player1.toString() << std::endl;
            player1.win();
            player2.lose(); 
        }else if(nextHand2.isStrongerThan(nextHand1)){
            std::cout << "Winner:" << player2.toString() << std::endl;
            player1.lose();
            player2.win(); 
        }else{
            std::cout << "Even..." << std::endl;
            player1.even();
            player2.even();
        }
    }
    std::cout << "Total result:" << std::endl;
    std::cout << player1.toString() << std::endl;
    std::cout << player2.toString() << std::endl;
}
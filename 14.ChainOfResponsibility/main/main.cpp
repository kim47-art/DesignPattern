#include "Trouble.h"
#include "Support.h"
#include "NoSupport.h"
#include "LimitSupport.h"
#include "OddSupport.h"
#include "SpecialSupport.h"

#include <iostream>
int main(int argc, char *argv[]){
    Support* alice   = new NoSupport("Alice");
    Support* bob     = new LimmitSupport("Bob", 100);
    Support* charlie = new SuppecialSupport("Charlie", 429);
    Support* diana   = new LimmitSupport("Diana", 200);
    Support* eimo    = new OddSupport("Eimo");
    Support* fred    = new LimmitSupport("Fred",300);

    alice->setNext(bob)->setNext(charlie)->setNext(diana)->setNext(eimo)->setNext(fred);
    //様々なトラブル発生
    for (int i = 0; i < 500; i+=33)
    {
        alice->support(i);
    }
}
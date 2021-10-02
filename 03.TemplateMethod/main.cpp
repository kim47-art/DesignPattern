#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"

int main(){
    AbstractDisplay* d1 = new CharDisplay('H'); 
    AbstractDisplay* d2 = new StringDisplay("Hello,world."); 
    AbstractDisplay* d3 = new StringDisplay("こんにちは。"); 
    d1->display();
    d2->display();
    d3->display();
    return 0;
}
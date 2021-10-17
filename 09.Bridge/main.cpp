#include "CountDisplay.h"
#include "RandomDisplay.h"
#include "StringDisplayImpl.h"
int main(int argc, char *argv[]){
    Display* d1 = new Display(new StringDisplayImpl("Hello, Japan."));
    Display* d2 = new CountDisplay(new StringDisplayImpl("Hello, World."));
    CountDisplay* d3 = new CountDisplay(new StringDisplayImpl("Hello, Universe."));
    RandomDisplay* d4 = new RandomDisplay(new StringDisplayImpl("Hello, Universe."));
  
    d1->display();
    d2->display();
    d3->display();
    d3->multiDisplay(5);
    d4->randomDisplay(5);
}
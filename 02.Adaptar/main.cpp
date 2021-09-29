#include "Print.h"
#include "PrintBanner.h"

int main(){
    Print* p = new PrintBanner(std::string("Hello"));
    p->printWeak();
    p->printStrong();
}
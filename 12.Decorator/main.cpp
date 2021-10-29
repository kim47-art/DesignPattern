#include "StringDisplay.h"
#include "SideBorder.h"
#include "FullBorder.h"
#include "UpdownBorder.h"
int main(int argc, char *argv[]){
    Display* b1 = new StringDisplay("Hello, world.");
    Display* b2 = new UpdownBorder(b1, '-');
    Display* b3 = new SideBorder(b2,'*');
    b1->show();
    b2->show();
    b3->show();
    Display* b4 = new FullBorder(
                    new UpdownBorder(
                        new SideBorder(
                            new UpdownBorder(
                                new SideBorder(
                                    new StringDisplay("こんにちは"),
                                    '*'
                                ),
                                '='
                            ),
                            '|'
                        ),
                        '/'
                    )
    );
    b4->show();
}
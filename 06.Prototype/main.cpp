#include <iostream>
#include "Manager.h"
#include "UnderlinePen.h"
#include "MessageBox.h"

int main(){
    //準備
    Manager manager = Manager();
    UnderlinePen upen = UnderlinePen('~');
    MessageBox mbox = MessageBox('*');
    MessageBox sbox = MessageBox('/');
    manager.register_product("strong message",&upen);
    manager.register_product("warning box",&mbox);
    manager.register_product("slash box",&sbox);
    //生成
    Product* p1 = manager.create("strong message");
    p1->use("Hello world");
    Product* p2 = manager.create("warning box");
    p2->use("Hello world");
    Product* p3 = manager.create("slash box");
    p3->use("Hello world");
}
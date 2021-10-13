#ifndef _TRAY_
#define _TRAY_
#include <string>
#include <vector>
#include "Item.h"
class Tray : public Item{
    protected:
        std::vector<Item*> tray_;
    public:
        Tray(std::string caption) : Item(caption){
        };
        void add(Item* item){
            tray_.push_back(item);
        };
};
#endif //_TRAY_
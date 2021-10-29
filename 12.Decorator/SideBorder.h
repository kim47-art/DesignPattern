#ifndef _SIDEBORDER_
#define _SIDEBORDER_
#include "Border.h"
class SideBorder : public Border{
    private:
        char borderChar_;
    public:
        SideBorder(Display* display, char ch):Border(display){
            borderChar_ = ch;
        };
        int getColumns() override{
            return 1 + display_->getColumns() + 1;
        };
        int getRows() override{
            return display_->getRows();
        };
        std::string getRowText(int row) override{
            return std::string(&borderChar_) + display_->getRowText(row) + std::string(&borderChar_);
        };
};
#endif //_SIDEBORDER_
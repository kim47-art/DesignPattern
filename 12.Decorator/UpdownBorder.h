#ifndef _UPDOWNBORDER_
#define _UPDOWNBORDER_
#include "Border.h"
class UpdownBorder : public Border{
    private:
        char borderChar_;
    public:
        UpdownBorder(Display* display, char ch):Border(display){
            borderChar_ = ch;
        };
        int getColumns() override{
            return display_->getColumns();
        };
        int getRows() override{
            return 1 + display_->getRows() + 1;
        };
        std::string getRowText(int row) override{
            if (row == 0){
                return makeLine(borderChar_ , display_->getColumns());
            }else if (row == display_->getRows() + 1){
                return makeLine(borderChar_ , display_->getColumns());
            }else{
                return display_->getRowText(row -1);
            }
        };
    private:
        std::string makeLine(char ch, int count){
            std::string buf;
            char tch[] = {ch};
            for (size_t i = 0; i < count; i++)
            {
                buf += std::string(tch);
            }
            return buf;
        };
};
#endif //_UPDOWNBORDER_
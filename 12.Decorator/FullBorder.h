#ifndef _FULLBORDER_
#define _FULLBORDER_
#include "Border.h"
class FullBorder : public Border{
    public:
        FullBorder(Display* display):Border(display){
        };
        int getColumns() override{
            return 1 + display_->getColumns() + 1;
        };
        int getRows() override{
            return 1 + display_->getRows() + 1;
        };
        std::string getRowText(int row) override{
            if (row == 0){
                return "+" + makeLine('-', display_->getColumns()) + "+";
            }else if (row == display_->getRows() + 1){
                return "+" + makeLine('-', display_->getColumns()) + "+";
            }else{
                return "|" + display_->getRowText(row -1) + "|";
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
#endif //_FULLBORDER_
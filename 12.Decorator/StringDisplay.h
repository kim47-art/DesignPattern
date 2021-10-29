#ifndef _STRINGDISPLAY_
#define _STRINGDISPLAY_
#include "Display.h"
class StringDisplay : public Display{
    private:
        std::string string_;
    public:
        StringDisplay(std::string string){
            string_ = string;
        };
        int getColumns() override{
            return string_.length();
        };
        int getRows() override{
            return 1;
        };
        std::string getRowText(int row){
            if (row == 0){
                 return string_;
            }else{
                return std::string("");
            }
        };
};
#endif //_STRINGDISPLAY_
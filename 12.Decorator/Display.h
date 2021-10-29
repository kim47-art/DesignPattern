#ifndef _DISPLAY_
#define _DISPLAY_
#include <string>
#include <iostream>
class Display{
    public:
        virtual int getColumns() = 0;
        virtual int getRows() = 0;
        virtual std::string getRowText(int row) = 0;
        virtual void show() final{
            for (size_t i = 0; i < getRows(); i++)
            {
                std::cout << getRowText(i) << std::endl;
            }
        };
};
#endif //_DISPLAY_
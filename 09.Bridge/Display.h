#ifndef _DISPLAY_
#define _DISPLAY_
#include <string>
#include "DisplayImpl.h"
class Display{
    private:
        DisplayImpl* impl_;
    public:
        Display(DisplayImpl* impl){
            impl_ = impl;
        };
        void open(){
            impl_->rawOpen();
        };
        void print(){
            impl_->rawPrint();
        };
        void close(){
            impl_->rawClose();
        };
        virtual void display() final {
            open();
            print();
            close();
        };
};
#endif //_DISPLAY_
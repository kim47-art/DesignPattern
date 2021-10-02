#ifndef _ABSTRACTDISPLAY_
#define _ABSTRACTDISPLAY_

class AbstractDisplay{
    public:
        virtual void open(){};
        virtual void print(){};
        virtual void close(){};
        virtual void display() final{
            open();
            for (int i = 0; i < 5; i++)
            {
                print();
            }
            close();
        };
};
#endif //_ABSTRACTDISPLAY_
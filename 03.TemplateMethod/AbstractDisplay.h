#ifndef _ABSTRACTDISPLAY_
#define _ABSTRACTDISPLAY_

class AbstractDisplay{
    public:
        virtual void open() = 0;
        virtual void print() = 0;
        virtual void close() = 0;
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
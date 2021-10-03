#ifndef __PRINT__
#define __PRINT__
class Print{
    public:
        virtual void printWeak() = 0;
        virtual void printStrong() = 0;
};
#endif //__PRINT__
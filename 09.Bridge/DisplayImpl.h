#ifndef _DISPLAYIMPL_
#define _DISPLAYIMPL_
class DisplayImpl{
    public:
        virtual void rawOpen() = 0;
        virtual void rawPrint() = 0;
        virtual void rawClose() = 0;
};
#endif //_DISPLAYIMPL_
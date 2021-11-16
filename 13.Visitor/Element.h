#ifndef _ELEMENT_
#define _ELEMENT_
#include "Visitor.h"
class Element {
    public:
        virtual void accept(Visitor* v) = 0;
};
#endif //_ELEMENT_
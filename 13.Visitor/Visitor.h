#ifndef _VISITOR_
#define _VISITOR_
//#include "File.h"
//#include "Directry.h"

class File;
class Directry;

class Visitor {
    public:
        virtual void visit(File* file) = 0;
        virtual void visit(Directry* directry) = 0;
};
#endif //_VISITOR_
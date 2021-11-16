#ifndef _LIST_VISITOR_
#define _LIST_VISITOR_
#include "Visitor.h"

class ListVisitor: public Visitor {
    private:
        std::string currentdir_ = "";

    public:
        void visit(File* file) override;
        void visit(Directry* directry) override;
};
#endif //_LIST_VISITOR_
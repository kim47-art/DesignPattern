#ifndef _FILE_FIND_VISITOR_
#define _FILE_FIND_VISITOR_
#include <vector>
#include "Visitor.h"

class FileFindVisitor: public Visitor {
    private:
        std::string find_target_extension_="";
        std::vector<File*> foundFiles_;
    public:
        FileFindVisitor(std::string find_target_extension);
        void visit(File* file) override;
        void visit(Directry* directry) override;
        std::vector<File*> getFoundFiles();
};
#endif //_FILE_FIND_VISITOR_
#include <iostream>
#include <string>

#include "FileFindVisitor.h"
#include "File.h"
#include "Directry.h"

FileFindVisitor::FileFindVisitor(std::string find_target_extension):
    find_target_extension_(find_target_extension),
    foundFiles_()
{

};

void FileFindVisitor::visit(File* file){
    std::string s = file->getName();
    std::string t = find_target_extension_;
    if (s.size() >= find_target_extension_.size() &&
        s.find(t, s.size() - t.size()) != std::string::npos) {
        foundFiles_.push_back(file);
    }
};

void FileFindVisitor::visit(Directry* directry){
    std::vector<Entry*> it = directry->getVector();
    for(const auto& entry : it){
        entry->accept(this);
    }
};
std::vector<File*> FileFindVisitor::getFoundFiles(){
    return foundFiles_;
};


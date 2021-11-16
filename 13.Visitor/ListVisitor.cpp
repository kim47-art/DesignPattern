#include <iostream>
#include <string>

#include "ListVisitor.h"
#include "File.h"
#include "Directry.h"
void ListVisitor::visit(File* file){
    std::cout << currentdir_ << "/" << file->toString() << std::endl;
};

void ListVisitor::visit(Directry* directry){
    std::cout << currentdir_ << "/" << directry->toString() <<std::endl;
    std::string savedir = currentdir_;
    currentdir_ = currentdir_ + "/" + directry->getName();
    std::vector<Entry*> it = directry->getVector();
    for(const auto& entry : it){
        entry->accept(this);
    }
    currentdir_ = savedir;
};

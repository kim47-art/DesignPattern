#include "Directry.h"


Directry::Directry(std::string name){
    name_ = name;
};

std::string Directry::getName(){
    return name_;
};
int Directry::getSize(){
    int size = 0;
    for(const auto& entry : directry_){
        size += entry->getSize();
    }
    return size;
};

void Directry::add(Entry* entry){
    directry_.push_back(entry);
};
std::vector<Entry*> Directry::getVector(){
    return directry_;
};
void Directry::accept(Visitor* v){
    v->visit(this);
};
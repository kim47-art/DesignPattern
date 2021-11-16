
#include "File.h"
File::File(std::string name, int size){
    name_ = name;
    size_ = size;
}
std::string File::getName(){
    return name_;
};
int File::getSize(){
    return size_;
};
void File::accept(Visitor* v){
    v->visit(this);
};

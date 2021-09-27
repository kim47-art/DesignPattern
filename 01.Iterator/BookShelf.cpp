#include "BookShelf.h"

BookShelf::BookShelf(int maxsize)
{
};

BookShelf::~BookShelf(){
    books_.clear();
};

Book BookShelf::getBookAt(int index){
    return books_.at(index);
};

void BookShelf::appendBook(Book* book){
    books_.push_back(*book);
};

int BookShelf::getLength(){
    return (int)books_.size();
};

BookShelfIterator* BookShelf::iterator(){
    return new BookShelfIterator(this);
};

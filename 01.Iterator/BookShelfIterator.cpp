#include "BookShelfIterator.h"
BookShelfIterator::BookShelfIterator(BookShelf* bookshelf){
    this->bookshelf_ = bookshelf;
    this->index_ = 0;
};

bool BookShelfIterator::hasNext(){
    if (index_ < bookshelf_->getLength()){
        return true;
    }else{
        return false;
    }
};

const Book BookShelfIterator::next(){
    Book book = bookshelf_->getBookAt(index_);
    index_++;
    return book;
};
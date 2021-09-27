#ifndef _BOOKSHELF_H_
#define _BOOKSHELF_H_
#include <vector>
#include "Aggregate.h"
#include "Book.h"
#include "BookShelfIterator.h"
class BookShelfIterator;
class BookShelf : Aggregate<BookShelfIterator>{
    private:
        std::vector<Book> books_; 
    public:
        BookShelf(int maxsize);
        ~BookShelf();
        Book getBookAt(int index);
        void appendBook(Book* book);
        int getLength();
        BookShelfIterator* iterator() override;
};
#endif //_BOOKSHELF_H_

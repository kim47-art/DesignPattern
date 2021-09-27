#ifndef _BOOKSHELFITERATOR_H_
#define _BOOKSHELFITERATOR_H_
#include "Iterator.h"
#include "Book.h"
#include "BookShelf.h"
class BookShelf;
class BookShelfIterator : Iterator<Book>{
    private:
        BookShelf* bookshelf_;
        int index_;
    public:
        BookShelfIterator(BookShelf* bookshelf);
        bool hasNext() override;
        const Book next() override;
};
#endif //_BOOKSHELFITERATOR_H_
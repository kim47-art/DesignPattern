#include <string>
#include <iostream>
#include "BookShelf.h"
#include "Book.h"

int main(){
    BookShelf* bookshelf = new BookShelf(4);
    bookshelf->appendBook(new Book(std::string("Around the world in 80 Days")));
    bookshelf->appendBook(new Book(std::string("Bible")));
    bookshelf->appendBook(new Book(std::string("Cinderella")));
    bookshelf->appendBook(new Book(std::string("Daddy-Long-Legs")));
    BookShelfIterator* it = bookshelf->iterator();
    while(it->hasNext()){
        Book book = (Book)it->next();
        std::cout << book.getName() << std::endl;
    }
    
    return 0;
}
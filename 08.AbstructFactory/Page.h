#ifndef _PAGE_
#define _PAGE_
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Item.h"
class Page {
    protected:
        std::string title_;
        std::string author_;
        std::vector<Item*> content_;
    public:
        Page(std::string title, std::string author){
            this->title_ = title;
            this->author_ = author;
        };
        void add(Item* item){
            content_.push_back(item);
        };
        void output(){
            try
            {
                std::string filename = title_ + ".html";
                std::ofstream writer = std::ofstream();
                writer.open(filename, std::ios::out);
                writer << this->makeHTML();
                writer.close();
                std::cout << filename << "を作成しました。" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        };
        virtual std::string makeHTML() = 0 ;
};
#endif //_PAGE_
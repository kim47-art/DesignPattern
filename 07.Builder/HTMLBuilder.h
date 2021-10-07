#ifndef _HTMLBUILDER_
#define _HTMLBUILDER_
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Builder.h"
class HTMLBuilder: public Builder{
    private:
        std::string filename_;
        std::ofstream writer_;
    public:
        void makeTitle(std::string title) override{
            filename_ = title + ".html";
            try
            {
                writer_.open(filename_, std::ios::out);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            writer_ << "<html><head><title>" << title << "</title></head><body>" <<std::endl;
            //タイトルを出力
            writer_ << "<h1>" << title << "</h>" << std::endl;        
        };
        void makeString(std::string str) override{
            writer_ << "<p>" << str << "</p>" << std::endl;   
        };
        void makeItems(std::vector<std::string> items) override{
            writer_ << "<ul>" << std::endl;   
            for (size_t i = 0; i <items.size(); i++){
                writer_ << "<li>" << items.at(i) << "</li>" << std::endl;
            }
            writer_ << "</ul>" << std::endl;
        };
        void close() override{
            writer_ << "</body></html>" << std::endl;
            writer_.close();
        };
        std::string getResult(){
            return filename_;
        };
};
#endif //_HTMLBUILDER_
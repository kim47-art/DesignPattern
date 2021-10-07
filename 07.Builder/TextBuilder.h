#ifndef _TEXTBUILDER_
#define _TEXTBUILDER_
#include <string>
#include <vector>
#include "Builder.h"
class TextBuilder: public Builder{
    private:
        std::string buffer_;
    public:
        void makeTitle(std::string title) override{
            buffer_.append("===============\n");
            buffer_.append("『"+title+"』\n");
            buffer_.append("\n");
        };
        void makeString(std::string str) override{
            buffer_.append("■"+str+"\n");
            buffer_.append("\n");
        };
        void makeItems(std::vector<std::string> items) override{
            for (size_t i = 0; i <items.size(); i++){
                buffer_.append(items.at(i)+"\n");
            }
            buffer_.append("\n");
        };
        void close() override{
            buffer_.append("===============\n");
        };
        std::string getResult(){
            return buffer_;
        };
};
#endif //_TEXTBUILDER_
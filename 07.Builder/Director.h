#ifndef _DIRECTOR_
#define _DIRECTOR_
#include <string>
#include <vector>
#include "Builder.h"
class Director{
    private:
        Builder* p_builder_;
    public:
        Director(Builder* builder){
            p_builder_ = builder;
        };
        void construct(){
            p_builder_->makeTitle("Greeting");
            p_builder_->makeString("朝から昼にかけて");
            p_builder_->makeItems(std::vector<std::string>{
                "おはようございます。",
                "こんにちは。"});
            p_builder_->makeString("夜に");
            p_builder_->makeItems(std::vector<std::string>{
                "こんばんは。",
                "おやすみなさい。",
                "さようなら。"});
            p_builder_->close();
        };
};
#endif //_DIRECTOR_
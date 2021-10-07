#include "Director.h"
#include "HTMLBuilder.h"
#include "TextBuilder.h"
void usage();
int main(int argc, char *argv[]){
    if(argc != 2){
        usage();
        exit(0);
    }
    if(std::string(argv[1]) == "plain"){
        TextBuilder textbuilder = TextBuilder();
        Director director = Director(&textbuilder);
        director.construct();
        std::string result = textbuilder.getResult();
        std::cout << result << std::endl;
    }else if(std::string(argv[1]) == "html"){
        HTMLBuilder htmlbuilder = HTMLBuilder();
        Director director = Director(&htmlbuilder);
        director.construct();
        std::string result = htmlbuilder.getResult();
        std::cout << result <<"が作成されました。"<< std::endl;
    }else{
        usage();
        exit(0);
    }
}
void usage(){
    std::cout << "Usage:$main.exe plain     プレーンテキストで文書作成"<< std::endl;
    std::cout << "Usage:$main.exe html      HTMLファイルで文書作成"<< std::endl;
}
#include "File.h"
#include "Directry.h"
#include <iostream>
int main(int argc, char *argv[]){
    try
    {
        std::cout << "Making root entries..." << std::endl;
        Directry rootdir = Directry("root");
        Directry bindir = Directry("bin");
        Directry tmpdir = Directry("tmp");
        Directry usrdir = Directry("usr");
        rootdir.add(&bindir);
        rootdir.add(&tmpdir);
        rootdir.add(&usrdir);
        bindir.add(new File("vi",10000));
        bindir.add(new File("latex",20000));
        rootdir.printList();

        std::cout << "" << std::endl;
        std::cout << "Making user entries..." << std::endl;
        Directry yuki = Directry("yuki");
        Directry hanako = Directry("hanako");
        Directry tomura = Directry("tomura");
        usrdir.add(&yuki);
        usrdir.add(&hanako);
        usrdir.add(&tomura);
        yuki.add(new File("diary.html",100));
        yuki.add(new File("Composite.java",200));
        hanako.add(new File("memo.tex",300));
        tomura.add(new File("game.doc",400));
        tomura.add(new File("junk.mail",500));
        rootdir.printList();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
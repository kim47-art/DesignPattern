#ifndef _DIRECTRY_
#define _DIRECTRY_
#include <vector>
#include <iostream>
class Directry : public Entry{
    private:
        std::string name_;
        std::vector<Entry*> directory_; 
    public:
        Directry(std::string name){
            name_ = name;
        }
        std::string getName() override{
            return name_;
        };
        int getSize() override{
            int size = 0;
            for(const auto& entry : directory_){
                size += entry->getSize();
            }
            return size;
        };
        void add(Entry* entry){
            directory_.push_back(entry);
        };
        //派生クラスで基底クラスのオーバーロードを宣言すると、基底クラスのメンバ関数が見えなくなる。
        // usingキーワードで基底クラスの名前を宣言することで、見えるようになる
        using Entry::printList; //これを追加するとEntry::printList()が見える
        void printList(std::string prefix) override{
            std::cout << prefix << "/" << toString() << std::endl;
            for (const auto& entry : directory_)
            {
                entry->printList(prefix + "/" + name_);
            }
        };
};
#endif //_DIRECTRY_
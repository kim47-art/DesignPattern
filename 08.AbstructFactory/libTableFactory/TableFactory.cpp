#include "TableFactory.h"
//動的ロード後TableFactoryクラスのインスタンスを生成するための関数
extern "C"{
 Factory* makeObject() {
  return new TableFactory();
 };
}
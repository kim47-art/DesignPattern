#include <iostream>
#include <dlfcn.h>
#include "plugin_header.hpp"

int main(int argc, char **argv) {
  const auto addlib = dlopen("./libSharedAdd.so", RTLD_LAZY);
  const auto sublib = dlopen("./libSharedSub.so", RTLD_LAZY);
  //MACなので、.dylibにしています。Linuxならば、.soにしてください。

  auto addfunc = (PluginInterfaceCreateFunction*)(dlsym(addlib, "makeObject"));
  auto subfunc = (PluginInterfaceCreateFunction*)(dlsym(sublib, "makeObject"));

  double a =  100;
  double b =  30;
  {
    const auto& add = addfunc(); //addlibに定義してあるオブジェクトを生成
    std::cout << "lib = " << add->libID() << std::endl;
    std::cout << "a+b = " << add->calculation(a,b) << std::endl;
  }
  {
    const auto& sub = subfunc(); //sublibに定義してあるオブジェクトを生成
    std::cout << "lib = " << sub->libID() << std::endl;
    std::cout << "a-b = " << sub->calculation(a,b) << std::endl;
  }
  dlclose(addlib);
  dlclose(sublib);
}
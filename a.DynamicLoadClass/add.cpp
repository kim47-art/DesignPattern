#include <iostream>
#include <memory>
#include "plugin_header.hpp"

class Add : public PluginInterface {
public:
  Add() {
    std::cout << "Add was create." << std::endl;
  }
  ~Add() {
    std::cout << "Add delete." << std::endl;
  }
  int libID() override {
    return 1;
  }

   double calculation(double a, double b) override {
    return a+b;
  }
};
extern "C"{
 std::unique_ptr<PluginInterface> makeObject() {
  return std::unique_ptr<PluginInterface>(new Add);
 }
}
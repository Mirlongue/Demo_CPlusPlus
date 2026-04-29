#include "func_factory.h"

namespace func {

Factory::~Factory() {
    funcMap_.clear();
}

Factory & Factory::GetInstance() {
    static Factory ins;
    return ins;
}

std::shared_ptr<Base> Factory::Create(std::string name, int a, int b) {
    std::lock_guard<std::mutex> lock(mtx_);
    std::map<std::string, Allocater>::iterator it = funcMap_.find(name);
    if(it == funcMap_.end()) {
        return nullptr;
    }
    return (it->second)(a, b);
}

void Factory::Register(std::string name, Allocater allocater) {
    std::lock_guard<std::mutex> lock(mtx_);
    std::map<std::string, Allocater>::iterator it = funcMap_.find(name);
    if(it == funcMap_.end()) {
        funcMap_[name] = allocater;
    }
    return;
}

Register::Register(std::string name, Allocater allocater) {
    Factory::GetInstance().Register(name, allocater);
}

}
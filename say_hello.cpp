#include "say_hello.hpp"

#include <string>

std::string sayHelloTo(const std::string& name) {
    return std::string("Hello " + name);
}

#pragma once

#include <iostream>

class SerialClass {
public:

    void begin(int val) {

    }
    void print(const char *msg) {
        std::cout << msg;
    }
    void print(float msg) {
        std::cout << msg;
    }
    void println(const char *msg) {
        std::cout << msg << std::endl; 
    }
    void println(float msg) {
        std::cout << msg << std::endl;
    }


};
static SerialClass Serial;

#pragma once

#include <cstdint>
#include <chrono>

unsigned long millis() {
    using namespace std::chrono;

    auto epoch = high_resolution_clock::from_time_t(0);
    // ...
    auto now   = high_resolution_clock::now();

    return duration_cast<milliseconds>(now - epoch).count();
}

enum PinStatus {
    LOW = 0,
    HIGH = 1
};
enum PinMode {
    INPUT = 0,
    INPUT_PULLUP = 1,
    INPUT_PULLDOWN = 2,
    OUTPUT = 3
};
using pin_size_t = uint8_t;



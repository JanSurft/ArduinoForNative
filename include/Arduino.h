#pragma once

#include <string>
#include <cstdint>
#include <cmath>

#include "Wire.h"
#include "api/Common.h"

float radians(float degrees) {
    return degrees * (M_PI / 180.0);
}

using String = std::string;
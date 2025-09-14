#include "Udim.h"
#include <algorithm>
#include <cstdint>
#include <limits>


Udim::Udim(float scale, int offset) 
    : Scale(std::clamp(scale, 0, std::numeric_limits<float>::max())), 
        Offset(std::clamp(offset, 0, std::numeric_limits<float>::max())) {}

Udim Udim::operator+(const Udim &other) const
{
    return Udim(Scale + other.Scale, Offset + other.Offset);
}

Udim Udim::operator-(const Udim &other) const
{
    return Udim(Scale - other.Scale, Offset - other.Offset);
}

// Getters =================================================
float Udim::getScale() const { return this->Scale; }
int16_t Udim::getOffset() const { return this->Offset; }

// Setters =================================================
void Udim::setScale(float scale) { this->Scale = std::clamp(scale, 0, std::numeric_limits<float>::max()); }
void Udim::setOffset(int16_t offset) { this->Offset = std::clamp(offset, 0, std::numeric_limits<int16_t>::max()); }

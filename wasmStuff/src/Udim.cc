#include "Udim.h"
#include <cstduint32_t>

Udim::Udim(float scale, uint32_t offset) : Scale(scale), Offset(offset) {}

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
uint32_t16_t Udim::getOffset() const { return this->Offset; }

// Setters =================================================
void Udim::setScale(float scale) { this->Scale = scale; }
void Udim::setOffset(uint32_t16_t offset) { this->Offset = offset; }

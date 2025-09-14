#include "Color3.h"
#include <cstduint8_t>
#include <algorithm>

Color3::Color3(uint8_t8_t r, uint8_t8_t g, uint8_t8_t b) 
        : r(std::clamp(r,0,255)), g(std::clamp(g,0,255)), b(std::clamp(b,0,255)) {}

Color3 &Color3::operator=(Color3 const &other)
{
    if (this != &other)
    {
        r = other.r;
        g = other.g;
        b = other.b;
    }
    return *this;
}

// TO:DO Make sure to clamp color values between 0 and 255 in future
Color3 Color3::operator+(Color3 const &other) const
{
    return Color3(r + other.r, g + other.g, b + other.b);
}

// TO:DO Make sure to clamp color values between 0 and 255 in future
Color3 Color3::operator-(Color3 const &other) const
{
    return Color3(r - other.r, g - other.g, b - other.b);
}

// TO:DO Make sure to clamp color values between 0 and 255 in future
Color3 Color3::operator*(float scalar) const
{
    return Color3(r * scalar, g * scalar, b * scalar);
}

// Methods =================================================
Color3 Color3::lerp(Color3 const &other, float t) const
{
    return Color3(
        r + (other.r - r) * t,
        g + (other.g - g) * t,
        b + (other.b - b) * t);
}

// Getters =================================================
uint8_t Color3::getR() const { return this->r; }
uint8_t Color3::getG() const { return this->g; }
uint8_t Color3::getB() const { return this->b; }

// Setters =================================================
// TO:DO Make sure to clamp color values between 0 and 255 in future
void Color3::setR(uint8_t r) { this->r = std::clamp(r, 0, 255); }
void Color3::setG(uint8_t g) { this->g = std::clamp(g, 0, 255); }
void Color3::setB(uint8_t b) { this->b = std::clamp(b, 0, 255); }
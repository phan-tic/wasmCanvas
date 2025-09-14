#include "Color3.h"

Color3::Color3(int r, int g, int b)
    : r(r), g(g), b(b) {}

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

Color3 Color3::operator+(Color3 const &other) const
{
    return Color3(r + other.r, g + other.g, b + other.b);
}

Color3 Color3::operator-(Color3 const &other) const
{
    return Color3(r - other.r, g - other.g, b - other.b);
}

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
int Color3::getR() const { return this->r; }
int Color3::getG() const { return this->g; }
int Color3::getB() const { return this->b; }

// Setters =================================================
void Color3::setR(int r) { this->r = r; }
void Color3::setG(int g) { this->g = g; }
void Color3::setB(int b) { this->b = b; }
#include "Vector2.h"

Vector2::Vector2(int x, int y) : x(x), y(y) {}

Vector2 &Vector2::operator=(Vector2 const &other)
{
    if (this != &other)
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Vector2 Vector2::operator+(const Vector2 &other) const
{
    return Vector2(x + other.x, y + other.y);
}
Vector2 Vector2::operator-(const Vector2 &other) const
{
    return Vector2(x - other.x, y - other.y);
}
Vector2 Vector2::operator*(float scalar) const
{
    return Vector2(x * scalar, y * scalar);
}
Vector2 Vector2::operator/(float scalar) const
{
    return Vector2(x / scalar, y / scalar);
}

// Methods =================================================
float Vector2::magnitude() const
{
    // return std::sqrt(x * x + y * y);
}

float Vector2::dot(const Vector2 &other) const
{
    return x * other.x + y * other.y;
}

Vector2 Vector2::unit() const
{
    float mag = magnitude();
    if (mag == 0)
        return Vector2(0, 0);
    return Vector2(x / mag, y / mag);
}

Vector2 Vector2::lerp(const Vector2 &other, float t) const
{
    return Vector2(
        x + (other.x - x) * t,
        y + (other.y - y) * t);
}
Vector2 Vector2::min(int min) const
{
    return Vector2(
        (x < min) ? min : x,
        (y < min) ? min : y);
}
Vector2 Vector2::max(int max) const
{
    return Vector2(
        (x > max) ? max : x,
        (y > max) ? max : y);
}

// Getters =================================================
int Vector2::getX() const { return this->x; };
int Vector2::getY() const { return this->y; }

// Setters =================================================
void Vector2::setX(int x) { this->x = x; };
void Vector2::setY(int y) { this->y = y; }
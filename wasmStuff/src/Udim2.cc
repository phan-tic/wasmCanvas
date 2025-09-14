#include "Udim2.h"

Udim2::Udim2(float XScale, int XOffset, float YScale, int YOffset)
    : X(XScale, XOffset), Y(YScale, YOffset) {}

Udim2::Udim2(Udim const &X, Udim const &Y) : X(X), Y(Y) {}

Udim2 &Udim2::operator=(Udim2 const &other)
{
  if (this != &other)
  {
    X = other.X;
    Y = other.Y;
  }
  return *this;
}
Udim2 Udim2::operator+(const Udim2 &other) const
{
  return Udim2(X.getScale() + other.X.getScale(),
               X.getOffset() + other.X.getOffset(),
               Y.getScale() + other.Y.getScale(),
               Y.getOffset() + other.Y.getOffset());
}
Udim2 Udim2::operator-(const Udim2 &other) const
{
  return Udim2(X.getScale() - other.X.getScale(),
               X.getOffset() - other.X.getOffset(),
               Y.getScale() - other.Y.getScale(),
               Y.getOffset() - other.Y.getOffset());
}

Udim2 Udim2::lerp(const Udim2 &other, float t) const
{
  return Udim2(X.getScale() + (other.X.getScale() - X.getScale()) * t,
               X.getOffset() + (other.X.getOffset() - X.getOffset()) * t,
               Y.getScale() + (other.Y.getScale() - Y.getScale()) * t,
               Y.getOffset() + (other.Y.getOffset() - Y.getOffset()) * t);
}

// Getters ==================================================
float Udim2::getXScale() const { return X.getScale(); }
int Udim2::getXOffset() const { return X.getOffset(); }
float Udim2::getYScale() const { return Y.getScale(); }
int Udim2::getYOffset() const { return Y.getOffset(); }

// Setters ==================================================
void Udim2::setXScale(float XScale) { X.setScale(XScale); }
void Udim2::setXOffset(int XOffset) { X.setOffset(XOffset); }
void Udim2::setYScale(float YScale) { Y.setScale(YScale); }
void Udim2::setYOffset(int YOffset) { Y.setOffset(YOffset); }
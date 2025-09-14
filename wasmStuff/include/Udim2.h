#include "Udim.h"

class Udim2
{

private:
  Udim X {0,300};
  Udim Y {0,300};

public:
  Udim2(float XScale, int XOffset, float YScale, int YOffset);
  Udim2(Udim const &X, Udim const &Y);

  Udim2(Udim2 const &other) = default;
  Udim2(Udim2 &&other) noexcept = default;

  Udim2 &operator=(Udim2 const &other);
  Udim2 &operator=(Udim2 &&other) noexcept = default;

  ~Udim2() = default;

  Udim2 operator+(const Udim2 &other) const;
  Udim2 operator-(const Udim2 &other) const;

  // Methods =================================================
  Udim2 lerp(const Udim2 &other, float t) const;

  // Getters =================================================
  float getXScale() const;
  int getXOffset() const;
  float getYScale() const;
  int getYOffset() const;

  // Setters =================================================
  void setXScale(float XScale);
  void setXOffset(int XOffset);
  void setYScale(float YScale);
  void setYOffset(int YOffset);
};
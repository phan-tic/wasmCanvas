#include <cstdint>

class Color3
{
private:
  uint8_t r = 0;
  uint8_t g = 0;
  uint8_t b = 0;

public:
  Color3(uint8_t r, uint8_t g, uint8_t b);

  Color3(Color3 const &other) = default;
  Color3(Color3 &&other) noexcept = default;

  Color3 &operator=(Color3 const &other);
  Color3 &operator=(Color3 &&other) noexcept = default;

  ~Color3() = default;

  Color3 operator+(Color3 const &other) const;
  Color3 operator-(Color3 const &other) const;
  Color3 operator*(float scalar) const;

  // Methods =================================================
  // Linear interpolation between colors - t:[0,1]
  Color3 lerp(Color3 const &other, float t) const;

  // Getters =================================================
  uint8_t getR() const;
  uint8_t getG() const;
  uint8_t getB() const;

  // Setters =================================================
  void setR(uint8_t r);
  void setG(uint8_t g);
  void setB(uint8_t b);
};

class Vector2
{
private:
  uint32_t x = 0;
  uint32_t y = 0;

public:
  Vector2(uint32_t x = 0, uint32_t y = 0);

  Vector2(Vector2 const &other) = default;
  Vector2(Vector2 &&other) noexcept = default;

  Vector2 &operator=(Vector2 const &other);
  Vector2 &operator=(Vector2 &&other) noexcept = default;

  ~Vector2() = default;

  Vector2 operator+(const Vector2 &other) const;
  Vector2 operator-(const Vector2 &other) const;
  Vector2 operator*(float scalar) const;
  Vector2 operator/(float scalar) const;

  // Methods =================================================
  float magnitude() const;
  float dot(const Vector2 &other) const;
  Vector2 unit() const;
  Vector2 lerp(const Vector2 &other, float t) const;
  Vector2 min(uint32_t min) const;
  Vector2 max(uint32_t max) const;

  // Getters =================================================
  uint32_t getX() const;
  uint32_t getY() const;

  // Setters =================================================
  void setX(uint32_t x);
  void setY(uint32_t y);
};
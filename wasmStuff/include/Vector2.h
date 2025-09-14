
class Vector2
{
private:
  int x = 0;
  int y = 0;

public:
  Vector2(int x = 0, int y = 0);

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
  Vector2 min(int min) const;
  Vector2 max(int max) const;

  // Getters =================================================
  int getX() const;
  int getY() const;

  // Setters =================================================
  void setX(int x);
  void setY(int y);
};
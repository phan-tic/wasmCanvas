class Color3
{
private:
  int r = 0;
  int g = 0;
  int b = 0;

public:
  Color3(int r, int g, int b);

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
  int getR() const;
  int getG() const;
  int getB() const;

  // Setters =================================================
  void setR(int r);
  void setG(int g);
  void setB(int b);
};
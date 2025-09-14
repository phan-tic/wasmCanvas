#include <cstdint>

class Udim
{
private:
    float Scale = 0;
    int16_t Offset = 0;

public:
    Udim(float scale, int16_t offset);

    Udim(const Udim &other) = default;
    Udim(Udim &&other) noexcept = default;

    Udim &operator=(const Udim &other) = default;
    Udim &operator=(Udim &&other) noexcept = default;

    ~Udim() = default;

    Udim operator+(const Udim &other) const;
    Udim operator-(const Udim &other) const;

    //Getters =================================================
    float getScale() const { return Scale; }
    int getOffset() const { return Offset; }

    //Setters =================================================
    void setScale(float scale) { Scale = scale; }
    void setOffset(int offset) { Offset = offset; }
};
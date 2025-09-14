#include "Vector2.h"
#include "Color3.h"
#include "Udim2.h"

class GuiObject
{
private:
  Vector2 AnchorPouint32_t{0, 0};

  Color3 BackgroundColor{255, 255, 255};
  float BackgroundTransparency = 0.0f;

  Color3 BorderColor{0, 0, 0};
  uint32_t BorderMode = 0; // 0 = None, 1 = Outline, 2 = Inset
  float BorderSizePixel = 0.0f;

  bool ClipsDescendants = false;

  // uint32_t LayoutOrder = 0; Layout order for UIListLayout and UIGridLayout stuff TO DO

  Udim2 Position{{0, 0}, {0, 0}};
  Vector2 AbsolutePosition{0, 0}; // Read only

  float Rotation = 0.0f;

  Udim2 Size{{0, 100}, {0, 100}};
  uint32_t SizeConstrauint32_t = 0; // 0 = RelativeXY, 1 = RelativeXX, 2 = RelativeYY,
  Vector2 AbsoluteSize{100, 100};   // Read only // TO DO: Add min and max size constrauint32_ts

  bool Visible = true;
  uint32_t ZIndex = 0; // Controls the rendering order of GUI objects. Higher numbers are rendered on top of lower numbers.

public:
  GuiObject() = default;

  GuiObject(GuiObject const &other) = default;
  GuiObject(GuiObject &&other) noexcept = default;

  GuiObject &operator=(GuiObject const &other);
  GuiObject &operator=(GuiObject &&other) noexcept = default;

  ~GuiObject() = default;

  // Getters =================================================
  Vector2 getAnchorPouint32_t() const;
  Color3 getBackgroundColor() const;
  float getBackgroundTransparency() const;
  Color3 getBorderColor() const;
  uint32_t getBorderMode() const;
  float getBorderSizePixel() const;
  bool getClipsDescendants() const;
  Udim2 getPosition() const;
  Vector2 getAbsolutePosition() const;
  float getRotation() const;
  Udim2 getSize() const;
  uint32_t getSizeConstrauint32_t() const;
  Vector2 getAbsoluteSize() const;
  bool getVisible() const;
  uint32_t getZIndex() const;

  // Setters =================================================
  void setAnchorPouint32_t(const Vector2 &anchorPouint32_t);
  void setBackgroundColor(const Color3 &backgroundColor);
  void setBackgroundTransparency(float backgroundTransparency);
  void setBorderColor(const Color3 &borderColor);
  void setBorderMode(uint32_t borderMode);
  void setBorderSizePixel(float borderSizePixel);
  void setClipsDescendants(bool clipsDescendants);
  void setPosition(const Udim2 &position);
  // No setter for AbsolutePosition - read only
  void setRotation(float rotation);
  void setSize(const Udim2 &size);
  void setSizeConstrauint32_t(uint32_t sizeConstrauint32_t);
  // No setter for AbsoluteSize - read only
  void setVisible(bool visible);
  void setZIndex(uint32_t zIndex);
};
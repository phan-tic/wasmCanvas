#include "GuiObject.h"
#include <algorithm>

GuiObject &GuiObject::operator=(GuiObject const &other)
{
  if (this != &other)
  {
    AnchorPoint = other.AnchorPoint;
    BackgroundColor = other.BackgroundColor;
    BackgroundTransparency = other.BackgroundTransparency;
    BorderColor = other.BorderColor;
    BorderMode = other.BorderMode;
    BorderSizePixel = other.BorderSizePixel;
    ClipsDescendants = other.ClipsDescendants;
    Position = other.Position;
    AbsolutePosition = other.AbsolutePosition;
    Rotation = other.Rotation;
    Size = other.Size;
    SizeConstraint = other.SizeConstraint;
    AbsoluteSize = other.AbsoluteSize;
    Visible = other.Visible;
    ZIndex = other.ZIndex;
  }
  return *this;
}

// Getters =================================================
Vector2 GuiObject::getAnchorPoint() const { return this->AnchorPoint; }
Color3 GuiObject::getBackgroundColor() const { return this->BackgroundColor; }
float GuiObject::getBackgroundTransparency() const { return this->BackgroundTransparency; }
Color3 GuiObject::getBorderColor() const { return this->BorderColor; }
int GuiObject::getBorderMode() const { return this->BorderMode; }
float GuiObject::getBorderSizePixel() const { return this->BorderSizePixel; }
bool GuiObject::getClipsDescendants() const { return this->ClipsDescendants; }
Udim2 GuiObject::getPosition() const { return this->Position; }
Vector2 GuiObject::getAbsolutePosition() const { return this->AbsolutePosition; }
float GuiObject::getRotation() const { return this->Rotation; }
Udim2 GuiObject::getSize() const { return this->Size; }
int GuiObject::getSizeConstraint() const { return this->SizeConstraint; }
Vector2 GuiObject::getAbsoluteSize() const { return this->AbsoluteSize; }
bool GuiObject::getVisible() const { return this->Visible; }
int GuiObject::getZIndex() const { return this->ZIndex; }

// Setters =================================================
void GuiObject::setAnchorPoint(const Vector2 &anchorPoint)
{
  this->AnchorPoint = anchorPoint.min(0).max(1);
}
void GuiObject::setBackgroundColor(const Color3 &backgroundColor)
{
  this->BackgroundColor = backgroundColor;
}
void GuiObject::setBackgroundTransparency(float backgroundTransparency)
{
  this->BackgroundTransparency = std::clamp(backgroundTransparency, 0.0f, 1.0f);
}
void GuiObject::setBorderColor(const Color3 &borderColor)
{
  this->BorderColor = borderColor;
}
void GuiObject::setBorderMode(int borderMode)
{
  this->BorderMode = std::clamp(borderMode, 0, 2);
}
void GuiObject::setBorderSizePixel(float borderSizePixel)
{
  this->BorderSizePixel = std::max(0.0f, borderSizePixel);
}
void GuiObject::setClipsDescendants(bool clipsDescendants)
{
  this->ClipsDescendants = clipsDescendants;
}
void GuiObject::setPosition(const Udim2 &position)
{
  this->Position = position;
}
// No setter for AbsolutePosition - read only
void GuiObject::setRotation(float rotation)
{
  this->Rotation = rotation;
}
void GuiObject::setSize(const Udim2 &size)
{
  this->Size = size;
}
void GuiObject::setSizeConstraint(int sizeConstraint)
{
  this->SizeConstraint = std::clamp(sizeConstraint, 0, 2);
}
// No setter for AbsoluteSize - read only
void GuiObject::setVisible(bool visible)
{
  this->Visible = visible;
}
void GuiObject::setZIndex(int zIndex)
{
  this->ZIndex = zIndex;
}

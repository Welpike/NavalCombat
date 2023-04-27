#include <array>

#include "../includes/point.hpp"

Point::Point(int _x, int _y) noexcept : x(_x), y(_y)
{
}

std::array<int, 2> Point::getPosition() const
{
    std::array<int, 2> position { this->x, this->y };
    return position;
}

#include <array>

#include "../includes/point.hpp"

Point::Point(int _x, int _y) noexcept : x(_x), y(_y)
{
    this->reached = false;
}

std::array<int, 2> Point::getPositions() const
{
    std::array<int, 2> position { this->x, this->y };
    return position;
}

bool Point::getIfReached() const noexcept
{
    return this->reached;
}

void Point::reach()
{
    this->reached = true;
}

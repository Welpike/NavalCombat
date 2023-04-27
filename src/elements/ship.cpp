#include <vector>

#include "../includes/ship.hpp"
#include "../includes/point.hpp"

Ship::Ship(int _shipSize, std::vector<Point> _points) : shipSize(_shipSize), points(_points)
{
}

bool Ship::checkIfReached(Point hitPoint) const
{
    bool reached{false};
    std::array<int, 2> hitPointPositions{hitPoint.getPositions()};

    for(Point const i : this->points)
    {
        std::array<int, 2> iPositions{i.getPositions()};
        if(iPositions == hitPointPositions){
            reached = true;
        }
    }
    
    return reached;
}

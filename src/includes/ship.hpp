#ifndef SHIP
    #define SHIP

    #include <vector>

    #include "point.hpp"

    class Ship{
        public:
            Ship() = delete;
            Ship(int _shipSize, std::vector<Point> _points);
            
        private:
            int shipSize;
            std::vector<Point> points;
    };
#endif
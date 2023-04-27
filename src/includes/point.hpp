#ifndef POINT
    #define POINT

    #include <array>

    class Point{
        public:
            Point() = delete;
            Point(int _x, int _y) noexcept;
            std::array<int, 2> getPosition() const;
            
        private:
            int x;
            int y;
    };
#endif
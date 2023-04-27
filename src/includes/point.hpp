#ifndef POINT
    #define POINT

    #include <array>

    class Point{
        public:
            Point() = delete;
            Point(int _x, int _y) noexcept;
            std::array<int, 2> getPositions() const;
            bool getIfReached() const noexcept;
            void reach();

        private:
            int x;
            int y;
            bool reached;
    };
#endif
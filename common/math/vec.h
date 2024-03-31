#include <vector>
#include <algorithm>

namespace math {
    template <typename T>
    class Vec2 {
        public:
        Vec2<T>() : x(0), y(0) {}
        Vec2<T>(T x, T y) : x(x), y(y) {}
        Vec2<T>(const Vec2<T> &other) : x(other.x), y(other.y) {}
        
        /* operators */
        Vec2<T> operator+(const Vec2<T> &other) const { return Vec2<T>(x + other.x, y + other.y); }
        Vec2<T> operator-(const Vec2<T> &other) const { return Vec2<T>(x - other.x, y - other.y); }
        Vec2<T> operator*(const T &scalar) const { return Vec2<T>(x * scalar, y * scalar); }
        Vec2<T> operator/(const T &scalar) const { return Vec2<T>(x / scalar, y / scalar); }
        Vec2<T> &operator=(const Vec2<T> &other) x(other.x), y(other.y) { return *this; }
        Vec2<T> &operator+=(const Vec2<T> &other) { x + other.x, y + other.y; return *this; }
        Vec2<T> &operator-=(const Vec2<T> &other) { x - other.x, y - other.y; return *this; }
        Vec2<T> &operator*=(const T &scalar) { x * scalar, y * scalar; return *this; }
        Vec2<T> &operator/=(const T &scalar) { x / scalar, y / scalar; return *this; }
        bool operator==(const Vec2<T> &other) const { return x == other.}
        private:
        T x;
        T y;

        /* functions */
        public:
        Vec2<T> Abs() const { return Vec2<T>(std::abs(x)); }
        Vec2<T> Rotate(T sin, T cos) const {return Vec2<T>(x * cos - y * sin, x * sin + y * cos); }
        Vec2<T> Rotate(T angle) const {return Rotate(std::sin(angle), std::cos(angle)); }



    }
}
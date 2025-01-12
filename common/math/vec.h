#include <cmath>
#include <iostream>
#include <cctype>

namespace math {
template <typename T>
class Vec {
public:
    T x, y;

    Vec() : x(0), y(0) {}
    Vec(T x, T y) : x(x), y(y) {}

    Vec operator+(const Vec& v) const {
        return Vec(x + v.x, y + v.y);
    }

    Vec operator-(const Vec& v) const {
        return Vec(x - v.x, y - v.y);
    }

    Vec operator*(T scalar) const {
        return Vec(x * scalar, y * scalar);
    }

    Vec operator/(T scalar) const {
        return Vec(x / scalar, y / scalar);
    }

    T dot(const Vec& v) const {
        return x * v.x + y * v.y;
    }

    T magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    Vec normalize() const {
        T mag = magnitude();
        return Vec(x / mag, y / mag);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vec& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};
} // namespace math
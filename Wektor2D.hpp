class Wektor2D
{
public:
    Wektor2D() : x(0), y(0) {}
    Wektor2D(double a, double b) : x(a), y(b)

    double getX() const { return x; }
    double getY() const { return y; }

    void setX(double a) { x = a; }
    void setY(double b) { y = b; }

    Wektor2D operator+(const Wektor2D& other) const {
        Wektor2D result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }

private:
    double x;
    double y;
};

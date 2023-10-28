class Wektor2D
{
    double x;
    double y;

    Wektor2D() : x(0), y(0) {}

    void setX(double a) { x = a; }
    double getX() { return x; }
    void setY(double b) { y = b; }
    double getY() { return y; }

    Wektor2D operator+(const Wektor2D& other) const {
        Wektor2D result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }
};

class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D(double xVal, double yVal) : x(xVal), y(yVal) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    Wektor2D operator+(const Wektor2D& other) const {
        Wektor2D result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }
};

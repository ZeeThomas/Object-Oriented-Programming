
class Circle2D
{
private:
	double x;
	double y;

public:
	double radius;
	static int numberOfCircles;
	Circle2D(double a, double b, double r);
	Circle2D(const Circle2D& circle);
	~Circle2D();
	double getX() const;
	double getY() const;
	double getRadius() const;
	bool overlaps(const Circle2D& circle) const;
	static int getNumberOfCircles();

};


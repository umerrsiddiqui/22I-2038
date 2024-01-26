#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:

	int GetX()
	{
		return x;
	}
	int GetY() {
		return y;
	}
	void SetX(int x) {
		this->x = x;
	}
	void SetY(int y) {
		this->y = y;
	}
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	double distance(int x, int y) {
		return sqrt((x - this->x) * (x - this->x) + (y - this->y) * (y - this->y));
	}
};

int main()
{
	int x = 1, y = 5;
	point p(x, y);
	cout << p.distance(2, 3);


	return 0;
}

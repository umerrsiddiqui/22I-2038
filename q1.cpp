#include<iostream>
using namespace std;

int main()
	{ 
	int day = 0, month = 0, year = 0;
	cout << "Enter day : " << endl;
	cin >> day;
	cout << "Enter month : " << endl;
	cin >> month;
	cout << "Enter year : " << endl;
	cin >> year;
	cout << "Day : " << day << endl;
	cout << "Month : " << month<< endl;
	cout << "Year : " << year << endl;
	
	return 0; 
}

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
	double distance(int x, int y){
		return sqrt((x - this->x) * (x - this->x) + (y - this->y) * (y - this->y));
	}
};

int main()
{
	int x = 1, y = 5;
	point p(x, y);
	cout<<p.distance(2, 3);
	

	return 0;
}






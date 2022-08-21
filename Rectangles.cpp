#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class point
{
private:
	int p[2];

public:
	point(int x, int y)
	{
		setpoint(x, y);
	}
	void setpoint(int x, int y)
	{
		p[0] = x;
		p[1] = y;
	}
	int getX()
	{
		return p[0];
	}
	int getY()
	{
		return p[1];
	}
};

class rectangle
{
private:
	point p1;
	point p2;
	//int B[4];


public:

	rectangle() : p1(0, 0), p2(0, 0) {}
	//rectangle() : setpoint1(x,y) , setpoint2(x,y) {}
	point getp1()
	{
		return p1;
	}
	point getp2()
	{
		return p2;
	}
	void setpoint1(int x, int y)
	{
		p1.setpoint(x,y);

	}
	void setpoint2(int x, int y)
	{
		p2.setpoint(x, y);
	}

	long area()
	{
		return abs(p1.getX() - p2.getX()) * abs(p1.getY() - p2.getY());
	}
	long outside()
	{
		return (abs(p1.getX() - p2.getX()) + abs(p1.getY() - p2.getY())) * 2;

	}

};

int main()
{
	long long sumforarea = 0;
	long long sumforoutside = 0;
	int x, y;
	rectangle A[1000];
	//cout << abs(0 - 1) * abs(0 - 1);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;
		A[i].setpoint1(x, y);
		cin >> x;
		cin >> y;
		A[i].setpoint2(x, y);

		sumforarea += A[i].area();
		sumforoutside += A[i].outside();
	}
	cout << sumforoutside << endl;
	cout << sumforarea << endl;
	//getchar();
	//getchar();

	return 0;
}

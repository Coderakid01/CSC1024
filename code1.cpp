#include<iostream>
using namespace std;

//Declare function calculation
double area_of_triangle(double, double);
double area_of_circle(double);

//Main method
int main()
{
	double h, b, r, area_of_triangle, area_of_circle;

	cout << "Enter base and height : ";
	cin >> b;
	cout << "Enter height : ";
	cin >> h;
	cout << "Enter radius : ";
	cin >> r;

	area_of_triangle = area_of_triangle(b, h);
	area_of_circle = area_of_circle(r);

	cout << "Area of triangle : " << area_of_triangle;
	cout << "Area of circle : " << area_of_circle;

}

	double area_of_triangle(double b, double h) {
		double area;
		area = 0.5 * b * h;
		return area;
	}

	double area_of_circle(double r)
	{
		double area;
		area = 3.142 * r * r;
		return area;
	}
	

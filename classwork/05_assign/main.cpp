#include "rectangle.h"
#include<vector>
#include<iostream>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	std::vector<Rectangle> rectangles;
	Rectangle rec(4, 5);
	Rectangle rec1(10, 10);
	Rectangle rec2(100, 10);

	rectangles.push_back(rec);
	rectangles.push_back(rec1);
	rectangles.push_back(rec2);

	int total = 0;

	for (auto i : rectangles)
	{
		std::cout << i.get_area() << "\n";
		total += i.get_area();
	}

	std::cout << "Total: " << total;
	return 0;
}
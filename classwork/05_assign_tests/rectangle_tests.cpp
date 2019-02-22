#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Create a test case to test the Rectangle class with following values:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

*/

TEST_CASE("Testing get_area function")
{
	/*Rectangle rec(4, 5);

	REQUIRE(rec.get_area() == 20);

	Rectangle rec(10, 10);

	REQUIRE(rec.get_area() == 100);

	Rectangle rec(100, 10);
	
	REQUIRE(rec.get_area() == 1000); */
}

TEST_CASE("TESTING") 
{
	REQUIRE(return_val() == 1);
}

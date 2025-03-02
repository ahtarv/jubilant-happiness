#include<iostream>
#include<cmath>
#include<conio.h>
int main()
{
	float x, y, z ;
	std::cout<<"Enter the value of two sides of a right angle triangle:";
	std::cin>> x >>y;
	z = sqrt(x * x + 2 * x * y + y * y );
	std::cout<<"THe value of hypotenuse is "<< z ;
	return 0;
	}
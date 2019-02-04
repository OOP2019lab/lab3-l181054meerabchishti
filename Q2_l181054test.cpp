// q2.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
#include "rectangle.h";

int main()
{
	int wid=0;
	int len=0;
	int area=0;
	Rectangle r1;
	wid=r1.getWidth();
	len=r1.getLength();
	area=r1.getArea(len,wid);
	cout<<area<<endl;
	r1.rotateRectangle(len,wid);
	r1.draw(len,wid);
	return 0;
	system("PAUSE");

}


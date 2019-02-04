#include <iostream>
using namespace std;

class Rectangle
{
private:
	//to get width as private parameter 
	// post condition->it can't be modified by user
	int width;
	//to get length as private parameter 
	// post condition->it can't be modified by user
	int length;

public:
	//to input width
	int getWidth();
	//to input length
	int getLength();
	//to set private variabes the value
	void setLength();
	void setWidth();
	int getArea(int len,int wid);
	void rotateRectangle(int len, int wid);
	void draw(int len, int wid);
};
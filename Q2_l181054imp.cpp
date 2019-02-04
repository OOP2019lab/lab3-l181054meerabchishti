#include <iostream>
using namespace std;
#include "rectangle.h";
int wid=0;
int len=0;
int area=0;

int Rectangle::getWidth()
{
	cout<<"Enter width"<<endl;
	cin>>wid;
	return wid;
}
int  Rectangle::getLength()
{
	cout<<"Enter length of rectangle"<<endl;
	cin>>len;
	return len;
}
void  Rectangle::setLength()
{
	length=len;

}
void  Rectangle::setWidth()
{
	width=wid;
}
int  Rectangle::getArea(int len, int wid)
{
	area=len*wid;
	return area;

}
void  Rectangle::rotateRectangle(int len, int wid)
{
	int temp=0;
	temp=len;
	len=wid;
	wid=len;
}
void Rectangle::draw(int len, int wid)
{
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<wid;j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}

}
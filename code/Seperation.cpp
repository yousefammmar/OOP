#include "12_Separation.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
	height_ = 0;
	width_ = 0;
}

Rectangle::Rectangle(int width, int height)//default parameterized constructor, the default values will extracted from the header file ".h", dont define the default values here
{
	height_ = height;
	width_ = width;
}


// The :: symbol is called scope resolution operator to show that the this function is part of the class (the getHeight function is part of Rectangle class)
int Rectangle::getHeight()
{
	return height_;
}

int Rectangle::getWidth()
{
	return width_;
}

void Rectangle::printArea()
{
	cout << "The area is: " << height_ * width_ << endl;
}

void Rectangle::setHeight(int height)
{
	height_ = height;
}

void Rectangle::setWidth(int width)
{
	width_ = width;
}

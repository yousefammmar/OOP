#include <iostream>

using namespace std;

#ifndef RECTANGLE_H  //this is the include guard, to insure not to include the same class twice //discussed in the lecture
#define RECTANGLE_H

class Rectangle {
private:
	int width_;
	int height_;

public:
	Rectangle();
	
	Rectangle(int width, int heigth=0);// default parameterized constructor, the setting of default values is done only in the header file ".h"

	void setWidth(int width);//we can put just int without naming the variable inside the parameter since it is not used inside the header file. example void setWidth(int) 
	void setHeight(int height);
	int getHeight();
	int getWidth();
	void printArea();
};

#endif

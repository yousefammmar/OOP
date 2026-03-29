#include<iostream>
#include<string>
using namespace std;


class Rectangle
{
public://the member of this part can be seen anywhere

	//member function //// public
	void setWidth(int width)
	{
		if (width <= 0)//check the parameter value
			cout << "Error, the width must not be less than or equal to zero";
		else
			width_ = width;// data member=parameter
	}

	void setHeight(int height)
	{
		if (height <= 0)//check the parameter value
			cout << "Error, the height must not be less than or equal to zero";
		else
			height_ = height;// data member=parameter 
	}


	int getWidth()
	{
		return width_;
	}

	int getHeight()
	{
		return height_;
	}

	

	void printArea()
	{
		cout << "The area of rectangle 1 with height: " << height_ << " and width: " << width_ << " is:" << calculateArea() << endl << endl;
	}

private://the member of this part will not be seen outsize the class brackets 

	//data member ///////// private
	int height_;
	int width_;


	//member function //// private
	int calculateArea()
	{
		return height_ * width_;
	}
};

int main()
{
	int h;
	int w;
	Rectangle r1;
	cout << "Enter the height of the rectangle:";
	cin >> h;

	r1.setHeight(h);

	cout << "Enter the width of the rectangle:";
	cin >> w;
	r1.setWidth(w);


	cout << "The width of the rectangle is: " << r1.getWidth() << endl;
	cout << "The height of the rectangle is: " << r1.getHeight() << endl;

	//cout << "The width is " << r1.width_; //error because it is not public it cant be seen
	//cout << "The height is " << r1.height_; //error because it is not public it cant be seen
	//cout << "The area is " << r1.calculateArea(); //error because it is not public it cant be seen


	r1.printArea();
}

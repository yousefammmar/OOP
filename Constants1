#include<iostream>

using namespace std;

class Rectangle {
private:
	int width_;
	int height_;

public:
	Rectangle() //const, error cant put constant on any type of constructors or destructor
	{
		height_ = 0;
		width_ = 0;
	}

	Rectangle(int width, int height)
	{
		height_ = height;
		width_ = width;
	}

	int getHeight() const
	{
		return height_;
	}

	int getWidth() const
	{
		return width_;
	}

	void printArea() const //need to explicitly identify that this function does not change on the data 
	{
		cout << "The area is: " << height_ * width_ << endl;


		//width_ = 5; error because this function is identifed as constant so no data can be modified inside the function
	}

	void setHeight(int height)
	{
		height_ = height;
	}
	void setWidth(int width)
	{
		width_ = width;
	}

	bool isEqual(const Rectangle r) const //call by value constant
	{
		//r.setHeight(10);//error cant call any none constant function

		if (r.getWidth() == width_ && r.getHeight() == height_)
			return true;
		else
			return false;
	}
	bool isEqual2(Rectangle &r) const //call by reference //not constant so can modify r
	{
		r.setWidth(1000);
		if (r.getWidth() == width_ && r.getHeight() == height_)
			return true;
		else
			return false;
	}
	bool isEqual3( const Rectangle &r) const  //call by reference //constant so cant modify r inside this function, but it can be modified in the call part if it is not initialized as constatnt there
	{
		//r.setWidth(10);//error cant be edit since r is constant
		if (r.getWidth() == width_ && r.getHeight() == height_)
			return true;
		else
			return false;
	}

	bool isEqual4(Rectangle r) const //call by value not constant
	{
		if (r.getWidth() == width_ && r.getHeight() == height_)
			return true;
		else
			return false;
	}
};

int main()
{
	//const means that no one can change the value of variable
	const double PI = 3.14;
	//PI = 3.15;//error, modifications on constant object not allowed


	const Rectangle rect1 (10, 15);
	//rect1.setWidth(55);//error, you cant change the value of constant object

	rect1.printArea();//if this member function is defined as constant then it is accepted, if not then it will give an error
	int h=rect1.getHeight();
	int w=rect1.getWidth();

	Rectangle rect2(11,12);
	//rect1 = rect2;//error, you cant change the value of constant object
	
	const Rectangle rect3 = rect2;


	bool flag = rect1.isEqual(rect2);



	cout <<"Width before: "<< rect2.getWidth()<<endl;
	flag = rect1.isEqual2(rect2);
	cout << "Width after: " << rect2.getWidth() << endl;
	

	const Rectangle rect4(1, 2);
	//rect2.isEqual2(rect4); error since rect4 is constant and received in isEqual2 as not constant call by reference
	rect2.isEqual4(rect4); //accepted since it is call by value
}

#include<iostream>

#include<string>

using namespace std;





class Rectangle

{

private:

	int height_;

	int width_;



public:



	/*Every object has access to its own address through a pointer this.

	  The this pointer is accessible to member functions.

	  It points to the object for which the member function is called.

	  When a member function is called for an object, the compiler assigns the address of the object to the this pointer and then calls the function. 

	  The type of the pointer this is pointer to the type (class) of the object for which a function is called.

	  It is legal to use explicitly this inside member functions.

	  The this pointer is a constant pointer, so a member function cannot change the pointer’s value to make it point to something else*/





	Rectangle(int height = 1, int width = 1)

	{

		this->height_ = height;

		this->width_ = width;

	}



	/*void setWidth(int w)

	{

		this->width_ = w;

	}

	void setHeight(int h)

	{

		this->height_ = h;

	}*/



	Rectangle setWidth(int w)

	{

		this->width_ = w;

		return *this;

	}

	Rectangle setHeight(int h)

	{

		this->height_ = h;

		return *this;

	}



	int calculateArea()

	{

		return this->height_ * this->width_;

	}



	void printArea()

	{

		//all of the following has the same output

		cout << width_<<endl;

		cout << this-> width_ << endl;

		cout << (*this).width_ << endl;

		



		cout << "The area of rectangle 1 with height: " << this->height_ << " and width: " << this->width_ << " is:" << this->calculateArea() << endl << endl;

	}

	

	//returns the object

	Rectangle getObj()

	{

		return *this;

	}





	void destroyObject()

	{

		//delete object

		delete this;

	}



};







int main()

{

	Rectangle r(10, 15);

	r.printArea();





	Rectangle r2;

	//works with the new setters since they return objects

	r2.setWidth(10).setHeight(15);



	r.destroyObject();

	r.printArea();

}

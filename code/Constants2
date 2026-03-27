#include<iostream>
#include<string>
using namespace std;

class Rectangle {
private:
	const double PI_ = 3.14;
	const int id_;
	string name_;

public:
	///Rectangle() :id_(10)//rigth //initializer list
	Rectangle() :id_(returnInt())//right, this will call the function to generate an enterger then it will be filled inside the id
	{
		
	}


	//Rectangle(int width, int height) :id_(17), name_(setName()) //initializer list/ cant use setters since they are void, the called function must return a value
	Rectangle(int width, int height):id_(17),name_("No Name") //initializer list
	{
		
	}

	
	
	Rectangle(const Rectangle &r) :id_(r.getId()), name_("No Name") //initializer list
	{

	}


	void setName()
	{
		name_ = "ssss";
	}

	int getId() const
	{
		return id_;
	}

	int returnInt()
	{
		return 5 * 4;
	}
};



int main()
{
	Rectangle r(1, 2);
	
}

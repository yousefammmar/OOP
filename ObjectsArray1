#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int id_;
	string name_;

public:

	Student()
	{
		id_ = 0;
		name_ = "---";
	}

	~Student()
	{
		cout << "Destructor for object s[" << id_ <<"]"<< endl;
	}

	
	void setId(int id)
	{
			id_ = id;
	}
	void setName(string name)
	{
			name_ = name;
	}

	int getId()
	{
		return id_;
	}

	string getName()
	{
		return name_;
	}

	void printStudent()
	{
		cout << "Student Id is: " << id_ << endl;

		cout << "Student name is: " << name_ << endl << endl;
	}
};

int main()
{
	const int SIZE = 5;

	int arr1[SIZE];//array of integers

	Student arr2[SIZE];//array of students, this will create 5 object of type student, theis will call the default constructor for each object inside the array

	for (int i = 0; i < SIZE; i++)
	{
		arr2[i].printStudent();
	}

	arr2[0].setId(10);
	arr2[0].setName("Ali");
	arr2[0].printStudent();



	//test destructor
	arr2[0].setId(0);
	arr2[1].setId(1);
	arr2[2].setId(2);
	arr2[3].setId(3);
	arr2[4].setId(4);


}

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

	}
	
	//destructor, this will called directly before deleting the object from the memory
	~Student()
	{
		cout << "The student with id: " << id_ << " and name: " << name_ << " is deleted" << endl << endl;
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
	Student s1;
	s1.setId(1);
	s1.setName("Ali");
	cout << "s1:" << endl;
	s1.printStudent();


	Student s2;
	s2.setId(2);
	s2.setName("Ahmad");
	cout << "s2:" << endl;
	s2.printStudent();

	if (1 == 1)
	{
		Student s3;
		s3.setId(3);
		s3.setName("Abeer");
		cout << "s3:" << endl;
		s3.printStudent();
	}//s3 will be deleted first because the scope of the object ended before other objects



	Student s4;
	s4.setId(4);
	s4.setName("Ola");
	cout << "s4:" << endl;
	s4.printStudent();


}//the destruction process is done in reverse order (the latest object created, the first on deleted) Last in first out LIFO

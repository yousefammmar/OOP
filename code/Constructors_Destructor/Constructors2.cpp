#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int id_;
	string name_;
	double gpa_;
	string dept_;
public:

	
	//default parameterized constructor for all prarameters
	//example 1
	Student(int id=0, string name="---",double gpa=0.0)
	{		
		id_=id;
		name_=name;	
		gpa_ = gpa;
	}


	//default parameterized constructor for part of prarameters
	//example 2
	Student(int id, string name, double gpa = 0.0)// the values need to be sent are the ID and the name, the gpa is provided then it will be used else will use the default value
	{
		id_ = id;
		name_ = name;
		gpa_ = gpa;
	}

	//default parameterized constructor for part of prarameters
	//example 3
	/*Student(int id, string name="Ahmed", double gpa)// error the parameters that accepts default values must be at the end of all parameters, the name parameter must be the last parameter since the gpa does not has default value
	{
		id_ = id;
		name_ = name;
		gpa_ = gpa;
	}
	*/
	

	//default parameterized constructor for all prarameters
	//example 4
	Student(int id=0, string name="no name",string dept="no dept")
	{
		id_=id;
		name_=name;
		dept_ = dept;
	}


	void printStudent()
	{
		cout << "Student Id is: " << id_ << endl;

		cout << "Student name is: " << name_ << endl;

		cout << "Student dept is: " << dept_ << endl;

		cout << "Student gpa is: " << gpa_ << endl << endl;
	}
};

int main()
{

	 //using default parameterized constructor example 1
	Student s1; //this will call the default parameterized constructor since all the values are provided as default
	s1.printStudent();

	Student s2(2, "Ahmed"); //this will call the default parameterized constructor and put the gpa to 0.0
	s2.printStudent();


	//Student s3("Ahmed"); //error, the data must be provided in order, this value will be considered as parameter for id, error cant convert string to int
	






	/* //using default parameterized constructor example 2
	//Student s1; //this will show an error because there is no default constructor, and cant use the default parameterized constructor since the required data not provided (ID and name)

	//Student s1(2); error since the name parameter does not have default constructor so it need to be provided
	Student s2(2,"Ali"); //this will call the default parameterized constructor and put the gpa to 0.0, the id and name will be filled using the provided paramters
	s2.printStudent();

	Student s3(3, "Ahmad",10.0); //this will call the default parameterized constructor and put all the values as recived from the parameters inside the data memebers (the default values will not be used)
	s3.printStudent();
	*/

	



	 //using default parameterized constructor example 4
	Student s1; //this will call the default parameterized constructor since all the values are provided as default
	s1.printStudent();

	Student s2(2, "Ahmed"); //this will call the default parameterized constructor and put the dept="not dept" since it is default and not provided
	s2.printStudent();

	Student s3(3, "Ahmed", "IT"); //this will call the default parameterized constructor and put all the data as sent by parameters
	s3.printStudent();
	
	Student s4(4, "IT"); //this will call the default parameterized constructor and put the name="IT" since the computer cant recognize that the provided string is for dept, the data will be filled as sent in order and the rest will be using the default
	s4.printStudent();
	




}

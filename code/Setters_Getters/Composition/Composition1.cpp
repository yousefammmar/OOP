//#include <iostream>
//#include <string>
//using namespace std;
//
//class Address
//{
//private:
//	string city_;
//	string street_;
//	int buildingNo_;
//public:
//	Address()
//	{
//		cout << "Address default constructor called" << endl;
//		city_ = "no city";
//		street_ = "no street";
//		buildingNo_ = 0;
//		
//	}
//	Address(string city, string street, int buildingNo)
//	{
//		cout << "Address parameterized constructor called" << endl;
//		city_ = city;
//		street_ = street;
//		buildingNo_ = buildingNo;
//	}
//	void setCity(string city)
//	{
//		city_ = city;
//	}
//	void setStreet(string street)
//	{
//		street_ = street;
//	}
//	void setBuildingNo(int buildingNo)
//	{
//		buildingNo_ = buildingNo;
//	}
//	string getCity()
//	{
//		return city_;
//	}
//	string getStreet()
//	{
//		return street_;
//	}
//	int getBuildingNo()
//	{
//		return buildingNo_;
//	}
//	void printAddress()
//	{
//		cout << "Address is:" << city_ << "-" << street_ << "-" << buildingNo_ << endl;
//	}
//};
//
//class Student
//{
//private:
//	int id_;
//	string name_;
//	Address address_;
//
//public:
//
//	Student()
//	{
//		cout << "Student default constructor called" << endl;
//		id_ = 0;
//		name_ = "no name";
//		
//	}
//	Student(int id, string name, string city, string street, int buildingNo)
//	{
//		cout << "Student parameterized constructor called" << endl;
//		id_ = id;
//		name_ = name;
//		address_.setCity(city);
//		address_.setStreet(street);
//		address_.setBuildingNo(buildingNo);		
//		
//		//or
//		/*
//		address_ = Address(city, street, buildingNo);
//		*/
//		//or
//		/*Address a1(city, street, buildingNo);
//		address_ = a1;*/
//	}
//		
//	void setId(int id)
//	{
//		id_ = id;
//	}
//	void setName(string name)
//	{
//		name_ = name;
//	}
//	int getId()
//	{
//		return id_;
//	}
//	string getName()
//	{
//		return name_;
//	}
//	void printStudent()
//	{
//		cout << "Student Id is: " << id_ << endl;
//		cout << "Student name is: " << name_ << endl;
//		address_.printAddress();
//		cout << endl << endl;
//	}	
//};
//
//
//int main()
//{
//	Student s1;
//	s1.printStudent();
//
//
//	Student s2(1, "Ali", "Amman", "Ahmed Tarawneh", 4);
//	s2.printStudent();
//}

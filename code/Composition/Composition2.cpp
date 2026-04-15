#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
	string city_;
	string street_;
	int buildingNo_;
public:
	Address()
	{
		cout << "Address default constructor called" << endl;
		city_ = "no city";
		street_ = "no street";
		buildingNo_ = 0;

	}
	Address(string city, string street, int buildingNo)
	{
		cout << "Address parameterized constructor called" << endl;
		city_ = city;
		street_ = street;
		buildingNo_ = buildingNo;
	}
	Address(const Address &adr)
	{
		cout << "Address Copy Constructor executed" << endl;

		city_ = adr.city_;
		street_ = adr.street_;
		buildingNo_ = adr.buildingNo_;
	}
	void setCity(string city)
	{
		city_ = city;
	}
	void setStreet(string street)
	{
		street_ = street;
	}
	void setBuildingNo(int buildingNo)
	{
		buildingNo_ = buildingNo;
	}
	string getCity() const
	{
		return city_;
	}
	string getStreet() const
	{
		return street_;
	}
	int getBuildingNo() const
	{
		return buildingNo_;
	}
	void printAddress()
	{
		cout << "Address is:" << city_ << "-" << street_ << "-" << buildingNo_ << endl;
	}
};

class Student
{
private:
	int id_;
	string name_;
	Address address_;

public:

	Student()
	{
		cout << "Student default constructor called" << endl;
		id_ = 0;
		name_ = "no name";

	}

	
	//if there is no initializer list for address object, the default constructor of address will be called then filled with the data provided using parameterized constructor
	//if there is an initializer list for address object, the object will be created and filled directly without calling the default constructor of the address since the data is filled using initializer list
	//Student(int id, string name, string city, string street, int buildingNo):id_(id),name_(name),address_(Address(city,street,buildingNo))//this will create a temporary object then it will be assigned to the address object
	Student(int id, string name, string city, string street, int buildingNo) : id_(id), name_(name), address_(city, street, buildingNo)//this will not create a temporary, it will fill the data directly to the address object
	{
		cout << "Student parameterized constructor called" << endl;
		/*id_ = id;
		name_ = name;		
		address_ = Address(city, street, buildingNo);*/
		
	}

	Student(int id, string name, const Address adr) : id_(id), name_(name), address_(adr)//this will not create a temporary, it will fill the data directly to the address object
	{
		cout << "Student parameterized constructor called" << endl;
		
		//initializer list or as one of the follows
		/*id_ = id;
		name_ = name;
		address_ = adr;

		//or
		address_.setCity(adr.getCity());
		address_.setStreet(adr.getStreet());
		address_.setBuildingNo(adr.getBuildingNo());	
		*/		
	}

	//copy constructor
	Student(const Student &st):id_(st.id_),name_(st.name_),address_(st.address_)
	{
		cout << "Student Copy Constructor executed" << endl;

		/*id_ = st.id_;
		name_ = st.name_;
		address_ = st.address_;*/

		//or
		/*
		id_ = st.getId();
		name_ = st.getName();
		address_ = st.getAddress();
		*/
	}
	void setId(int id)
	{
		id_ = id;
	}
	void setName(string name)
	{
		name_ = name;
	}

	int getId() const
	{
		return id_;
	}
	string getName() const
	{
		return name_;
	}
	
	//getter for composed object
	Address getAddress() const
	{
		return address_;
	}

	//setter for composed object
	void setAddress(Address adr)
	{
		address_ = adr;
	}
	void printStudent()
	{
		cout << "Student Id is: " << id_ << endl;
		cout << "Student name is: " << name_ << endl;
		address_.printAddress();
		cout << endl << endl;
	}
};


int main()
{
	//parameterized constructor 1
	Student s1(1, "Ali", "Amman", "Ahmed Tarawneh", 4);
	s1.printStudent();

	
	//parameterized constructor 2
	Address address1("Amman", "Ahmed Tarawneh", 4);
	Student s2(2, "Ahmad", address1);
	s2.printStudent();

	//or
	//parameterized constructor 2	
	Student s3(3, "May", Address("Amman", "Ahmed Tarawneh", 4));
	s3.printStudent();
	
	Student s4 = s3;
	s4.printStudent();
	
	Student s5;
	s5.setId(10);
	s5.setName("Ahmad");
	Address a1("Amman", "Hamed Street", 10);
	s5.setAddress(a1);
	s5.printStudent();



}

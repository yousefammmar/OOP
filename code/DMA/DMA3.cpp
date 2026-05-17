#include <iostream>

#include <string>

using namespace std;



class Payment

{

private:

	int pId_;

	int pAmt_;



public:

	Payment()

	{

		pId_ = 0;

		pAmt_ = 0;

	}



	Payment(int id,int amt)

	{

		pId_ = id;

		pAmt_ = amt;

	}



	int getPId()

	{

		return pId_;

	}

	int getPAmt()

	{

		return pAmt_;

	}



	void setPId(int id)

	{

		pId_ = id;

	}

	void setPAmt(int amt)

	{

		pAmt_ = amt;

	}

};



class Student

{

private:

	int id_;

	string name_;

	Payment * payments_;

	int pSize_;



public:



	//default constructor

	Student()

	{

		id_ = 0;

		name_ = "No Name";

		pSize_ = 0;

		payments_ = nullptr;



		cout << "Default Constructor called, the value of payments pointer " << payments_ << endl;

	}

		

	Student(int id, string name, Payment * pays, int size) 

	{

		id_ = id;

		name_ = name;

		pSize_ = size;

	

		payments_ = new Payment[size];



		for (int i = 0; i < size; i++)

		{

			payments_[i] = pays[i];

		}



		cout << "Parameterized Constructor called, the value of payments pointer " << payments_ << endl;

	}



	Student(const Student &std)

	{		

		//create a new array inside the heap and make the pointer points to the new data

		//deep copy

		payments_ = new Payment[std.pSize_];

		for (int i = 0; i < std.pSize_; i++)

		{

			payments_[i] = std.payments_[i];

		}

		cout << "Copy Constructor called, the value of payments pointer " << payments_ << endl;

	}



	void setPayments(Payment * pays, int size)

	{

		pSize_ = size;

		//you have to delete before creating new array inside the memory

		delete[] payments_;

		payments_ = new Payment[size];

		for (int i = 0; i < size; i++)

		{

			payments_[i] = pays[i];

		}

	}



	Payment *getVersions()

	{

		return payments_;

	}



	~Student()

	{

		delete[] payments_;

		cout << "Payments array in the heap removed" << endl;

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

	int size;

	cout << "Enter the number of payments ";

	cin >> size;



	Payment * payments = new Payment[size];

	cout << "Enter payments:"<<endl;

	for (int i = 0; i < size; i++)

	{

		int id, amt;

		cout << "Enter payment id ";

		cin >> id;

		cout << "Enter payment amt ";

		cin >> amt;

		Payment p(id, amt);

		payments[i] = p;

	}



	Student s1(1, "Ali", payments, size);



}

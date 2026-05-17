
#include <iostream>

#include <string>

using namespace std;



class Student

{

private:

	int id_;

	string name_;

	int * payments_;

	int pSize_;

public:



	//default constructor

	Student()

	{

		id_ = 0;

		name_ = "No Name";

		pSize_ = 0;

		payments_ = nullptr;



		cout << "Default Constructor called, the value of payments pointer " <<payments_<< endl;

	}



	//parameterized constructor use initializer list to copy the pointer

	Student(int id, string name, int * pays, int size):payments_(pays)

	{

		id_ = id;

		name_ = name;

		pSize_ = size;

		//if not using initializer list you can copy the pointer as follows

		//payments_ = pays;





		//or copy the values which is better to insure that if the original array modified inside main not affecting the data inside the object

		/*payments_ = new int[size];



		for (int i = 0; i < size; i++)

		{

			payments_[i] = pays[i];

		}*/



		cout << "Parameterized Constructor called, the value of payments pointer " << payments_ << endl;

	}



	Student(const Student &std)

	{

		//this will make the two pointers points on the same data inside the heap, which is a problem

		//shallow copy

		//payments_ = std.payments_;



		//if there is not explicit copy constructor then it will use shallow copy by default 



		//create a new array inside the heap and make the pointer points to the new data

		//deep copy

		payments_ = new int[std.pSize_];		

		for (int i = 0; i < std.pSize_; i++)

		{

			payments_[i] = std.payments_[i];

		}

		cout << "Copy Constructor called, the value of payments pointer " << payments_ << endl;

	}



	void setPayments(int index, int value)

	{

		payments_[index] = value;

	}



	//or

	void setPayments(int * pays, int size)

	{

		pSize_ = size;

		//you have to delete before creating new array inside the memory

		delete[] payments_;

		payments_ = new int[size];

		for (int i = 0; i < size; i++)

		{

			payments_[i] = pays[i];

		}

	}



	int *getVersions()

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

	cout << "Enter the number of payments";

	cin >> size;



	int * payments = new int[size];

	cout << "Enter payments";

	for (int i = 0; i < size; i++)

	{

		cin >> payments[i];

	}

	

	Student s1(1, "Ali", payments, size);





	int *newPayments = new int[size];

	for (int i = 0; i < size; i++)

	{

		newPayments[i]=100;

	}



	s1.setPayments(newPayments, size);

	

}

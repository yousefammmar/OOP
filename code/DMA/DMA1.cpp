#include<iostream>

#include<string>

using namespace std;





class Rectangle

{

private:

	int height_;

	int width_;

public:



	Rectangle(int height = 1, int width = 1)

	{

		height_ = height;

		width_ = width;

	}



	int calculateArea()

	{

		return height_ * width_;

	}



	void printArea()

	{

		cout << "The area of rectangle 1 with height: " << height_ << " and width: " << width_ << " is:" << calculateArea() << endl << endl;

	}

};





int avg(int sum)

{

	return sum / 2;

}



int sum(int x, int y)

{

	return avg(x + y);

}





int main()

{

	int x = 10;

	int *xPtr = &x;



	cout << x << endl;

	cout << xPtr << endl;

	cout << *xPtr << endl;





	Rectangle r(10, 15);

	Rectangle *rPtr = &r;



	r.printArea();

	cout << rPtr << endl;

	(*rPtr).printArea();



	//or

	rPtr->printArea();



	//memory structure 

	// 1.stack to store the function in  order

	// 2.heap to store dynamic data

	// 3.data to store global and static variable

	// 4.text to store encoded code

	cout << sum(5, 6) << endl;





	//static memory allocation

	int y=5;

	int *yPtr = &y;

	int arr[5];







	int size=5;

	cin >> size;

	//int arr2[size] = { 0 }; //error because the variable z does not have a value, solution dynamic memory allocation



	//dynamic memory allocation

	//the pointer will stored inside the stack

	//the array will be stored in the heap

	int *a = new int[size] {0};

	a[1] = 2;



	for (int i = 0; i < size; i++)

	{

		cout << a[i] << endl;

	}

	







	int *b = new int[size];

	b = new int[size];//change the old address to the new one in the heap, the old location inside the heap will still and not delete, this will cause memory leak



	





	//create integer variable in the heap and store the value 8

	int* u = new int(8);

	cout << u << endl;

	cout << *u << endl;

	*u = 10;

	cout << *u << endl;





	//these will call constructors

	Rectangle* r2 = new Rectangle;

	Rectangle* r3 = new Rectangle(5,6);



	Rectangle *r4;//this will not call the constructor since we are creating the pointer







	//static memory allocation, no problem since the array will be delete when ending the scope

	/*while (true)

	{

		int arr3[100];

	}*/



	//dynamic memory allocation, problem of memory leak since the array will not removed from the heap

	/*while (true)

	{

		int *c = new int[size] {0};

		//delete c; //solve the memory leak

	}*/



	//delete data from heap to solve the memory leak

	Rectangle* r5 = new Rectangle(15, 60);

	delete r5;

	//delete r5;//runtime error since the pointer is already deleted

	r5 = new Rectangle(5, 6);





	Rectangle* r6 = new Rectangle(50, 6);

	delete r6;	

	r6->printArea();//error since the object is not in the heap, so you cant call function inside a delete object





	Rectangle* r7 = new Rectangle;

	delete r7;//delete the object from heap

	r7 = nullptr;//it will change the pointer from the deleted object to a null location





	//delete array

	int *arr2 = new int[10];

	delete[] arr2;

	//arr2[2] = 5;//wrong since the array is already deleted from the heap











}




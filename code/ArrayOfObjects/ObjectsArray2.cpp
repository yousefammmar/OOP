#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id_;
    string name_;

public:

    // default constructor
    Student()
    {
        id_ = 0;
        name_ = "---";
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor (name has default value)
    Student(int id, string name = "no name")
    {
        id_ = id;
        name_ = name;
        cout << "Parameterized constructor called" << endl;
    }

    // copy constructor
    Student(const Student& st)
    {
        id_ = st.id_;
        name_ = st.name_;
        cout << "Copy constructor" << endl;
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

void printStudentsArray(Student arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i].printStudent();
}

int main()
{
    const int SIZE = 3;

    // array initialization
    Student arr1[SIZE] = { Student(1, "Ali"), Student(2, "Sara"), Student(3) };

    cout << endl << endl;
    for (int i = 0; i < SIZE; i++)
        arr1[i].printStudent();

    // filling array from user
    Student arr2[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        int id;
        string name;

        cout << "Enter Id: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;

        // using constructor
        arr2[i] = Student(id, name);
    }

    cout << endl << endl;
    for (int i = 0; i < SIZE; i++)
        arr2[i].printStudent();

    // copy constructor
    Student s2 = arr2[2];

    Student s3;
    // NOT copy constructor (assignment operator)
    s3 = arr2[1];

    cout << endl << endl;

    Student arr3[2] = { Student(1, "Ali"), Student(2, "Sara") };

    // pass array of objects
    printStudentsArray(arr3, 2);
}

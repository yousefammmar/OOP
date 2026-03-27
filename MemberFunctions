#include <iostream>

using namespace std;

class Rectangle {
private:
    int width_;
    int height_;

public:

    Rectangle()
    {
        height_ = 0;
        width_ = 0;
    }

    Rectangle(int width, int height)
    {
        height_ = height;
        width_ = width;
    }

    int getHeight()
    {
        return height_;
    }

    int getWidth()
    {
        return width_;
    }

    void printArea()
    {
        cout << "The area is: " << height_ * width_ << endl;
    }

    void setHeight(int height)
    {
        height_ = height;
    }

    void setWidth(int width)
    {
        width_ = width;
    }

    void increase_Width_Height(int addWidth = 0, int addHeight = 0)
    {
        width_ = width_ + addWidth;
        height_ = height_ + addHeight;
    }

    int area_difference(Rectangle rect)
    {
        int rect_area = rect.getWidth() * rect.getHeight();
        int object_area = width_ * height_;
        int difference;

        if (rect_area > object_area)
            difference = rect_area - object_area;
        else
            difference = object_area - rect_area;

        return difference;
    }

    bool isEqual(Rectangle r)
    {
        if (r.getWidth() == width_ && r.getHeight() == height_)
            return true;
        else
            return false;
    }
};

// normal function (not a member function)
bool isEqual2(Rectangle r1, Rectangle r2)
{
    if (r1.getWidth() == r2.getWidth() && r1.getHeight() == r2.getHeight())
        return true;
    else
        return false;
}

// call by value
void MyFunction1(Rectangle r1)
{
    r1.setHeight(1000);
}

// call by reference
void MyFunction2(Rectangle &r1)
{
    r1.setHeight(1000);
}

int main()
{
    Rectangle r;
    r.setWidth(10);
    r.setHeight(15);
    r.printArea();

    r.increase_Width_Height();
    r.printArea();

    r.increase_Width_Height(3);
    r.printArea();

    r.increase_Width_Height(10, 5);
    r.printArea();

    cout << endl << endl << endl << endl;

    Rectangle r2(10, 15);
    r2.printArea();

    Rectangle r3(5, 7);
    r3.printArea();

    int diff = r2.area_difference(r3);
    cout << "The difference between the areas of r2 and r3 is: " << diff << endl << endl << endl;

    bool flag1 = r2.isEqual(r3);
    cout << "The rectangles are equal (0 for no 1 for yes)? " << flag1 << endl;

    bool flag2 = isEqual2(r2, r3);
    cout << "The rectangles are equal (0 for no 1 for yes)? " << flag2 << endl << endl;

    // call by value
    cout << "The height before calling function1: " << r2.getHeight() << endl << endl;
    MyFunction1(r2);
    cout << "The height after calling function1: " << r2.getHeight() << endl << endl;

    // call by reference
    cout << "The height before calling function2: " << r2.getHeight() << endl << endl;
    MyFunction2(r2);
    cout << "The height after calling function2: " << r2.getHeight() << endl << endl;
}

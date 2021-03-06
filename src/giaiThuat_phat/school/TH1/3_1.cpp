//Nguyen Hoang Phat - 6151071082
#include<iostream>
using namespace std;
#define Pi 3.14
class Shape
{
    public:
        virtual void input()=0;
        virtual void display()=0;
        virtual float acreage()=0;
};

class Circle : public Shape
{
    private:
        float radius;
    public:
        Circle();
        void input();
        void display();
        float acreage(); 
};
Circle::Circle()
{
    this->radius = 1;
}
void Circle::input()
{
    cout<<"Enter the circle radius: "<<endl;
    cin>>radius;
}
void Circle::display()
{
    float radiuss = acreage();
    cout<<"The acreage circle is: "<<radiuss<<endl;
}
float Circle::acreage()
{
    return (radius*radius)*Pi;
}
class Rectangle : public Shape
{
    private:
        float length;
        float width;
    public:
        Rectangle();
        void input();
        void display();
        float acreage();
};
Rectangle::Rectangle()
{
    this->length = 1;
    this->width = 1;
}
void Rectangle::input()
{
    cout<<"Enter the rectangle length and width: "<<endl;
    cin>>length>>width;
}
void Rectangle::display()
{
    float lengths = acreage();
    cout<<"The acreage rectangle is: "<<lengths<<endl;
}
float Rectangle::acreage()
{
    return length*width;
}
int main()
{
    Shape *circle = new Circle;
    Shape *rectangle = new Rectangle;
    circle->input();
    circle->display();
    rectangle->input();
    rectangle->display();
}
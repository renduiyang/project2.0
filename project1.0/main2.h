#include<cmath>
#include<iostream>
using namespace std;
#define pi 3.1415926;
double area(double radius)
{
    double area;
    area=radius*radius*pi;
    cout<<"the circle area is :"<<area<<endl;
    return area;
}
double area(double a,double b)
{
    double area;
    area=a*b;
    cout<<"the rectangle area is :"<<area<<endl;
    return area;
}
double area(double a,double b,double c)
{
    double area1;
    double p=(a+b+c)/2;
    area1=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"the triangle area is :"<<area1<<endl;
    return area1;
}
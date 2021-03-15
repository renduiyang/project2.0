//
// Created by 86152 on 2021/3/14.
// 计算cos的近似值
//
#include<iostream>
#include <cmath>
const double pi=3.1415926;
using namespace std;
double funcos(double x);
int main()
{
    double A;
    cout<<"please input a angle :"<<endl;
    cin>>A;
    if (A!=90)
    {cout<<"cos(A)="<<funcos(A)<<endl;}
    else
        cout<<"cos(A)="<<0<<endl;
    return 0;
}
double funcos(double x )
{
    double p=(x/180)*pi;
    double flag=-1,sum=1,a,j;
    for(int i=2;;i+=2)
    {
        a=1;
        for(j=1;j<=i;j++)
            a*=j;
        sum+=flag*(pow(p,i)/a);
        if((pow(p,i)/a)<1e-6)
            break;
        flag*=-1;
    }
    return sum;
}
#include<iostream>
#include <cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
    int num,number,b=1;
    srand(time(NULL));
    number=rand()%100+1;
    while (true)
    {
        cout<<"the--"<<b<<"--game"<<endl;
        cout<<"input a number"<<endl;
        cin>>num;
        if(num>number)
            cout<<"too big "<<endl;
        else if(num<number)
            cout<<"too small"<<endl;
        else
        {
            cout<<"win"<<endl;
            cout<<"you play"<<setw(3)<<b+1<<setw(7)<<"games"<<endl;
            break;
        }
        b++;
    }
    return 0;
}
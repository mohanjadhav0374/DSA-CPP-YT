#include<iostream>
using namespace std;
int main()
// {int sum =0;
//     int n;
// cout<<"Enter a Number ";
// cin>>n;
//     for (int i=1; i<=n; i++)
//     {
//     if(i%3 ==0)
//     sum+=i;

//     }
//     cout <<"sum is "<< sum;
//     cout<<endl;
// return 0;

//}

{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
int fact =1;
    for (int i=1; i<=n;i++)
{fact*=i;}

cout<<"Factorial is "<<fact;
cout<<endl;
return 0;
}
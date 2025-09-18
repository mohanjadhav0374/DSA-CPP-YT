#include<iostream>
using namespace std;
// int main()
// {int size=5;
//     int marks[size];
     
//     for (int i=0;i<size;i++)
//     {
//         cin>>marks[i];

//     }

//     for(int i=0;i<size;i++)
//     {cout<<marks[i]<<endl;}
//     return 0;

// }

// samllest and greatest value
// {
//     int marks[] ={12 , 5, 3, -1,9};
//     int size =5;
//     int smallest = INT_FAST16_MIN;
// for(int i=0;i<size;i++)
// {
//     smallest =max(marks[i],smallest);
// }
// cout <<smallest;
// return 0;
// }

// PASS BY REFERENCE 
// void changearry(int array[],int size)
// {
//     for (int i=0;i<size;i++)
//     {
//         array[i]=2*array[i];
//     }
// }

// int main()
// {
//     int mark[]={1 , 2, 3 ,4 , 5};
//     int size=5;
//     cout<<"Without pass by reference ";
//     for (int i=0;i<size;i++)
//     {cout<<mark[i]<<endl;}
//    cout<<"With pass by reference ";
//     changearry(mark,5);
// for (int i=0;i<size;i++)
// {cout<<mark[i]<<endl;}
// return 0;
// }

// Linear Search
// int search(int array[], int size, int target)
// {
//     for(int i=0;i<size;i++)
//     {
//     if (array[i]==target)
//     {
//         return i;  }
//     } return -1;
// }
// int main()
// {int array[]={8,6,4,1,9,3};
// int size = 6;
// int target;
// cin>>target;
// cout<<search(array,size,target);
// return 0;
// }


// REVERSE ARRAY
void reverse(int array[],int size )
{
    int start=0 , end = size-1;
    while(start<end)
    {
        swap(array[start], array[end]);
        start ++;
        end --;
    }

}
int main()
{
    int array[]={8,4,2,5,7,8,9};
    int size =7;
    reverse(array,size);
    for (int i=0;i<size;i++)
    {cout<<array[i];}
}
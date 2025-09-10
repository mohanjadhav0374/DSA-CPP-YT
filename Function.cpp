

//  Function
#include<iostream>
using namespace std;

// int sum(int a,int b)
// {
//     int s = a+b;
//     return s;
// }

// int main()
// {
//     cout<<sum(3,9);
//     return 0;
// }

// Calculate sum of n numbers


// int sumN(int n)
// {
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//        sum+=i;
//     }
//     return sum;
// }

// int main()
// {
//     cout<<sumN(10);
//     return 0;
// }

// n Factorial nCr
// int facT(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//        fact*=i;
//     }
//     return fact;
// }

//     int ncr(int n , int r ){
//         int factorial_n = facT(n);
//         int factorial_r = facT(r);
//         int factorial_nmr = facT(n-r);
    
//     return factorial_n/(factorial_r * factorial_nmr); }


// int main()
// {
//     cout<<ncr(9,6);
//     return 0;
// }

// check whether prime or not
// int primE(int n)
// {int num =0;
//     for (int i=2;i<=n-1;i++)
//     {num=n%i;
//        if(n%i!=0)
//     { return true;}
// else{ return false;}
//       } 
// }
// int main()
// {
//     cout<<primE(5);
//     return 0;
// }

// Decimal to Binary code

// int Binary(int deciNum)
// {
//     int ans = 0;
//     int pow = 1;
//     while(deciNum>0)
//     {
//         int rem = deciNum%2;
//          deciNum/=2;
//          ans +=(rem*pow);
//          pow *= 10;
//     }
//    return ans;
// } 

// int main()
// {
//     cout<<Binary(109);
//     return 0;
// }




// Binary to decimal code
// int Decimal(int deciNum)
// {
//     int ans = 0;
//     int pow = 1;
//     while(deciNum>0)
//     {
//         int rem = deciNum%2;
//         ans +=(rem*pow);
       
//          deciNum /=10;
//          pow *=2;
         
//     }
//    return ans;
// } 

// int main()
// {
//     cout<<Decimal(1010001011);
//     return 0;
// }
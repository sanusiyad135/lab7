//to print the power of a number enntered by user

#include<iostream>
using namespace std;
//prototype
long pow(int,int);
int main()
   {
      int m,n;
      long p;
           //print
           cout<<"enter the value of number and its power"<<endl;
           //enter the value of base and power
           cin>>m>>n;
           //call function
            p=pow(m,n);
           //print the base raised to the power
           cout<<m<<"^"<<n<<" is "<<p;
           return 0;
    }
//define a recursive function 
long pow(int m,int n)
     {
	   //condition
	   if(n>0)
            return (pow(m,n-1)*m);
       else
             return 1;
	   
      }

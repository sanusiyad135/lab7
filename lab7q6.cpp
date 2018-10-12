//to print a number in reverse order
#include<iostream>
//include standard library
using namespace std;
//return something function prototype
int reverse(int);
//main function
int main()
   {
	   //declare varibles
	   int p;
	   cout<<"enter the value of p ";
	   cin>>p;
	   //function calling
	   reverse(p);
	   return 0;
   }
   
  int reverse(int p){
     if (p!=0){
		 cout<<p%10;
     return reverse(p/10);
	 }
    else
    return 0;
 
  }
       

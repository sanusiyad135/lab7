//to print all the even or odd natural number within the entered range  
#include<iostream>
//include standard library
using namespace std;
//return something function prototype
int num(int,int);
//start function
int main()
   {
	   //declare varibles
	   int llimit,ulimit,print;
	   //print
    cout<<"enter the value of lower and upper limit ";
    //store input in varibles
    cin>>llimit>>ulimit;
    //function calling
    num(llimit,ulimit);
    return 0;
   }
   
   //define recursive function
   int num(int llimit,int ulimit)
   {
	   
	   //add base condition
	     if(llimit<=ulimit)
      {
	   cout<<" "<<llimit<<" ";
       return num(llimit+2,ulimit);
                     }
     else
     return 0;
        
       }
       
 
	

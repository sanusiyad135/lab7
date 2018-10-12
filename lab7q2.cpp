//to print the first n natural numbers  that entered by user
#include<iostream>
//include standard library
using namespace std;
//return something function prototype
int num(int);
//start function
int main()
   {
	   //declare varibles
	   int n,print;
	   //print
    cout<<"enter the value of n ";
    //store input in varibles
    cin>>n;
    //function calling
    print=num(n);
    //print
    cout<<print<<endl;
    return 0;
   }
   
   //define recursive function
   int num(int n){
	   //add base condition
	   if(n>1){
	   cout<<" "<<n<<" ";
       return num(n-1);
   }
       else if(n==1)
       return 1;
       else 
       return 0;
       
}

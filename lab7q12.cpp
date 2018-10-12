//to print the lcm of  enered no 
#include<iostream>
using namespace std;
//return something function prototype
int lcm(int,int,int);
//main function
int main()
   {
	   //declare varibles
	   int p,q,common=2;
	   cout<<"enter the value of p and q ";
	   cin>>p>>q;
	   //function calling
	   lcm(p,q,common);
	   cout<<"least common multiple of no "<<p<<" "<<q<<" is "<<lcm(p,q,common)<<endl;
	   return 0;
   }
   //define function
  int lcm(int p,int q,int common)
  {
	   //base condition
	    if(common%p==0 && common%q==0)
       return common;
       else
        return lcm(p,q,++common);
       }


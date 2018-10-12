//to find the sum of first n natural number enterd by user
#include<iostream>
//include standard library
using namespace std;
//prototype of function
int sum(int);
//start by main function
int main(){
	//declare class of variables 
	int n,addition;
	//print the the number
	cout<<"enter the value of n "<<endl;
	//store number in varible n
	cin>>n;
	//function calling
	addition=sum(n);
	//print the sum of all numbers 
	cout<<"the summation of first n natural number is "<<addition<<endl;
	return 0;
}
//declare recursive function
int sum(int n){
	//add base condition
	if(n>1){
		//function recursion
	return (sum(n-1)+n);
    }
    else if(n==1)
    return 1;
    else
    return 0;
}

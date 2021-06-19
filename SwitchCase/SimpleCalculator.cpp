#include<iostream>
using namespace std;
int main(){
    int choice, a,b;
    cout<<"Enter two numbers\n";
    cin>>a,b;
    cout<<"1.Add Two Numbers \n";
    cout<<"2.Subtract Two numbers\n";
    cout<<"3.Multiply Two Numbers\n";
    cout<<"4.Divide Two Numbers\n";
    cout<<"Enter what you have to do with two numbers\n";
    cin>>choice;
    
    switch(choice){
    	
        case 1: 
	    {
		int res = a + b;
        cout<<"Result is : "<<res;
        break;
   		 }
        case 2: 
		{
		int res = a- b;
        cout<<"Result is : "<<res;
        break;
        }
        case 3:
		{
			int res = a * b;
        cout<<"Result is : "<<res;
        break;
		 } 
        case 4:
		{
			 int res = a / b;
        cout<<"Result is : "<<res;
        break;
			
		 }
        default :  cout<<"Wrong Choice";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void interchange(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	
	cout<<"Swapping by call by value a = "<< a<< " b = "<<b<<endl;
}

int main(){
	
//	Creating a function to swap two values using call by value

	int n1, n2;
	cin>>n1>>n2;
	
	cout<<" Before Swap a = "<<n1<<" b = "<<n2<<endl;
	
	
	interchange(n1, n2);
	
	cout<<" After Swap a = "<<n1<<" b = "<<n2<<endl;
	 
}

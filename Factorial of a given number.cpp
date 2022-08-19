#include<bits/stdc++.h>
using namespace std;

void factorial(int n, int &ans){
	if(n == 1){
		return;
	}
	
	ans *= n;
	n--;
	factorial(n, ans);
}

int main(){
	
	//Factorail of a given number is factorial of number-1
	// factorial of 4 is 4*3*2*1 = 24
	
	int n;
	cin>>n;
	
	int ans = 1; 
	factorial(n, ans);
	
	cout<<"Factorial of "<<n<<" is : "<< ans;
	
	
	return 0;
}

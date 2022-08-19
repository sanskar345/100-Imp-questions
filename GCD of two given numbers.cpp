#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
	if(n1%n2 == 0){
		return n2;
	}
	
	gcd(n2, n1%n2);
}

int main(){
	
	//Greatest Common Factor
	// GCD of n1 and n2 is -- n1 = 462 , n2 = 147
	// 462%147 = 21
	// 147 % 21 = 0 ... so 21 is GCD
	
	
	cout<<"Enter the Fisrt Number: ";
	int n1;
	cin>>n1;
	cout<<"Enter the second Number: ";
	int n2;
	cin>>n2;
	
	int ans = gcd(max(n1, n2), min(n1, n2));
	cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<ans;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Prime number is one which is divisible by 1 or itself
	
	// Check if a number is prime or not
	
	//Sieve of Eratosthenes
	
	int n;
	cin>>n;
	
	vector<bool> prime(n+1 , true);
	prime[0] = prime[1] = false;
	for(int i=2; i<=n; i++){
		if(prime[i]){
			for(int j=i*2; j<=n; j+=i){
				prime[j] = false;
			}
		}
	}
	
	if(prime[n]){
		cout<<"It is a prime Number";
	}
	else{
		cout<<"It is not a prime Number";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	//Reversing a given number
	
	int ans = 0;
	
	while(n!=0){
		int lastDigit = n%10;
		ans *= 10;
		ans += lastDigit;
		n /= 10;
	}
	
	cout<<endl;
	cout<<"Reversed Number is : "<<ans;
	return 0;
}

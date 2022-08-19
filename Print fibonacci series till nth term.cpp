#include<bits/stdc++.h>
using namespace std;

void printFib(int first, int second, int count, int n){
	if(count >= n){
		return;
	}
	cout<<first+second<<" ";
	printFib(second, first+second, ++count, n);
}

int main(){
	
	// fibonacci series like 0 1 0+1=1 1+1=2 2+1=3
	//Print first n terms
	
	int n;
	cin>>n;
	
	if(n == 1){
		cout<<0;
	}
	else{
		cout<<0<<" "<<1<<" ";
		int count = 2;
		printFib(0, 1, count, n);
	}
	return 0;
}

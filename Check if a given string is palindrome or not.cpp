#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	// palindrome means string is same as previous if it is reversed
	//Checking if the string is palindrome or not using two pointer approach
	
	int start = 0;
	int end = s.size() - 1;
	bool flag = true;
	while(start < end){
		if(s[start] != s[end]){
			flag = false;
			break;
		}
		start++;
		end--;
	} 
	
	if(flag){
		cout<<"String is Palindrome";
	}else{
		cout<<"String is Not Palindrome";
	}
	return 0;
}

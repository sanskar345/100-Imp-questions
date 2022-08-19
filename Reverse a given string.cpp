#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	//Reversing a string using two pointer approach
	
	int start = 0;
	int end = s.size() - 1;
	
	while(start < end){
		swap(s[start], s[end]);
		start++;
		end--;
	} 
	
	cout<<endl;
	cout<<"Reversed string is : "<<s;
	return 0;
}

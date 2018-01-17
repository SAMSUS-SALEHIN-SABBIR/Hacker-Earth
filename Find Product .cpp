#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long arr;
	int i,n;
	long long int mul=1;
	cin >> n;
	for(i=0;i<n;i++)
	{
		//ans =1;
		cin >> arr;
		mul=(arr*mul)%1000000007;
		//ans=(mul)%1000000007;
	}
	cout << mul << endl;
	return 0;
}

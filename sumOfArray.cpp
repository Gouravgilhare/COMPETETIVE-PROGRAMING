#include<bits/stdc++.h>
using namespace std;

//T testcases .print sum of the array 
//input : t
//n
//n separated array
int main(){

	int t;
	cin >> t;
	while(t--){

		int n,sum=0;
		cin>>n;
		for(int i = 0 ; i < n ; i++){
			int k;
			cin >> k;
			sum += k;
		}

		cout<<sum<<endl;

	}
	return  0;	
}
// Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R.

// 1 <=N <=10^5
// 1 <=a[i] <=10^5
// 1 <=Q <=10^5
// 1 <=L , R<=N 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
// #bruteforce

// int main(){

// 	int n;
// 	cin >> n;

// 	for(int i = 1 ; i <= n; i++)
// 	{
// 		cin >> a[i];
// 	}

// int q;
// cin >>q;
// while(q--){

// 	int  L, R,sum=0;
// 	cin >> L >> R;

// 	for (int i = L; i <= R; ++i)
// 	{
// 		sum += a[i];
// 	}

// 	cout<<sum<<endl;

// }
	
// 	return 0;
// }


long long pre[N];

int main(){


	int n;
	cin>>n;
	long long sum = 0;
	int temp;
	for(int  i= 1; i<=n ;i++)
	{
		cin>> temp;
		pre[i]=pre[i-1]+ temp;
	}


	int q;
	cin >>q;
	while(q--){

		int L,R;
		cin >>L >> R;

		cout<<pre[R]-pre[L-1]<<endl;
	}

	return 0;
}

// 8
// 19
// 28
// 21
// ArrayManipulation.cpp

//IPNUT: 
// 5 3
// 1 2 100 
// 2 5 100
// 3 4 100

//OUTPUT :  200

//BruteFOrce
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e7+10;
// int arr[N];

// int main(){

// 	int n , q;
// 	cin >> n >> q;
	

// 	while(q--){
// 		int a,b,k; 

// 		cin >> a >> b >> k;
// 		for(int i = a ; i <= b ; i++)
// 			arr[i] = arr[i] + k;
		
// 	}

// 	int maxEle = arr[1];
// 	for(int  i= 1; i <= n ; i++){
	
// 			maxEle = max(maxEle , arr[i]);
		
// 	}

// 	cout << maxEle<<endl;

// 	return 0;

// }




//Optimize aproach 
//preComputation
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int main(){

	int n , q;
	cin >> n >> q;
	

	while(q--){
		int a,b,k; 

		cin >> a >> b >> k;
		arr[a] += k;
		arr[b+1] -=k;
	}

	for (int i = 1; i <=n; ++i)
	{
		arr[i] += arr[i-1];
	}

	int maxEle = arr[1];
	for(int  i= 1; i <= n ; i++){
	
			maxEle = max(maxEle , arr[i]);
		
	}

	cout << maxEle<<endl;

	return 0;

}
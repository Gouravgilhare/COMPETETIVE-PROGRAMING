// Given array of N integers. Given Q queries and in each query given a nummber x,print count of that number in array.
// 1<=N <=10^5
// 1<= a[i]<=10^7
// 1<=Q<=10^5

#include<bits/stdc++.h>
#include<chrono>

using namespace std;
using namespace std::chrono;

//brute force 

// int main(){
// auto start = high_resolution_clock::now();
// 	int N;
// 	cin >> N;
// 	int a[N];
// 	for(int i = 0; i < N; i++){
// 		cin>> a[i];
// 	}

// 	int Q;
// 	cin >> Q;
// 	while(Q--){
// 		int n;
// 		cin>> n;
// 		int cnt= 0;
// 		for(int i =0 ; i< N; i++){
// 			if(a[i] == n) cnt++;
// 		}
// 		cout<< cnt<<endl;
// 	}

// auto stop = high_resolution_clock::now();
// 	auto duration  = duration_cast<milliseconds>(stop-start);
// 	cout<<"Execution time : "<<duration.count() << "ms "<<endl;
// 	return 0;
// }


//Hashing
const int size = 1e7+10;
int hsh[size];

int main(){

	auto start = high_resolution_clock::now();
	int N;
	cin>>N;
	for(int i = 0 ; i < N; i++){
		int n;
		cin >> n;
		hsh[n]++;
	}

	int Q;
	cin >> Q;
	while(Q--){
		int m;
		cin >> m;
		cout<<hsh[m]<<endl;
	}

	auto stop = high_resolution_clock::now();
	auto duration  = duration_cast<milliseconds>(stop-start);
	cout<<"Execution time : "<<duration.count() << "ms "<<endl;

	return 0;
}




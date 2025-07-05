// Given 2d array a of N*N integers. Given Q queries and in each query given a,b,c and d print sum of square representd by (a,b) as top left point and (c,d) as top bottom right point.

// 1 <= N <= 10^3
// 1 <= a[i][j] <= 10^9
// 1 <= Q <= 10^5
// 1 <= a,b,c,d <= N

#include <bits/stdc++.h>
using namespace std;
const int N =1e3+10;
int a[N][N];

//Brute Force

// int main(){
// 	int  n;
// 	cin >> n; 
// 	for(int i = 1; i<= n; i++){
// 		for(int  j= 1; j<= n ; j++){
// 			cin >> a[i][j];
// 		}
// 	}

// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int a1,b,c,d;
// 		cin >> a1>> b>>c>>d;
// 		long long sum = 0;
// 		for(int i=a1; i<=c; i++){
// 			for(int j = b ; j<=d; j++){
// 				sum += a[i][j];
// 			}
// 		}
// 		cout<<sum<<endl;
// 	}

// return 0;
// }


//optimized approach
//pre-computation

int ps[N][N];
int main(){
	int  n;
	cin >> n; 
	for(int i = 1; i<= n; i++){
		for(int  j= 1; j<= n ; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <=n; ++i)
	{
		ps[i][0]=0;
		ps[0][i]=0;
	}
	for(int i = 1; i<= n; i++){
		for(int  j= 1; j<= n ; j++){
			ps[i][j] = a[i][j]+ps[i-1][j]+ps[i][j-1] -ps[i-1][j-1];
		}
	}
	

	int t;
	cin >> t;
	while(t--){
		int a1,b,c,d;
		cin >> a1>> b>>c>>d;
		cout<<ps[c][d]-ps[a1-1][d]-ps[c][b-1]<<endl;
	}

return 0;
}



//INPUT: 
// 3
// 3 6 2
// 8 9 2
// 3 4 1
// 2
// 1 1 2 2
// 1 2 3 3

// OUTPUT:
// 26
// 24

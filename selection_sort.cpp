// selection_sort.cpp
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n ;
	int a[n];
	for(int  i = 0 ; i < n ; i++)
			cin >> a[i];

	for(int  i = 0 ; i<n ; i++)	{
		int minele = i;
		for(int j= i+1; j<n ; j++){
			if(a[j] < a[minele])
				minele = j;
		}

		swap(a[minele], a[i]);
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i]<<" ";
	}


	return 0;
}

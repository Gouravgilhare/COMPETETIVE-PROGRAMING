// merge_sort.cpp
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
void merge(int l, int r , int mid	){
	int lsz = mid-l+1;
	int rsz = r-mid;
	int larr[lsz+1], rarr[rsz+1];
	for(int  i = 0 ; i< lsz; i++ ){
		larr[i]= a[i+l];
	}for(int  i = 0 ; i< rsz; i++ ){
		rarr[i]= a[i+mid+1];
	}

	larr[lsz]=rarr[rsz]=INT_MAX;

	int l_i=0,r_i=0;
	for (int i = l; i <=r; ++i)
	{
		if(larr[l_i] <= rarr[r_i]){
			a[i]=larr[l_i];
			l_i++;
		}else{
			a[i] =rarr[r_i];
			r_i++; 	
		}
	}
}

void mergeSort(int l , int r){
	if(l == r) return ;
	if(l <r){
		int mid = (l+r)/2;
		mergeSort(l, mid);
		mergeSort( mid+1, r);
		merge(l, r, mid);
	}
}
int main(){

	int n;
	cin >> n ;
	
	for(int  i = 0 ; i < n ; i++)
			cin >> a[i];

	mergeSort(0, n-1);


	for (int i = 0; i < n; ++i)
	{
		cout << a[i]<<" ";
	}


	return 0;
}

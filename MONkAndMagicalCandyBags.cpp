// MONkAndMagicalCandyBags.cpp
// INPUT: 
// 1
// 5 3
// 2 1 7 4 2
// OUTPUT: 
// 14

#include<bits/stdc++.h>
using namespace std;
int N   = 1e5 + 10;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		multiset<long long>bags;
		for(int  i = 0 ; i < n ; i++){
			long long candy_ct;
			cin >> candy_ct;
			bags.insert(candy_ct);
		}
		long long total_candies = 0;
		for(int  i = 0 ; i < k ; i++){
			auto it = (--bags.end());
			long long candy_ct = *it;
			total_candies += candy_ct;
			bags.erase(it);
			bags.insert(candy_ct/2);

		}

		cout<<total_candies<<endl;
	}

	return 0;
}

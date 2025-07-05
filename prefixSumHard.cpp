// prefixSumHard.cpp
// INPUT:
// 2
// 5 5
// abcec
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4
// 5 5
// aabbc
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4


// OUTPUT:
// NO
// NO
// YES
// NO
// NO
// YES
// NO
// YES
// YES
// YES




//BruteForce
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;
// 	cin >>t;
// 	while(t--){
// 		string s;
// 		int n,q;
// 		cin >> n>> q;
// 		cin >> s;
// 		while(q--){

// 			int l , r;
// 			cin >>l >> r;
// 			int hsh[26];
// 			for(int i = 0; i<26; i++) hsh[i]=0;
// 			int odd=0; l--; r--;

// 			for(int i= l; i <= r ;i++){
// 				hsh[s[i]-'a']++;
// 			}
// 			for(int i = 0; i <=26	; i++){
// 				if(hsh[i]%2 != 0)odd++;
// 			}

// 			if(odd > 1) cout<< "NO"<<endl;
// 			else cout<< "YES"<<endl;
// 		}
// 	}



// 	return 0;
// }


//PreComputation method
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N][26];


int main(){

	int t;
	cin >>t;
	while(t--){

		for(int i = 0 ;i< N; i++){
			for(int j = 0; j< 26; j++){
				hsh[i][j]= 0;
			}
		}
		string s;
		int n,q;
		cin >> n>> q;
		cin >> s;

		for(int  i = 0 ; i < n ; i++){
			hsh[i+1][s[i]-'a']++;
		}

		for(int  i = 0; i<26; i++){
			for(int  j =1 ; j<=n ; j++){
				hsh[j][i] += hsh[j-1][i];
			}
		}


		while(q--){

			int l , r;
			cin >>l >> r;

			int odd = 0;
			for(int i =0 ;i<26; i++){
				int charCnt = hsh[r][i] - hsh[l-1][i];
				if(charCnt %2 != 0) odd++;	
			}

			if(odd > 1) cout<< "NO"<<endl;
			else cout<< "YES"<<endl;
		}
	}



	return 0;
}
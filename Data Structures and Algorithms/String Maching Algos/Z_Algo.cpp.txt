
#include<bits/stdc++.h>
using namespace std;

int main(){

	string s; cin >> s;
	int n =s.size();
int l=0,r=0;
vector <int> z(n,0);

for(int i = 1;i < n; i++){

  // case i is in range [l,r]

	if(i<=r)
     z[i] = min(z[i-l], r-i+1);
	
	while(z[i]+i < n && s[z[i]]==s[i + z[i]])
		z[i]++;

	if(r < i+z[i]-1)
		l = i, r = i+z[i]-1;

}

for(auto x: z)
cout<<x<<" ";

  return 0;
}


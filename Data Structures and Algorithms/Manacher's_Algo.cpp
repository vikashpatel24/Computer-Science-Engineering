#include<bits/stdc++.h>
using namespace std;

// Manacher's Algorithm
string Manachers_algo(string &s){
    
   int n = s.size();
   vector<int>p(n,0);
   int R=0,C=0;
  vector<int>res = {0,0,0};
   for(int k=1;k<s.size()-1;k++){ 
    
    int mirr = 2*C-k;
    if(k<R){
        p[k] = min(R-k, p[mirr]); 
    }
     
   // increase the size
    while(s[k+(1+p[k])]==s[k-(1+p[k])]){
        p[k]++;
    }
    
    // increase the boundry
    if(R < k+p[k]){
        C = k;
        R = k + p[k];
    }
       
       if(res[0]<=R-C)
           res[0] = R-C, res[1] = C, res[2] = R;
       // cout<<C<<" "<<R<<endl;
 }
    
  string ans;
    C = res[1], R = res[2];
    if(s[C] != '#') ans += s[C];
    for(int l=C+1,m=C-1; l<=R; l++,m--){
        // cout<<m<<" "<<l<<endl;
      if(s[m]!='#'){
        ans = s[m] + ans;
        ans += s[l];
      }
    }

     return ans;   
}

string longestPalindrome(string s) {
 
    
   string str = "$#";
    
    for(auto x : s){
        str += x;
        str += "#";
    }
    str += '@';
   return  Manachers_algo(str);
   
        
    
}
int main(){
	
   string s = "babad";
   cout<<"Longest Palindromic Substring: "<<longestPalindrome(s);
    
}
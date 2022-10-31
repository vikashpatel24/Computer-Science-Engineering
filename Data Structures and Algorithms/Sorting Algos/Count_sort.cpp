#include<bits/stdc++.h>
using namespace std;

void print(vector<int>tmp){

 for(int i=0;i<tmp.size();i++)
  cout<<tmp[i]<<" ";
cout<<endl;
}
// multiset<set<string>>mset;
//     void  subsetsWithDup(vector<int>& v,int index,string s){
               
//                mset.insert(s);
//                 // cout<<s<<endl;
//         for(int i=index;i<v.size();i++){
//             vector<int>temp= s;
//             s.insert(v[i]);
//          subsetsWithDup(v,i+1,s);
//        //  subsetsWithDup(v,st+1,en,temp);
//               // s.pop_back();
//            }
//         }
#define  N 10
vector<int>a(N,0);
       void countsort(vector<int>&v){

          int n=v.size();
            vector<int>ans;
          for(int i=0;i<n;i++)
            a[v[i]]++;
          print(a);
        
         for(int i=0;i<N;i++){
         while(a[i]!=0){
             ans.push_back(i);
           a[i]--;
           }
         } 
     
          print(ans);

        }

int main(){

int n;cin>>n;
vector<int>v(n);

for(auto &x: v)
  cin>>x;

countsort(v);

 // for(auto &c :tmp );
 //  cout<<c<<" ";


//   vector<int>s;
//  subsetsWithDup(v,0,s);
 
// for(auto &x: mset){
//   for(auto &p:x)
//   cout<<p<<" " ;
// cout<<endl;
// }
  return 0;
}
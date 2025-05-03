#include<bits/stdc++.h>
using namespace std;

map<int,int> mp;//first is value  second is position
  
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,s,c=0;
  cin>>n>>s;
  vector<int> v(n);
	long long int ans=0;
  for(auto &e:v){
    cin>>e;
    if(mp.count(s-e) > 0 ){// mp[s-v[i]]>0
      ans+=mp[s-e];
    }
    mp[e]++;
  }
  cout<<ans;
}
 /*             
 2  8             
 4
if(mp[8-4])  x
mp[4]=1
 4             
 if(mp[8-4])    / 1
 mp[4]=2
4 */
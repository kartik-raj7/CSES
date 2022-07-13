#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#include <iomanip>
#define pb push_back
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
bool compare(pair<int,int>&m1,pair<int,int>&m2){
    if(m1.second==m2.second){//
            return m1.first>m2.first;
            }
            return m1.second<m2.second;
}
int main(){
int n;
cin>>n;
vector<pair<int,int>>mp;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    mp.push_back({x,y});
}
sort(mp.begin(),mp.end(),compare);
// for(auto i:mp){
//     cout<<i.first<<" "<<i.second<<endl;
// }
int c=0,maxi=0;
for(int i=0;i<n-1;i++){
    if(mp[i].second>mp[i+1].first&&mp[i].second<mp[i+1].second){
        c++;
        maxi=max(maxi,c);
    }
    else c=0;
}
cout<<maxi+1<<endl;
}
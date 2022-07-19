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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
ll n;
cin>>n;
vector<pair<ll,ll>>v;
for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    v.pb({x,y});
}
sort(v.begin(),v.end());
// for(auto i:v){
//     cout<<i.first
// }
ll time = 0,sum=0;
for(ll i=0;i<n;i++){
    time+=v[i].first;
    sum += v[i].second-time;

}
cout<<sum<<endl;
}
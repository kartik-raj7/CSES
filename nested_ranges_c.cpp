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
#include <queue>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
// using namespace __gnu_pbds;
using namespace std;
bool compare(pair<ll,ll>s1,pair<ll,ll>s2){
      if(s1.first==s2.first){
          return s1.second<s2.second;
      }
      else return s1.first<s2.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    loop(i,0,n){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end(),compare);
    vector<int> v1;
    vector<int> v2;
    for(auto i:v){
        
    }
}
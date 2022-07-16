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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    vector<int> k;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int i=0;
    while(q.size()!=1){
        i++;
        if(i%2!=0){
            q.push(q.front());
            q.pop();
        }
        else {ans.push_back(q.front());
        q.pop();
    }
    }
    ans.pb(q.front());
       for(auto i:ans){
    cout<<i<<" ";
   }
//     int i=0;
//     // while(i<s.size()){
//     //   cout<<s.front();
//     //   s.pop();
//     // }
//     int f = s.size();
//    for(int i=1;i<=f;i++){
//     if(i%2==0){
//         k.pb(s.front());s.pop();}
//     else {
//         ans.pb(s.front());
//         s.pop();
//     }
// }
//     else {k.pb(s.front());s.pop();}
//    }
//    for(auto i:ans){
//     cout<<i<<" ";
//    }
//    for(auto i:k){
//     cout<<i<<" ";
//    }

}
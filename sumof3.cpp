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
int n,target;
cin>>n>>target;
int arr[n];
// unordered_multimap<int,vector<int>>mp;
vector<pair<int,int>>mp;
loop(i,1,n){
    cin>>arr[i];
    pair<int,int>p;
    p.first = arr[i];
    p.second = i;
    mp.pb(p);
}
sort(mp.begin(),mp.end());
vector<set<int>> v;
int low,high;
bool flag = false;
for(int i=0;i<n;i++){
    low = i+1,high=n-1;
    while(low<high){
        if(mp[i].first+mp[low].first+mp[high].first==target){
            if(low!=i&&high!=i){
                cout<<mp[i].second<<" "<<mp[low].second<<" "<<mp[high].second<<endl;
                return 0;
            //      v.pb();
            // v.pb(mp.at(low).second);
            // v.pb(mp.at(high).second);
            // flag = true;
            // break;
            }
            // if(arr[i]!=arr[low]&&arr[low]!=arr[high]){
        }
        else if(mp[i].first+mp[low].first+mp[high].first<target){
            low++;
        }
        else high--;
    }
}
// if(flag){
//     // cout<<mp[v[0]].first<<" "<<mp[v[1]]<<" "<<mp[v[2]];
// }
// else 
cout<<"IMPOSSIBLE"<<endl;
}
    // for(int j=i+1;j<n;j++){
    //     int low = j;
    //     int high = n;
    //     int s2 = arr[i]+arr[j];
    //     while(low<=high){
    //         int mid = (low+high)/2;
    //         if(s2+arr[mid]==target){
    //             v.pb(i);
    //             v.pb(j);
    //             v.pb(mid);
    //             break;
    //         }
    //         else if(s2+arr[mid]<target){
    //               low = mid+1;
    //         }
    //         else high=mid-1;
    //     }
    // }
// }
// for(auto i:v){
//     cout<<i<<" ";
// }
// }
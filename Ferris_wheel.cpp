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
int main(){
   int n,wt;
   cin>>n>>wt;
   map<int,bool>mp;
   int arr[n];
   loop(i,0,n){
    cin>>arr[i];
    mp[arr[i]]=false;
   }
   sort(arr,arr+n);
   int c=0;
   int i=0,j=n-1;int k=0;
   while(i<=j){
      if(arr[i]+arr[j]>wt){
       mp[j]= false;
       mp[i]=false;
       j--;
       }
      else{
        c++;
        mp[arr[i]]=mp[arr[j]]=true;
        i++;
        j--; 
      }
   }
//    cout<<c<<endl;
   for(int i=0;i<n;i++){
    if(!mp[arr[i]])c++;
   }
   cout<<c<<endl;
//    for(int i=0;i<n;i++){
//     if(mp.find(wt-arr[i])!=mp.end()&&mp[wt-arr[i]]>0){
//         mp[wt-arr[i]]--;
//         mp[arr[i]]--;
//         c++;
//     }
//    }
//    cout<<c<<endl;
}
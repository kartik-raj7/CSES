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
   int n,m,r;
   cin>>n>>m>>r;
   int c=0;
   int f = 2e5;
int arr[f],brr[f];
//    int arr[n];
//    int brr[m];
   loop(i,0,n){
    cin>>arr[i];
   }
   loop(i,0,m){
    cin>>brr[i];
   }
   sort(arr,arr+n);
   sort(brr,brr+m);
   int i=0,j=0;
   while(i<n&&j<m){
    if(abs(arr[i]-brr[j])<=r){
        i++;j++;c++;
    }
    else{
        if (arr[i]-brr[j] > r){
			j++;
	}
    else i++;//apartment is small
   }
   }
   cout<<c<<endl;
// 346
//    map<pair<int,int>>mp1;
// vector<pair<int,int>>v;


//    loop(i,0,n){
//         cin>>brr[i];
//         mp[brr[i]]++;
//         // mp[x+r]++;
//         // mp[x-r]++;
//    } 
//    loop(i,0,m){
//     cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(brr[i]-r<=arr[j]<=brr[i]+r){
//             if(mp[arr[j]]>0){
//                 c++;
//                 mp[arr[j]]--;
//             }
//         }
//     }
//    }
//    cout<<c<<endl;
//     if((mp.find(arr[i+r])!=mp.end())){
//         if(mp[arr[i+r]]>0){
//             c++;
//             mp[arr[i+r]]--;
//         }
//     }
//         else if(mp.find(arr[i-r])!=mp.end()){
//           if(mp[arr[i-r]]>0){
//              c++;
//             mp[arr[i-r]]--;
//         }
//     }
//    }
//    cout<<c<<endl;
}
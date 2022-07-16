////////////////
//basically what we are doing here is that we are inserting values in our multiset if we get an element that is bigger than we already have
///we will make a new tower hence we insert the value in our multi set 
///for the values that are smaller we simply move further to check for other elements
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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int> s;
    int arr[n];
    loop(i,0,n){
     cin>>arr[i];
    }
    int c = 1;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            s.insert(arr[i]);
        }
        else{
            auto x = s.upper_bound(arr[i]);
             if(x == s.end()){
                s.insert(arr[i]);//if it is not in set we insert
             }
             else{
                s.insert(arr[i]);//if the element is in the set we have to insert the new element which will now be the top of the set
                s.erase(x);
             }
            }
        }
    cout<<s.size();
}
    // for(auto i:s){
    //    auto x = s.upper_bound(i);
    //    if(x!=s.end()){
    //    s.erase(x);
    // }
    // else c++;
    // }
    // cout<<c<<endl;

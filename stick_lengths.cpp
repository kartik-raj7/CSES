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
    int n;
    cin>>n;
    ll arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k = (n%2==0)?(n/2)-1:n/2;
    int sub = arr[k];
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans+=abs(arr[i]-sub);
    }
    cout<<ans<<endl;
}
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
using namespace std;
const int MAX_N = 2e5;
int N;
int ans[MAX_N];
vector<pair<pair<int, int>, int>> v(MAX_N);
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    ll low = 0;
    ll  ans=0;
    ll high = 1e18;//ye isliye lia h kyunki the answer can be equal to t agar 1e9 lenge to if answer exits on 1e9 access ni krpaenge
    while(low<=high){
        ll mid = (low+high)/2;
        ll sum = 0;
        for(int i=0;i<n;i++){
            sum+=(mid/arr[i]);
            if(sum>=t){
                break;
            }
        }
        if(sum>=t){
            high = mid-1;
            ans = mid;
            
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;

}
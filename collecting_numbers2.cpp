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
    // unordered_multimap<int,int>mp;
    map<int,int>mp;
    int n,t;
    cin>>n>>t;
    int x;
    int arr[n];
    loop(i,1,n){
        cin>>x;
        mp[x]=i;
        arr[i]=x;
    }
    int counter = 1;
    for(int i=1;i<n;i++){
        if(mp[i]>mp[i+1]){
            counter++;
        }
    }
    // cout<<counter<<endl;
    while(t--){
        int aux = counter;
        int a,b;
        cin>>a>>b;
        int c1 = arr[a];
        int c2 = arr[b];
        cout<<c1<<" "<<c2<<endl;
        if(mp[c1]<mp[c2]){
            aux--;
        }
        else {aux++;}
    cout<<aux<<endl;
    }
}
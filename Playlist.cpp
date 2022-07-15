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
//     map<int,int>mp;
//     int n;
//     cin>>n;
//     set<int> s;
//     for(int i=0;i<n;i++){
//         int k ;
//         cin>>k;
//         s.insert(k);
//     }
// cout<<s.size()<<endl;
int n;
cin>>n;
        int i=0;
    	int a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	int l=0,r=0,ans=0;int j;
    	map<int,int>mp1;
    	map<int,int>mp2;
    	for(i=0;i<n;i++){
    		mp1[a[i]]++;
    		if(mp1[a[i]]==1){
    			mp2[a[i]]=i;
    			r=i;
    		}
    		else{
    			for(j=l;j<=mp2[a[i]];j++)
    			mp1[a[j]]--;
    			l=mp2[a[i]]+1;
    			r=i;
    			mp2[a[i]]=i;
    		}
    		ans=max(ans,r-l+1);
    	}
    	cout<<ans;
}
    
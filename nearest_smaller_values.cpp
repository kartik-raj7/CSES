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
#include <stack>
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
    int n ;
    cin>>n;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty()&&arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<s.top()+1<<" ";
        }
        s.push(i);
    }

}
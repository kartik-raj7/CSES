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
   int arr[n];
   set<int> s;
   loop(i,0,n){
        int x;
        cin>>x;
        s.insert(x);
   }
   cout<<s.size()<<endl;
}
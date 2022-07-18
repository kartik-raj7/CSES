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
int main() {
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first.first >> v[i].first.second;
		v[i].second = i; 
	}
	sort(v.begin(), v.end());
	int rooms = 0, last_room = 0;
	priority_queue<pair<int, int>> pq; 
	for (int i = 0; i < N; i++) {
		if (pq.empty()) {
			last_room++;
			pq.push(make_pair(-v[i].first.second, last_room));
			ans[v[i].second] = last_room;
		}
		else {
			pair<int, int> minimum = pq.top();
			if (-minimum.first < v[i].first.first) {
				pq.pop();
				pq.push(make_pair(-v[i].first.second, minimum.second));
				ans[v[i].second] = minimum.second;
			}

			else {
				last_room++;
				pq.push(make_pair(-v[i].first.second, last_room));
				ans[v[i].second] = last_room;
			}
		}

		rooms = max(rooms, int(pq.size()));
	}


	cout << rooms << "\n";
	for (int i = 0; i < N; i++) {
		cout << ans[i] << " ";
	}
}

// const int k = 2e5;
//    int ans[k];
// // bool compare(pair<int,int> l1,pair<int,int>l2){
// //      if(l1.first.first==l2.first.first){
// //         return l1.second<l2.second;
// //      }
// //      else return l1.first<l2.first;
// // }
// int main(){
//     // priority_queue <vector<pair<int,int>>, greater<int>> pq;
//     // priority_queue<vector<pair<ll,ll>>>pq;
//     int n;
//     cin>>n;
//     vector<pair<pair<int,int>,int>>v;
//     loop(i,0,n){
//         int x,y;
//         // cin>>x>>y;
//         // v.pb({{x,y},i});
//         cin>>v[i].first.first>>v[i].first.second;
//         v[i].second=i;
//     }
//     sort(v.begin(),v.end());
//     int rooms = 0;
 
//     int last_room = 0;
//     priority_queue<pair<int,int>>pq;
//     for(int i=0;i<n;i++){
//          if(pq.empty()){
//             last_room++;
//             pq.push(make_pair(-v[i].first.second,last_room));
//             ans[v[i].second]=last_room;
//          }
//          else{
//             pair<int,int> aux=pq.top();
//             if(-aux.first<v[i].first.first){
//                 pq.pop();
//                 pq.push(make_pair(-v[i].first.second,aux.second));
//                 ans[v[i].second] = aux.second;
//             }
//             else{
//                 last_room++;
//                 pq.push(make_pair(-v[i].first.second,last_room));
//                 ans[v[i].second] = last_room;
//             }
//          }
//          rooms  = max(rooms,int(pq.size()));
//     }
//     cout<<rooms<<"\n";
//     for(int i=0;i<n;i++){
//           cout<<ans[i]<<" ";
//     }
//     // for(auto i:v){
//     //     cout<<i.first.first<<" "<<i.first.second<<endl;
//     // }
// }

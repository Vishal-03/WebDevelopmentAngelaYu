#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;
/*==============================================================================================================================================================================*/
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt" , "w" , stderr);
      #define debug(x) cerr << #x << " " << x << endl;
      #else
      #define debug(x)
    #endif 
}	
	
int search_in_nearly_sorted_array(int a[] , int n , int key){
	int lo = 0;
	int hi = n-1;

	while(lo <= hi){
		int mid = hi + (lo-hi) /2;
		if(a[mid] == key) return mid;
		else if(mid-1 >= 0 && a[mid-1] == key) return mid-1;
		else if(mid+1 < n && a[mid+1] == key) return mid+1;

		else if(a[mid] < key) lo = mid+2;
		else if(a[mid] > key) hi = mid-2;
	}
	return -1;
}
 
int main() {
   init_code();
	
	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	int key; cin >> key;

	cout << search_in_nearly_sorted_array(a,n,key);

   return 0;
}

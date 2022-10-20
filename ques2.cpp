/* code by som #2nd year cse at IIIT - Pune */

/* ques2 ada lab 5*/
/* 13th october 2022*/

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define ull unsigned long long
#define Mod 1000000007 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32; /*   vector<int>   */
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ull unsigned long long
#define f(i,e) for(ll i = 0; i < e; i++)
#define fs(i,s,e) for(ll i = s; i < e; i++)
#define fr(i,s) for(ll i = s; i >= 0; i--)
#define frs(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl
#define mp make_pair
#define pb push_back
#define Y cout<<"YES"<<nl
#define N cout<<"NO"<<nl
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


/* count frequency using map ************************************

map<int,int> map;
int ctr = 1;
f(i,n-1){
    if(a[i]!=a[i+1]){map.insert({a[i],ctr}); ctr=1;}
    else ctr++;}

*****************************************************************/
 
void display_map(multimap<int,int> map){
       for(auto it = map.begin() ; it!=map.end() ;it++)cout<<it->fi<<" "<<it->se<<nl;
    }


/**************************************************************************/
// return ll don't use ull 
ll x_to_the_power_y(long long x, ull y, int p = Mod)
{

    // return long long 
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
  static int lod = 1;

/**************************************************************************/
void free_as_zero();
bool isPrime(int n);


/**************************************************************************/

// kadane's algorithm : to find maximum subarray sum
ll maxSubArraySum(int a[], int size){
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here <= 0)
            max_ending_here = 0;
    }
    return max_so_far;}

int main(){

   
    cout<<"ENTER NO. OF ELEMENTS IN ARRAY"<<nl;
int n;cin>>n;
  cout<<"ENTER ELEMENTS OF ARRAY"<<nl;
  int a[n];
  f(i,n)cin>>a[i];
  v32 ans;
  ll current_sum = 0;
  ll max_sum = INT_MIN;
  vector<pair<int,vector<int>>> vec;
  f(i,n){
    current_sum+=a[i];
   // vec.pb({current_sum ,ans});
    if(current_sum>max_sum){
        max_sum=current_sum;ans.pb(a[i]);vec.pb({max_sum,ans});

    }
    if(current_sum<0){
        current_sum = 0;
        ans.pb(a[i]);
        vec.pb({current_sum ,ans});
       ans.clear();
    }
  }
  //vec.pb({max_sum,ans});
  cout<<"MAXIMUM SUM OF SUBARRAY IS "<<max_sum<<nl;cout<<nl;
  cout<<"ARRAY IS :-"<<nl;
f(i,sz(vec)){
    if(vec[i].fi==max_sum){
        f(k,sz(vec[i].se)){cout<<vec[i].se[k]<<" ";}
    }
}cout<<nl;;
   cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs";
   return 0;
  

    }
  



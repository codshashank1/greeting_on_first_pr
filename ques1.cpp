#include<bits/stdc++.h>
using namespace std;
/* code by som #2nd year cse at IIIT - Pune */

/* ques1 ada lab 5*/
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
void Maxheapify(int arr[],int ,int);
void Maxheap (int arr1[],int start,int end){
    for(int i=(end)/2;i>=start;i--){
        Maxheapify(arr1,i,end);
    }
}
void Maxheapify(int arr2[],int f,int size){
    int max=f,l=f*2,r=f*2+1,t;
    if(l<=size && arr2[l]>arr2[max]) { max=l;}
    if(r<=size && arr2[r]>arr2[max]) {max=r;}
    if(f!=max){
        t=arr2[f];
        arr2[f]=arr2[max];
        arr2[max]=t;
        Maxheapify(arr2,max,size);
    }
}
void heapsort(int arr[],int k){
    int i,t;
    for(int i=k;i>=2;i--){
        t=arr[1];
        arr[1]=arr[i];
        arr[i]=t;
        Maxheapify(arr,1,i-1);
    }
}
void level_ordered(int arr[] ,int size){
          int flag=true;
          int i=2,k,m=1,count=0;
          cout<<"Level order traversal of array is : "<<endl;
          while(flag){
              cout<<"Level <----> "<<count<<" : ";
              for(k=m;k<i && k<=size;k++){
                cout<<arr[k]<<" ";
              }
              cout<<endl;
              m=k;
              count++;
              if(i>size) flag=false;
              i=i+pow(2,count);
             
          }
}
int main(){
    cout<<"ENTER NO. OF ELEMENTS IN ARRAY"<<endl;

    int n;
    cin>>n;
    int arr[n+1];
    cout<<"ENTER NO. OF ELEMENTS "<<endl;
    fs(i,1,n+1){
        cin>>arr[i];
    }
    Maxheap(arr,1,n);
    heapsort(arr,n);
    cout<<"Sorted Array using heapsort is : "<<endl;
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[n+1];
    for(int i=1;i<n+1;i++){
        brr[i]=arr[n+1-i];
    }
    level_ordered(brr,n);
     cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs";
    return 0;
}
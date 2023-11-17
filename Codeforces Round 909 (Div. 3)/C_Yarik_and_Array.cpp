#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//
 long long int ms(vector<ll>&arr, int l, int r) { 
  int mf = INT_MIN, mh = 0;   
   
    for (int i = l; i <= r; i++) {   
       mh = mh + arr[i];   
        if (mf < mh)   
            mf = mh;   
   
        if (mh< 0)   
            mh = 0;   
    }   
  return mf; 
} 

void solve(){ 
    
   ll n;cin>>n; 
   vector<ll>v(n); 
   for(int i=0; i<n; i++)
   {cin>>v[i]; 
   }
   int pre = 0; 
    ll ans = INT_MIN; 
    for(int i=1; i<n; i++){ 
        if((abs(v[i])%2) == (abs(v[i-1])%2)){ 
            ans = max(ans, ms(v,pre,i-1)); 
            pre = i; 
        } 
    } 
    ans = max(ans, ms(v,pre,n-1)); 
    cout<<ans<<endl;

}
int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();

    }
    
    
    return 0;
}
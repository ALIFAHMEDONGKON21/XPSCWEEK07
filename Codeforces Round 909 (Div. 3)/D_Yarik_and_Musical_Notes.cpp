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
void solve()
{
   ll n;
   cin>>n; 
   vl v(n); 
   for(int i=0; i<n; i++)cin>>v[i]; 
   map<ll,ll>p1,p2; 
   ll ans = 0; 
   for(int i=0; i<n; i++)
   { 
        int c1 = 0; 
        int e1 = 0; 
        ll c2 = v[i]; 
        while(c2>0){ 
            if(c2%2 == 1){ 
                c1++; 
            } 
            e1++; 
            c2 = c2>>1; 
        } 
 
        if(c1 == 1){ 
            ans += p1[(v[i] - e1)]; 
            p1[v[i] - e1]++; 
        } 
        else{ 
            ans += p2[v[i]]; 
            p2[v[i]]++; 
        } 
   } 
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
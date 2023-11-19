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

void solved(){
    ll n , x ;
    cin>>n>>x;


    string s ;
    cin>>s ; 


    int a = 0 , b = 0 ; 

    for(auto it : s){
        if(it == 'A') a++; 
        if(it == 'B') b++; 
    }
    int ans = 0 ; 

    if(b == x){
        cout<<ans<<endl; 
        return ; 
    }
    if(b > x){
        int difrent = b - x; 
        int i = 0 ; 
        while(i<n){
            if(s[i] == 'B') difrent--; 
            if(difrent == 0){
                cout<<1<<endl; 
                cout<<i+1<<" "<<'A'<<endl; 
                return ; 
            }
            i++; 
        }
    }
    int difrent = x - b ; 
    int i = 0 ; 

    while(i< n){
        if(s[i] == 'A') difrent--; 
        if(difrent == 0){
            cout<<1<<endl;
            cout<<i+1<<" B"<<endl; 
            return ; 
        }
        i++; 
    }
    

}

int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solved();
    }
    
    
    return 0;
}
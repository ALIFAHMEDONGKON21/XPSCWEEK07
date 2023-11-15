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

void sloved()
{
    multiset<ll> v;

    ll n,k,l;
    cin>>n>>k>>l;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;

        if(b==1)v.insert(a);


    }
    int sum=0;
    if(v.size() ==0 || k>v.size())
    {
        cout<<"-1"<<endl;
        return;
    }
    int i=0;

    for(auto x: v)
    {
        if(i>v.size()-k)
        {
            sum+=x;
            i++;
        }
    }
    if(sum == 0)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<sum<<endl;
    return;
}

int main(){
    
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        sloved();
    
    }
    
    
    return 0;
}
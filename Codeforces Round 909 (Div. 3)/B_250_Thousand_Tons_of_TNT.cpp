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




int main(){
    
   long long  int t,n, sum, mnn, mxx, result;
    cin>>t;
    while (t--)
    {
        cin>>n;
        sum=0;
        vl v(n+1), c;
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            v[i]=sum;
        }
        for (int i = 1; i*i <= n; i++)
        {
            if (n%i==0) 
            {
                c.push_back(i);
                c.push_back(n/i);
            }
        }
        result=0;
        for (auto &&it : c)
        {
            mnn=1e18, mxx=0;
            for (int i = it; i <= n; i+=it)
            {
                mnn=min(mnn,v[i]-v[i-it]);
                mxx=max(mxx,v[i]-v[i-it]);
            }
            result=max(result,mxx-mnn);
        }
        cout<<result<<endl;
    }
    return 0;
}
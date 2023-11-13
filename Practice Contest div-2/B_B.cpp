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
int calvalue(char a,char b)
{
    int diff=abs(a-b);


     return min(diff,10-diff);
}


int main(){
    
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n,m;
        cin>>n>>m;

        string s,k;
        cin>>s>>k;

        int ans=INT_MIN;

        for(int i=0; i<=n-m; i++)
        {
            int diff=0;
            for(int j=0; j<m; j++)
            {
                diff+=calvalue(s[i+j],k[j]);
            }
            ans=max(ans,diff);
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}
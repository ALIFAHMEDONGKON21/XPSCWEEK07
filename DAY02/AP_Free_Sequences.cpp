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
    
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool flag=true;
        for(int i=0; i<n-2;i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                   if (a[j]-a[i]==a[k]-a[j])
                   {
                    flag=false;
                    break;
                   }
                }
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
    
    return 0;
}
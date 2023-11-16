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
    cin >> t;

   while (t--)
   
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int s2 = 0;
        int  b = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                s2++;
            } else {
                b = b + (s[i] - '0');
            }
        }

        if (s[0] == '?') {
            cout << 1;
            s2--;

            while (s2--) {
                cout << 0;
            }

            cout << endl;
        } else {
            if (s2 > 0) {
                b = b % 9;

                if (b == 0) {
                    s2--;

                    while (s2--) {
                        cout << 1;
                    }

                    cout << 2 << endl;

                } else {
                    while (s2--) {
                        cout << 1;
                    }

                    cout << endl;
                }
            } else {
                if (b % 9) {
                    cout << 0 << endl;
                } else {
                    cout << 1 << endl;
                }
            }
        }
    }
    
    return 0;
}
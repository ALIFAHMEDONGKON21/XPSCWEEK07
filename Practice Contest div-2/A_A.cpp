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


int calculateMaxScore(vector<int> &dice) {
    sort(dice.rbegin(), dice.rend());
    int score = 0;
    for (int i = 0; i < 3; i++) {
        score = score * 10 + dice[i];
    }
    return score;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int> aliceDice(3), bobDice(3);

        for (int i = 0; i < 3; i++) {
            cin >> aliceDice[i];
        }

        for (int i = 0; i < 3; i++) {
            cin >> bobDice[i];
        }

        int aliceScore = calculateMaxScore(aliceDice);
        int bobScore = calculateMaxScore(bobDice);

        if (aliceScore > bobScore) {
            cout << "Alice" << endl;
        } else if (aliceScore < bobScore) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}

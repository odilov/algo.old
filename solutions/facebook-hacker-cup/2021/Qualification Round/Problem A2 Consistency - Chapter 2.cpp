#include <bits/stdc++.h>

#define in freopen( "in.txt", "r", stdin )
#define out freopen( "out.txt", "w", stdout )
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR( i, l, r ) for( int i = l; i < r; ++i )

using namespace std;

using ll = long long;
using ld = long double;

typedef vector <int> vi;
typedef vector <char> vc;
typedef vector <long long> vll;
typedef pair <int, int> pi;

void WFI( vector<vi> &matrix, int nV ){
    for(int k = 0; k < nV; ++k){
        for(int i = 0; i < nV; ++i){
            for(int j = 0; j < nV; ++j){
                if( matrix[i][k] + matrix[k][j] < matrix[i][j]
                    && matrix[i][k] != INT_MAX
                    && matrix[k][j] != INT_MAX )
                matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
}

void ProcessCase(){
    string s;
    cin >> s;

    int k;
    cin >> k;

    unordered_map<char, vc> mp;
    unordered_set<char> st;

    for(int i = 0; i < k; ++i){
        string _s;
        cin >> _s;
        st.insert( _s[0] ), st.insert( _s[1] );
        mp[_s[0]].PB( _s[1] );
    }

    for(int i = 0; i < s.length(); ++i){
        st.insert( s[i] );
    }

    unordered_map <char, int> N;
    int i = 0;
    for(auto it = st.begin(); it != st.end(); ++it){
        N[*it] = i++;
    }

    vector< vi > C( st.size(), vi( st.size(), INT_MAX ) );

    for(int i = 0; i < st.size(); ++i){
        C[i][i] = 0;
    }

    for(auto it = mp.begin(); it != mp.end(); ++it){
        for( auto j : it->S){
            C[N[it->F]][N[j]] = 1;
        }
    }

    WFI( C, st.size() );

    int ans = INT_MAX;

    for(auto it = st.begin(); it != st.end(); ++it){

        int cnt = 0;
        bool flag = false;

        for(int i = 0; i < s.length(); ++i){
            int d = C[N[s[i]]][N[*it]];
            if( d == INT_MAX ){
                flag = true;
                break;
            }
            cnt += d;
        }

        if( flag )
            continue;

        ans = min( ans, cnt );
    }

    cout << ( ans == INT_MAX ? -1 : ans ) << '\n';

}

int main(){
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //in; out;
    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i ){
        printf( "Case #%d: ", i );
        ProcessCase();
    }

    return 0;
}




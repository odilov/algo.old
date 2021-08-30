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
typedef vector <long long> vll;
typedef pair <int, int> pi;

bool isVowel( char c ){
    return ( 0x208222 >> ( c & 0x1f ) ) & 1;
}

void ProcessCase(){
    string s;
    cin >> s;

    int cnt_vowels = 0, cnt_consonants = 0;

    unordered_map <char, int> cnt;

    for(int i = 0; i < s.length(); ++i){
        cnt[s[i]]++;
        // check vowel
        if( isVowel(s[i]) )
            ++cnt_vowels;
        else
            ++cnt_consonants;
    }

    vi vowels, consonants;

    for(auto it = cnt.begin(); it != cnt.end(); ++it){
        if( isVowel( it->F ) )
            vowels.PB( it->S );
        else
            consonants.PB( it->S );

        // cout << it->F << " => " << it->S << endl;
    }

    int ans1 = 0, ans2 = 0;

    sort( vowels.rbegin(), vowels.rend() );
    sort( consonants.rbegin(), consonants.rend() );

    // find ans1
    for(int i = 1; i < vowels.size(); ++i){
        ans1 += 2 * vowels[i];
    }

    ans1 += cnt_consonants;

    // find ans2

    for(int i = 1; i < consonants.size(); ++i){
        ans2 += 2 * consonants[i];
    }

    ans2 += cnt_vowels;

    cout << min( ans1, ans2 ) << '\n';
}

int main(){
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    in; out;
    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i ){
        printf( "Case #%d: ", i );
        ProcessCase();
    }

    return 0;
}

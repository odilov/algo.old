//
//  main.cpp
//  contest
//
//  Created by Marshall on 21.06.21.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int N = 1000;

string convertToString(char* a, int size){
    string s = a;
    return s;
}

int main(){

//    freopen("/Users/marshall/Desktop/contest/contest/tests/1.txt","r",stdin);
    //freopen("/Users/marshall/Desktop/contest/contest/tests/1_output.txt","w",stdout);
    
    int t;

    cin >> t;

    while( t --> 0){
        int n;
        int l;
        cin >> n >> l;
        char data[N][N];
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s;
            for(int j = 0; j < l; ++j){
                data[i][j] = s[j];
            }
        }

//        for(int i = 0; i < l; ++i){
//            for(int j = 0; j < n; ++j){
//                cout << data[j][i] << ' ';
//            }
//            cout << '\n';
//        }
        vector <string> states;
        
        for(int i = 0; i < l; ++i){
            char _col[N];
            for(int j = 0; j < n; ++j){
                _col[j] = data[j][i];
            }
            string col = convertToString(_col, n);
            states.push_back( col );
        }
        
        for(int i = 0; i < l; ++i){
            cout << states[i];
        }
        
        map <string, int> mp;
        
        for(int i = 0; i < l; ++i)
            mp[states[i]] = 0;
        
        vector <int> res;
        
        int ans = 0;
        int pos = 1;
        
        for(int i = 0; i < l; ++i){
            if( !mp[states[i]] ){
                //cout << i  + 1 << ' ';
                res.push_back( pos );
                ans = max( ans, pos );
                pos++;
                mp[states[i]] = pos;
            } else{
                for(int j = 0; j < i; ++j){
                    if( states[j] == states[i] ){
//                        cout << j + 1 << ' ';
                        res.push_back( mp[states[j]] );
                        ans = max( ans,mp[states[j]] );
                    }
                        
                    
                }
            }
//            cout << states[i] << ' ';
        }
        
        cout << ans << '\n';
        
        for(int i = 0; i < res.size(); ++i){
            cout << res[i] << ' ';
        }
    
        cout << '\n';
    }

    return 0;
}

#include <iostream>
#include <list>

using namespace std;

const int N = 256;

class trieNode{
    private: trieNode *suff[N];
    private: list <int> *suffInd;

    public: trieNode(){
        suffInd = new list <int>;
        for(int i = 0; i < N; ++i){
            suff[i] = nullptr;
        }
    } 

    void addSuffix( const string &suffix, int ind ){
        suffInd->push_back( ind ); // store index
        if( suffix.length() > 0 ){
            char cInd = suffix[0];
            if( suff[cInd] == nullptr )
                suff[cInd] = new trieNode();
            suff[cInd]->addSuffix( suffix.substr( 1 ) , ind + 1 );
        }
    }
    
    list <int> *search( const string &pattern ){
        if( pattern.length() == 0 ){
            return suffInd;
        }
        return ( suff[pattern[0]] ? suff[pattern[0]]->search( pattern.substr( 1 ) ) : nullptr );
    }
};

class suffixTrie{
    // store all suffixes
    trieNode root;
    public: suffixTrie( const string &text ){
        for(int i = 0; i < text.length(); ++i){
            root.addSuffix( text.substr( i ) , i );
        }
            
    }
    void search( const string &req, int *ans, int *ind ){
        list <int> *res = root.search( req );
        if( res ){
            list <int>::iterator it;
            int len = req.length();
            for( it = res->begin(); it != res->end(); ++it ){
                ans[++(*ind)] = *it - len;
            }
        }
    }
};

int main(){
    string text = "panamabananas";
    string pattern = "ana";

    int ans[ text.length() ];
    int ind = -1;

    suffixTrie sT( text );
    sT.search( pattern, ans, &ind );

    for(int i = 0; i <= ind; ++i){
        cout << "pattern found at position " << ans[i] << '\n';
    }

    return 0;
}
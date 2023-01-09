#include <iostream>

using namespace std;

const int N = 26;

struct TrieNode{
    TrieNode *children[N];
    bool isLeaf; // -> is true if node is end of word
};

// returns new trie node
TrieNode *createNode(){
    TrieNode *newNode = new TrieNode;
    
    newNode->isLeaf = false;
    
    for(int i = 0; i < N; ++i)
        newNode->children[i] = nullptr;
    
    return newNode;
}

// inserts pattern ( key ) into trie
void insert( TrieNode *root, string pattern ){
    TrieNode *currNode = root;
    
    for(int i = 0; i < pattern.length(); ++i){
        int ind = pattern[i] - 'A';
        if( !currNode->children[ind] )
            currNode->children[ind] = createNode();
        currNode = currNode->children[ind];
    }
    
    currNode->isLeaf = true;
}

int main(int argc, const char * argv[]){
    
    int cnt;
    
    cin >> cnt;
    
    TrieNode *root = createNode();
    
    while( cnt --> 0 ){
        string pattern;
        cin >> pattern;
        insert( root, pattern );
    }
    
    return 0;
}

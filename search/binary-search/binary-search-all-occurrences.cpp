#include <bits/stdc++.h>

using namespace std;

int finEndInd( vector<int> &nums, int target );
int findStartInd( vector<int> &nums, int target );

pair<int, int> test(){
    vector<int> nums = { 5, 7, 7, 8, 8, 10 };
    int target = 8;
    int eInd = finEndInd( nums, target );
    return (eInd == -1) ? pair<int, int> { -1 , -1 } : pair<int, int> { findStartInd( nums, target ) , eInd };
}

int main(){
    pair<int, int> ans = test();
    cout << ans.first << ' ' << ans.second;
    return 0;
}

int finEndInd( vector<int> &nums, int target ){
    int l = 0, r = nums.size() - 1;
    while( l < r ){
        int m = (l + (r - l) / 2) + 1;
        if( nums[m] == target )
            l = m;
        else if( nums[m] < target )
            l = m + 1;
        else
            r = m - 1;
    }
    return l >= nums.size() || nums[l] != target ? -1 : l;
}

int findStartInd (vector<int> &nums, int target ){
    int l = 0, r = nums.size() - 1;
    while( l < r ){
        int m = l + (r - l) / 2;
        if( nums[m] == target )
            r = m;
        else if( nums[m] < target )
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}

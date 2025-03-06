class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int>mp;
        int n= grid[0].size();

        for(int i = 0; i < n; i++) {//0~m
            for(int j = 0; j < n; j++) {//0~n
                mp[grid[i][j]]++;//1~m*n
            }
        }
        
        int a = 0;
        int b = 0;
        for(int i = 1; i <= n*n; i++) {
            if(mp.find(i) != mp.end()) {
                if(mp[i] == 2)
                    a = i;
            } else {
                b = i;
            }
        }

        return {a, b};
    }
};
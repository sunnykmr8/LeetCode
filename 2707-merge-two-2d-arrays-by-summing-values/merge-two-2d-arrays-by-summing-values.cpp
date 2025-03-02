class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        int m=nums1.size();
        int n=nums2.size();

        for(int i=0;i<m;i++){
            int id=nums1[i][0];
            int val=nums1[i][1];

            mp[id]+=val;
        }
        for(int i=0;i<n;i++){
            int id=nums2[i][0];
            int val=nums2[i][1];

            mp[id]+=val;
        }

        for(auto &i : mp){
            int key=i.first;
            int data=i.second;
            ans.push_back({key,data});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    bool prime(int n){
        if (n == 2 || n == 3) return true;
        if(n%2==0 || n==1 || n%3==0){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
    }
    return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans(2,-1);
        vector<int>collectP;
    for(int i=left;i<=right;i++){
        if(prime(i)){
        collectP.push_back(i);
        }
    }
    vector<int> diff;
    if(collectP.size()<2){
        return ans;
    }
    int minDiff = INT_MAX;
        for (int i = 1; i < collectP.size(); i++) {
            int diff = collectP[i] - collectP[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                ans[0] = collectP[i - 1];
                ans[1] = collectP[i];
            }
        }
        return ans;
    }
};
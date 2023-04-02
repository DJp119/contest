class Solution {
public:
    int miceAndCheese(vector<int>& r1, vector<int>& r2, int k) {
        priority_queue<int>pq;
        int n = r1.size(),ans=0;
        for(auto x: r2) ans+=x;
        for(int i = 0 ; i<n;i++){
            pq.push(r1[i]-r2[i]);
        }
        int curr = ans;
        for(int i = 0 ; i<k;i++){
            auto x = pq.top();
            pq.pop();
            curr+=x;
        }
        return curr;
    }
};

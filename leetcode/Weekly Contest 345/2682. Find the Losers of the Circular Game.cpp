
class Solution{
  public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> vis(n,0);
        int i = 0 , j = 1;
        while(j<=n){
            if(vis[i]==1) break;
            vis[i]=1;
            i = (i + j*k)%n;   // for cicular 
            j++; 
        }
        vector<int>ans;
        for(int i = 0 ; i<n;i++){
            if(vis[i]==0) ans.push_back(i+1);
        }
        return ans;
    }
};



// set solution
    // vector<int> circularGameLosers(int n, int k)
    // {
    //     unordered_set<int> s;
        
    //     int curr = 1, i = 1;
        
    //     while (s.find(curr) == s.end())//stopping condition
    //     {
    //         s.insert(curr);//mask as visited
    //         curr = (curr + i *k ) % n;
    //         if (curr == 0) curr = n;
    //         i++;
    //     }
    //     vector<int> ans;
    //     for (int i = 1; i <= n; i++)//check which are not visited
    //     {
    //         if (s.find(i) == s.end())
    //             ans.push_back(i);
    //     }
    //     return ans;
    // }

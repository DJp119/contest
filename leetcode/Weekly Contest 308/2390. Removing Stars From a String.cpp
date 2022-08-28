class Solution {
public:
    string removeStars(string s) {
        // we can just use string to simulate the operation
        string ans;
        // iterate each character
        for (auto& c: s) {
            // if it is *, then remove the last character
            if (c == '*') ans.pop_back();
            // otherwise add it to ans
            else ans.push_back(c);
        }
        return ans;
    }
};

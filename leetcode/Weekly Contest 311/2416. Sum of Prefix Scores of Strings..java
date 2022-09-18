class Solution {
    Node root = new Node();       // trei roots
    class Node{
        int score = 0 ;
        Node[] child  = new Node[26];
    }
    public int[] sumPrefixScores(String[] words){
        for(String word : words ) add(word);   // make trie
        int[] res = new int[words.length];
        for(int  i = 0 ; i<res.length;i++){
            res[i] = calc(words[i]);   // build scores
        }
        return res;
        
    }
    void add(String str){
        Node temp = root;
        for(char ch : str.toCharArray()){
            if(temp.child[ch-'a']==null)              temp.child[ch-'a'] = new Node();
            temp.child[ch-'a'].score++;
            temp = temp.child[ch-'a'];
        }
    }
    int calc(String str){
        int ans = 0 ;
        Node temp = root ;
        for(char ch : str.toCharArray()){
            ans += temp.child[ch-'a'].score;
            temp = temp.child[ch-'a'];
        }
        return ans;
        
    }  
}

class trienode
{
public:
    char data;
    trienode *children[26];
    bool isterminal;
    int ccn;
    trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        isterminal = false;
        ccn=0;
    }
};
class trie
{
public:
    trienode *root;
    trie()
    {
        root = new trienode('\0');
    }
    void inserut(trienode *root, string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isterminal = 1;
            return;
        }
        int index = word[0] - 'a';
        trienode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
            root->ccn++;
        }
        return inserut(child, word.substr(1));
    }
    void insertw(string word)
    {
        return inserut(root, word);
    }
    void check(string first,string &ans){
       for(int i=0;i<first.size();i++){
           char ch=first[i];
           if(root->ccn==1){
               ans.push_back(ch);
               int index= first[i]-'a';
               root=root->children[index];
           }
           else{
               break;
           }
           
           if(root->isterminal){
               break;
           }
       }
      
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        trie *t= new trie();
       for(int i=0;i<strs.size();i++){
           if(strs[i].empty()){
               return "";
           }
            t->insertw(strs[i]);
       }
       string first= strs[0];
       string ans="";
       t->check(first,ans);
       return ans;
       }
};
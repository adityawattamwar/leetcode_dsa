class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        int window = n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=n-window; j++)
            {
                String temp = s.substring(j, j+window);
                temp = checkPalindrome(temp);
                if(!temp.isEmpty())
                {
                    return temp;
                }
            }
            window--;
        }
        return "";
    }

    public String checkPalindrome(String str)
    {
        for(int i=0, j=str.length()-1; i<str.length() && j>=0; i++, j--)
        {
            if(str.charAt(i)!=str.charAt(j))
            {
                return "";
            }
        }
        return str;
    }
}
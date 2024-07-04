import java.util.Arrays;

public class Longest_Common_String {

class Solution 
{
    public String longestCommonPrefix(String[] strs) 
    {
        Arrays.sort(strs);
        int l1 = strs.length;
        String s1 = new String();
        String s2 = new String();
        s1 = strs[0];
        s2 = strs[l1-1];

        int idx = 0;

        while(idx < s1.length() && idx < s2.length()){
            if(s1.charAt(idx) == s2.charAt(idx)){
                idx++;
            }
            else{
                break;
            }
        }
        return s1.substring(0, idx);
    }
}

    void main()
    {
        Solution sol = new Solution();
        String[] strs = new String[] {"ab", "a"};
        System.out.println(sol.longestCommonPrefix(strs));
    }
}
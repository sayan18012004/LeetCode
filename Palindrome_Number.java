/**
 * Palindrome_Number
 */
public class Palindrome_Number {
    class Solution {
        public boolean isPalindrome(int x) {
            if(x < 0){
                return false;
            }
            int rev = 0, checker = x;
            while(checker > 0){
                rev = rev * 10;
                rev = rev + checker % 10;
                checker = checker / 10;
            }
            if(rev == x){
                return true;
            }
            else{
                return false;
            }
        }
        
    }
    void main(){
        Solution sol = new Solution();
        int x = 121;
        System.out.println(sol.isPalindrome(x));
        
    }
    
    
}
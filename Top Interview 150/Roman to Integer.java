class Solution {
    public static int romanToInt(String s) {
        
        int i;
        int sum = 0;
        for(i = s.length() - 1; i >= 0; i--){
            if(i >= 0 && i < s.length() && s.charAt(i) == 'I'){
                sum += 1; continue;
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'V'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'I'){
                    sum += 4; i--; continue;
                }
                else{
                    sum += 5; continue;
                }
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'X'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'I'){
                    sum += 9; i--; continue;
                }
                else{
                    sum += 10; continue;
                }
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'L'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'X'){
                    sum += 40; i--; continue;
                }
                else{
                    sum += 50; continue;
                }
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'C'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'X'){
                    sum += 90; i--; continue;
                }
                else{
                    sum += 100; continue;
                }
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'D'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'C'){
                    sum += 400; i--; continue;
                }
                else{
                    sum += 500; continue;
                }
            }
            if(i >= 0 && i < s.length() && s.charAt(i) == 'M'){
                if(i-1 >= 0 && i-1 < s.length() && s.charAt(i-1) == 'C'){
                    sum += 900; i--; continue;
                }
                else{
                    sum += 1000; continue;
                }
            }
        }

        return sum;
    }

    public static void main(String[] args) {
        String a = "MCMXCIV";
        System.out.println(romanToInt(a));
    }
}
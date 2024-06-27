class lc_twoSum{
    public int[] twoSums(int[] nums, int target) {
        int[] arr = new int[2];

        for(int i = 0; i < nums.length; i++){

            for(int j = i+1; j < nums.length; j++){
                if(target == nums[i] + nums[j]){
                    arr[0] = i;
                    arr[1] = j;
                    return arr;
                }
            }
        }
        return null;
    }
    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;

        lc_twoSum obj = new lc_twoSum();
        int[] result = obj.twoSums(nums, target);

        for(int i = 0; i < result.length; i++){
            System.out.println(result[i]);
        }
    }
}
package br.com.github.JBreno.destrutores.lib;


class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0; i < nums.length; i++) {
            if((nums[i] + nums[i+1]) == target) {
                System.out.printf("[%d,%d]", i, i+1);
                return new int[] {i, i+1};
            }
        }
        return new int[]{-1, -1};
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] result = solution.twoSum(new int[]{3,3}, 6);

    }
}

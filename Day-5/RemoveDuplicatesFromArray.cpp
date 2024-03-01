class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_map<int, int> HashMap;

       int answer= 0;
       for (int num : nums) {
        // Updating  the count of the current number in the map
            HashMap[num]++;
        // Check if the count of the current number is less than or equal to 2
           if (HashMap[num] <= 2) {
            // If so, update the element at the current index
              nums[answer++] = num;
           }
       }
      //return the answer
       return answer;
    }
};
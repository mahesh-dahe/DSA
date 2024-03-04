class Solution {
public:
    vector<int> twoSum(vector<int>& nnumbers, int target) {
        int left_index=0;
        int right_index=n.size()-1;
        while(l<r){
            int sum=numbers[left_index]+numbers[right_index];
            if(sum==target)
                return {left_index+1,right_index+1};
            else if(sum>target){
                right_index--;
            }
            else{
                left_index++;
            }
        }
        return {1,1,};
    }
};
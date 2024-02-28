class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;//declaring Hashmap to set occurence of elements
    
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(map.find(ans)!=map.end()){//checking whether ans is presen in hashmap
                return {map[ans],i};
            }
            map[nums[i]]=i;
         }
        return {-1,-1};
    }
};
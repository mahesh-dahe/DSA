class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        
        return Tree(nums, 0, nums.length - 1);

    }
    private TreeNode Tree(int[] a, int l, int r) {

      if (l > r) 
         return null;     

      int m =l+(r-l)
      TreeNode root = new TreeNode(a[m]);     
      root.left = Tree(a, l, m - 1);
      root.right = Tree(a, m + 1, r);    
      return root;
    }
}
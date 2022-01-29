/*
Given a sorted array. Convert it into a Height balanced Binary Search Tree (BST). Find the preorder traversal of height balanced BST.
If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.
Height balanced BST means a binary tree in which the depth of the left subtree and the right subtree of every node never differ by more than 1.
*/

class Solution {
public:
    void preorder(int i,int j,vector<int> nums,vector<int> &out)
    {
        if(i<=j)
        {
            int mid=(i+j)/2;
            out.push_back(nums[mid]);
            preorder(i,mid-1,nums,out);
            preorder(mid+1,j,nums,out);
        }
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        std::vector<int> out;
        int i=0,j=nums.size()-1;
        preorder(i,j,nums,out);
        return out;
    }
};

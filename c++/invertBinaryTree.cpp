//https://leetcode.com/problems/invert-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <stack>

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        
        stack<TreeNode*> stack;        
        stack.push(root);
        
        while(!stack.empty()){
        
            TreeNode* currentNode = stack.top();
            stack.pop();
            
            //swap childs
            TreeNode* aux  = currentNode->left;
            currentNode->left = currentNode->right;
            currentNode->right = aux;                
            
            if(currentNode->left != NULL){
                stack.push(currentNode->left);    
            }
            
            if(currentNode->right != NULL){
                stack.push(currentNode->right);
            }
        }
        return root;
    }
};
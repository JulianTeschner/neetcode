#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *invertTree(TreeNode *root)
{
    if (!root)
    {
        return nullptr;
    }
    if (!root->left && !root->right)
    {
        return root;
    }
    else
    {
        std::swap(root->left, root->right);
    }
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

int main()
{
    printf("%d\n", 1);
}
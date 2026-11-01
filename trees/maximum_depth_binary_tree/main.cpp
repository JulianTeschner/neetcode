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

int maxDepth(TreeNode *root)
{
    int i = 1;
    int l = 0;
    int r = 0;
    if (!root)
    {
        return 0;
    }
    l = maxDepth(root->left);
    r = maxDepth(root->right);
    i+=std::max(l, r);
}

int main()
{
    printf("%d\n", 1);
}
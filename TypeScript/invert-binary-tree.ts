/**
* https://leetcode.com/problems/invert-binary-tree/
* Runtime: 70 ms, faster than 91.58% of TypeScript online submissions for Invert Binary Tree.
* Memory Usage: 44.3 MB, less than 87.22% of TypeScript online submissions for Invert Binary Tree.
*/



/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

 function invertTree(root: TreeNode | null): TreeNode | null {
    const q: Array<TreeNode | null> = new Array();
    q.push(root);
    while (q.length !== 0) {
        const node = q.pop();
        if (node !== null) {
            const left = node.left;
            node.left = node.right;
            node.right = left;
            if (node.left ||node. right) {
                q.push(node.left, node.right);
            }
        }
    }
    return root;
}

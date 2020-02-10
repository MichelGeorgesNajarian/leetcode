/*
* https://leetcode.com/problems/spiral-matrix-ii/
* Runtime: 0 ms, faster than 100.00% of Java online submissions for Spiral Matrix II.
* Memory Usage: 37.3 MB, less than 8.33% of Java online submissions for Spiral Matrix II.
*/

class Solution {
    public int[][] generateMatrix(int n) {
        if (n < 0) {
            int[][] ret = new int[0][0];
            return ret;
        }
        int[][] ret = new int[n][n];
        
        int row = n; //max num of rows
        int col = n; //max num of columns
        
        int ver = 0; //vertical pointer
        int hor = 0; //horizontal pointer
        
        int inserted = 1;
        
        while (ver < row | hor < col) {
            //doing top bar
            for (int i = hor; i < col; i++) {
                ret[ver][i] = inserted;
                inserted++;
            }
            ver++;
            //doing right
            for (int i = ver; i < row; i++) {
                ret[i][col-1] = inserted;
                inserted++;
            }
            col--;
            
            //doing bottom bar
            for (int i = col - 1; i >= hor; i--) {
                ret[row-1][i] = inserted;
                inserted++;
            }
            row--;
            
            //doing right bar
            for (int i = row - 1; i >= ver; i--) {
                ret[i][hor] = inserted;
                inserted++;
            }
            hor++;
        }
        return ret;
    }
}

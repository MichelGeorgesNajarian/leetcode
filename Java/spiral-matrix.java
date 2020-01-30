/*
 *
 * https://leetcode.com/problems/spiral-matrix/
 * Runtime: 0 ms, faster than 100.00% of Java online submissions for Spiral Matrix.
 * Memory Usage: 39.2 MB, less than 5.21% of Java online submissions for Spiral Matrix.
 *
 */

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
    
        List<Integer> ret = new ArrayList<>();
        if (matrix.length == 0) {
            return ret;
        }
        int row = matrix.length;
        int col = matrix[0].length;
        
        int hor = 0;
        int vert = 0;
        while (hor < row && vert < col) {
            //push top bar
            for (int i = vert; i < col; i++) {
                ret.add(matrix[hor][i]);
            }
            hor++;// increment the horizontal placement
            
            //push right bar
            for (int i = hor; i < row; i++) {
                ret.add(matrix[i][col-1]);
            }
            col--;
            
            if (row == hor) {
                break;
            }
            //print bottom bar
            for (int i = col-1; i >= vert; i--) {
                ret.add(matrix[row-1][i]);
            }
            row--;
            
            if (col == vert) {
                break;
            }
            //print left bar
            for (int i = row-1; i >= hor; i--) {
                ret.add(matrix[i][vert]);
            }
            vert++;
        }
        return ret;
    }
}

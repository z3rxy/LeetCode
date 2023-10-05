class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        if(mat.length * mat[0].length != r * c) return mat;

        int[][] answer = new int[r][c];
        int indexX = 0, indexY = 0;

        for(int i = 0; i < mat.length; i++){
            for(int j = 0; j < mat[i].length; j++){
                if(indexX == c){
                    indexY++;
                    indexX = 0;
                }
                answer[indexY][indexX] = mat[i][j];
                indexX++;
            }
        }
        return answer;
    }
}
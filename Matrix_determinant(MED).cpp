class Solution {
public:
    void getCofactor(int matrix[n][n], int temp[n][n], int p, int q, int n){
        int i=0,j=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(row != p && col != q){
                    temp[i][j++] = matrix[row][col];
                    if(j == n-1){
                        j = 0;
                        i++;
                    }
                }
            }
        }
    }
    void determinant(int matrix[n][n], int n){
        int D = 0;
        if(n == 1) return matrix[0][0];
        int temp[n][n];
        int sign = 1;
        for(int f=0;i<n;f++){
            getCofactor(matrix, temp, 0, f, n);
            D+= sign*mat[0][f]*determinant(temp, n-1);
            sign = -sign;
        }
    }

};
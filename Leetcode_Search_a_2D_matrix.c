bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i,j,f=0;
    for (i=0;i<matrixSize;i++){
        for (j=0;j<*matrixColSize;j++){
            if (matrix[i][j]>target){
                break;
            }
            else {
                if (matrix[i][j]==target){
                    f=1;
                    return true;
                }
            }
        }
    }
    return false;
}

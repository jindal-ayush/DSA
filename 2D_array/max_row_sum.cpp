#include <iostream>
#include<climits>
using namespace std;

int getMaxSum(int matrix[][3] , int rows, int cols){
        int maxRowSum = INT_MIN;
          for(int i =0; i<rows; i++){
              int rowSum = 0;
            for(int j=0; j<cols; j++){
                rowSum += matrix[i][j];
            }
            maxRowSum = max(maxRowSum,rowSum );
        }
        return maxRowSum;
}       
int main() {
  int matrix[3][3]  ={{1,2,3}, {4,5,6}, {7,8,9}};
  int rows= 3;
  int cols = 3;
  int target = 8;

cout<<getMaxSum(matrix, rows, cols);
    return 0;
}
    
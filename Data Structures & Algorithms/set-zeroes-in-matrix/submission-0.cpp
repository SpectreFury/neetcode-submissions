class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        vector<vector<int>> mark = matrix;

        for(int r = 0;  r< ROWS; r++) {
            for(int c = 0; c < COLS; c++) {
                if(matrix[r][c] == 0) {
                    for(int i = 0; i < COLS; i++) {
                        mark[r][i] = 0;
                    }

                    for(int i = 0; i < ROWS; i++) {
                        mark[i][c] = 0;
                    }
                }
            }
        }

        for(int r = 0; r < ROWS; r++) {
            for(int c = 0; c < COLS; c++) {
                matrix[r][c] = mark[r][c];
            }
        }
    }
};

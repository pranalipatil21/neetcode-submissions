class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>pos;
        for(int i=0;i<matrix.size();i++){
            for(int j=0; j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    pos.push_back({i,j});
                }
            }
        }
        for(int k=0; k<pos.size();k++){
            int row = pos[k][0];
            int col = pos[k][1];

            //row zero
        for(int j=0;j<matrix[0].size();j++){
            matrix[row][j]=0;
        }
        //col zero
        for(int i=0; i<matrix.size();i++){
            matrix[i][col] = 0;
        }
        }
        
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag=true;
        
        int i,j,i1;
        
        int a1[9][9] = {};
        int a2[9][9] = {};
        int a3[9][9] = {};
        
        int NumVal;
        
        for(i=0;i<9;i++) {
            for(j=0;j<9;j++) {
                if(board[i][j] != '.') {
                    NumVal = board[i][j] - '1';
                    printf("%i ",NumVal);
                    i1 = (3*floor(i/3)) + (floor(j/3));
                    
                    if((a1[i][NumVal] > 0) or (a2[j][NumVal] > 0) or (a3[i1][NumVal] > 0)) {
                        flag=false;
                        break;
                    } else {
                        a1[i][NumVal] += 1;
                        printf("(%i) ",a1[i][NumVal]); 
                        a2[j][NumVal] += 1;
                        a3[i1][NumVal] += 1;
                    }
                }
            }
            if(!flag){break;}
        }
        
        return flag;
        
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> boxes(9);

        for(int i = 0; i < 9; i++){ // rows 
            for(int k = 0; k < 9; k++){ // columns

                char val = board[i][k];

                if(val == '.'){
                    continue;
                }

                int box = (i/3) * 3 + (k/3);

                if(
                row[i].count(val) || 
                col[k].count(val) || 
                boxes[box].count(val)
                ){
                    return false;
                }

                row[i].insert(val);
                col[k].insert(val);
                boxes[box].insert(val);
            }
        }

        return true;
    }
};
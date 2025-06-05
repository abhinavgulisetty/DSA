class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rowseen[9];
        unordered_set<char> colseen[9];
        unordered_set<char> boxseen[9];
        for(int row=0;row<9;row++){
            for(int i=0;i<9;i++){
                char val = board[row][i];
                if(val == '.') continue;

                int boxindex = (row/3)*3+(i/3);

                if(boxseen[boxindex].count(val)) return false;
                boxseen[boxindex].insert(val);

                if(rowseen[row].count(val)) return false;
                rowseen[row].insert(val);

                if(colseen[i].count(val)) return false;
                colseen[i].insert(val);
            }
        }
        return true;
        
    }
};
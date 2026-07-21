class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // valid rules
        // - no same number in one row
        // - no same number in one col
        // - no repeat in 3x3

        unordered_map<int,unordered_set<char>> rowSetMap;
        unordered_map<int,unordered_set<char>> colSetMap;
        map<pair<int,int>,unordered_set<char>> squareSetMap;

        for(int i=0; i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]!='.')
                {
                    // check row or insert
                    if(rowSetMap[i].find(board[i][j])!=rowSetMap[i].end())
                    {
                        return false;
                    }
                    else
                    {
                        rowSetMap[i].insert(board[i][j]);
                    }
                    // check col or insert
                    if(colSetMap[j].find(board[i][j])!=colSetMap[i].end())
                    {
                        return false;
                    }
                    else
                    {
                        colSetMap[j].insert(board[i][j]);
                    }
                    // check square or insert
                    int ls = i/3;
                    int rs = j/3;
                    if(squareSetMap[{ls,rs}].find(board[i][j])!=squareSetMap[{ls,rs}].end())
                    {
                        return false;
                    }
                    else
                    {
                        squareSetMap[{ls,rs}].insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};

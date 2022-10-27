 class Solution {
 private:
 	vector<vector<string>> res_;
 	bool check(vector<string>& board, int row, int col, int n){
 		for(int i = 0; i < n; ++i){
 			if(board[row][i] == 'Q') return false;
 			if(board[i][col] == 'Q') return false;            
 		}
 		int tx = row, ty = col;
 		while(tx >= 0 && ty >= 0) if(board[tx--][ty--] == 'Q') return false;
 		tx = row; ty = col;
 		while(tx >= 0 && ty < n) if(board[tx--][ty++] == 'Q') return false;
 		return true;
 	}
 	void dfs(int row, vector<string>& board, int n){
 		if(row == n) res_.emplace_back(board);
 		else{
 			for(int i = 0; i < n; ++i){
 				if(check(board, row, i, n)){
 					board[row][i] = 'Q';
 					dfs(row + 1, board, n);
 					board[row][i] = '.';
 				}
 			}
 		}
 	}
 public:
 	vector<vector<string>> solveNQueens(int n) {
 		res_ = vector<vector<string>>();
 		string line = "";
 		for(int i = 0; i < n; ++i) line += ".";
 		vector<string> temp(n, line);
 		dfs(0, temp, n);
 		return res_;
 	}
 };

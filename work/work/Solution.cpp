#include "stdafx.h"
#include "Solution.h"

using namespace std;
Solution::Solution() {}

void Solution::sayHello() {
	cout << "Hello World" << endl;
}

vector<string> Solution::findWords(vector<string>& words) {
	vector<string> result;
	string sq = "qwertyuiopQWERTYUIOP";
	string sa = "asdfghjklASDFGHJKL";
	string sz = "zxcvbnmZXCVBNM";

	//c++ set初始化，使用时，需要#include <set>
	set<char> rowq(sq.begin(), sq.end());
	set<char> rowa(sa.begin(), sa.end());
	set<char> rowz(sz.begin(), sz.end());

	//vector迭代器
	vector<string>::iterator iter = words.begin();
	for (; iter != words.end(); iter++) {
		cout << iter->length() << endl;
		int count = 0;
		char a;
		for (int i = 0; i<(*iter).length(); i++) {
			a = (*iter)[i];
			cout << a << endl;
			if (rowq.find(a) != rowq.end()) {
				if (count) {
					if (count != 1) {
						count = 10;
						break;
					}
				}
				else {
					count = 1;
				}
			}
			else {
				if (rowa.find(a) != rowa.end()) {
					if (count) {
						if (count != 2) {
							count = 10;
							break;
						}
					}
					else {
						count = 2;
					}
				}
				else {
					if (count) {
						if (count != 3) {
							count = 10;
							break;
						}
					}
					else {
						count = 3;
					}
				}
			}
		}
		if (count<4)
			result.push_back(*iter);

	}
	return result;

}

int Solution::islandPerimeter(vector<vector<int>>& grid) {

	int result = 0;
	int row_end = grid.size();
	int col_end;
	bool leftOnLand = false;
	int col_size_max = 0;

	for (int row = 0; row<row_end; row++) {
		col_end = grid[row].size();
		if (col_end>col_size_max)  col_size_max = col_end;
		leftOnLand = false;

		for (int col = 0; col<col_end; col++) {
			if (grid[row][col] == 1) {
				if (!leftOnLand) {
					result++;
					leftOnLand = true;
				}
			}
			else {
				if (leftOnLand) {
					result++;
					leftOnLand = false;
				}
			}

		}
		if (grid[row][col_end - 1])  result++;

		for (int col = 0; col<(col_size_max - col_end); col++) {
			grid[row].push_back(0);
		}
	}
	cerr << result<<" "<<col_size_max << endl;
	bool upOnLand = false;
	for (int col = 0; col<col_size_max; col++) {
		upOnLand = false;
		for (int row = 0; row<row_end; row++) {
			if (grid[row][col]) {
				if (!upOnLand) {
					result++;
					upOnLand = true;
				}
			}
			else {
				if (upOnLand) {
					result++;
					upOnLand = false;
				}
			}
		}
		if (grid[row_end - 1][col]) result++;
	}

	return result;

}

int Solution::islandPerimeter2(vector<vector<int>>& grid) {
	int row_end = grid.size();
	int col_end = grid[0].size();
	vector<int > template_row(col_end,0);
	int result = 0;
	bool leftOnLand = false;
	int max_col_size = col_end;
	//for (int i = 0; i < col_end; i++)
	//	cout << template_row[i] << endl;
	for (int row = 0; row < row_end; row++) {
		leftOnLand = false;
		col_end = grid[row].size();
		if (col_end > max_col_size ) {
			for (int i = 0; i < (col_end - max_col_size); i++)  template_row.push_back(0);
		}

		for (int col = 0; col < col_end; col++) {
			if (grid[row][col]) {
				if (!leftOnLand) {
					result++;
					leftOnLand = true;
				}
				if (!template_row[col])  result++;
			}
			else {
				if (leftOnLand) {
					result++;
					leftOnLand = false;
				}
				if (template_row[col])  result++;
			}
			template_row[col] = grid[row][col];
		}
		if (grid[row][col_end - 1])  result++;
	}

	for (int col = 0; col < max_col_size; col++) {
		if (grid[row_end - 1][col]) result++;
	}
	return result;
	
}
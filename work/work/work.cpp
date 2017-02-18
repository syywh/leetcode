/* work.cpp : 定义控制台应用程序的入口点。
	写类时，stdafx的头文件放在最上面才能编译过
*/

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include <string>
#include <iostream>
#include <set>
#include "Solution.h"

int main()
{
	Solution solver ;
	//vector<string> words;
	//words.push_back("Hello");
	//words.push_back("Alaska");
	//vector<string> result = solver.findWords(words);
	//for (int i = 0; i < result.size(); i++)
	//{
	//	cout << result[i] << endl;
	//}
	vector<int> test;
	test.push_back(1);
	test.push_back(0);
	vector<vector<int> > grid;
	grid.push_back(test);
	cerr << solver.islandPerimeter2(grid) << endl;
	while (1) {}
    return 0;
}


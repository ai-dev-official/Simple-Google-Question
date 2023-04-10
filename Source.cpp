#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<vector<int>> rows;
	int prev_max = INT_MIN;

	int input[] = { 4,1,2,4,3,8,2,4,6,2,9,2,4,3,6,12,5,7,9,8,14,2,8,4,6,8,20,3,8,3,8,4 };
	int input_size = sizeof(input) / sizeof(input[0]);

	for (int i = 0; i < input_size; i++)
	{
		int num = input[i];
		if (num > prev_max)
		{
			rows.push_back(vector<int>());
		}
		rows.back().push_back(num);
		prev_max = max(prev_max, num);
	}

//Print rows
	for (int i = 0; i < rows.size(); i++)
	{
		for (int j = 0; j < rows[i].size(); j++)
		{
			cout << rows[i][j];
		}
		cout << endl;
	}


//Calculate total number of rows
	
	int row_total = rows.size();
	cout << "Total No. of Rows: " << row_total << endl;






	return 0;
}
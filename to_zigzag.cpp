#include <iostream> 
using namespace std; 
#define C 4            //change C(number of columns in matrix) according to your input matrix 

void zigZagMat(int arr[][C], int n, int m) 
{
	int row = 0, col = 0; 
	bool row_inc = 0; 

  // Print matrix of lower half zig-zag pattern 
	int mn = min(m, n); 
	for (int len = 1; len <= mn; ++len) { 
		for (int i = 0; i < len; ++i) { 
			cout << arr[row][col] << " "; 

			if (i + 1 == len) 
				break; 
			if (row_inc) 
				++row, --col; 
			else
				--row, ++col; 
		} 

		if (len == mn) 
			break; 

		// Update row or col value according 
		// to the last increment 
		if (row_inc) 
			++row, row_inc = false; 
		else
			++col, row_inc = true; 
	} 

	// Update the indexes of row and col variable 
	if (row == 0) { 
		if (col == m - 1) 
			++row; 
		else
			++col; 
		row_inc = 1; 
	} 
	else { 
		if (row == n - 1) 
			++col; 
		else
			++row; 
		row_inc = 0; 
	} 

	// Print the next half zig-zag pattern 
	int MAX = max(m, n) - 1; 
	for (int len, diag = MAX; diag > 0; --diag) { 

		if (diag > mn) 
			len = mn; 
		else
			len = diag; 

		for (int i = 0; i < len; ++i) { 
			cout << arr[row][col] << " "; 

			if (i + 1 == len) 
				break; 

			// Update row or col value according 
			// to the last increment 
			if (row_inc) 
				++row, --col; 
			else
				++col, --row; 
		} 

		// Update the indexes of row and col variable 
		if (row == 0 || col == m - 1) { 
			if (col == m - 1) 
				++row; 
			else
				++col; 

			row_inc = true; 
		} 

		else if (col == 0 || row == n - 1) { 
			if (row == n - 1) 
				++col; 
			else
				++row; 

			row_inc = false; 
		} 
	} 
} 

int main() 
{ 
	int m[][4] = { { 1, 2, 3, 4 }, 
						{ 5, 6, 7, 8 }, 
						{ 9, 10, 11, 12},
            {13, 14, 15, 16}}; 
	zigZagMat(m, 4, 4); 
	return 0; 
} 

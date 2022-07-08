// C++ Program to find
// transpose of a matrix
#include <bits/stdc++.h>
using namespace std;
#define N 4

// This function stores transpose of A[][] in B[][]
void transpose(int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = B[j][i];
}

void multiply(int A[][N],
              int B[][N],
              int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += A[i][k] * B[k][j];
        }
    }
}

// Driver code
int main()
{
    int res[N][N];
	int A[N][N]; 
	int B[N][N], i, j;

	transpose(B);

	cout <<"Result matrix is \n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		cout <<" "<< B[i][j];
		cout <<"\n";
	}

multiply(A, B, res);
 
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }


	return 0;
}

// This code is contributed by shivanisinghss2110

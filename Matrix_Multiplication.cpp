#include<iostream>
using namespace std; 

void main() {
	int i, j, k, l, x, y;
	double A[50][50], B[50][50], Z[50][50];

	/* Ask user for matrix dimension */
	cout << "What is the dimension of matrix A? " << endl;
	cin >> i >> j;
	cout << "Dimension of matrix A: " << i << " x " << j << endl;
	cout << "\nWhat is the dimension of matrix B? " << endl;
	cin >> k >> l;
	cout << "Dimension of matrix B: " << k << " x " << l << endl;

	if (j == k) {
		cout << "\nElements of matrix A " << endl;		// Request user input for matrix A
		for (x = 1; x <= i; x++) {
			for (y = 1; y <= j; y++) {
				cout << "A[" << x << "][" << y << "]=";
				cin >> A[x][y];
			}
		}
		cout << "\nElements of matrix B " << endl;		// Request user input for matrix B
		for (x = 1; x <= k; x++) {
			for (y = 1; y <= l; y++) {
				cout << "B[" << x << "][" << y << "]=";
				cin >> B[x][y];
			}
		}

		Z[1][1] = A[1][1] * B[1][1] + A[1][2] * B[2][1] + A[1][3] * B[3][1]; Z[1][2] = A[1][1] * B[1][2] + A[1][2] * B[2][2] + A[1][3] * B[3][2]; Z[1][3] = A[1][1] * B[1][3] + A[1][2] * B[2][3] + A[1][3] * B[3][3];
		Z[2][1] = A[2][1] * B[1][1] + A[2][2] * B[2][1] + A[2][3] * B[3][1]; Z[2][2] = A[2][1] * B[1][2] + A[2][2] * B[2][2] + A[2][3] * B[3][2]; Z[2][3] = A[2][1] * B[1][3] + A[2][2] * B[2][3] + A[2][3] * B[3][3];
		Z[3][1] = A[3][1] * B[1][1] + A[3][2] * B[2][1] + A[3][3] * B[3][1];
		for (x = 1; x <= i; x++) {
			Z[x][x] = A[x][x] * B[x][x];
			for (y = 1; y <= l; y++) {
				if (x == y) {

				}
				else if (x != y) {

				}
			}
		}
	}
	else if (j != k)
		cout << "Dimension of matrix A and matrix B are incompatible. " << endl;
}
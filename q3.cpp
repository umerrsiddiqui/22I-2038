
#include<iostream>
using namespace std;

void func(int A[][2], int m, int n) {
	int choice = 1;

	while (choice != 0)
	{
		cout << " 1 To input elements into matrix of size m x n\n2 To display elements of matrix of size m x n\n3 Sum of all elements of matrix of size m x n\n4 To display row-wise sum of matrix of size m x n\n 5 To display column-wise sum of matrix of size m x n\n6 To create transpose of matrix of size n x m";

		cout << "\nEnter your choice : " << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "Enter values : " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << "for index : " << i + 1 << " , " << j + 1 << endl;
					cin >> A[i][j];
				}
			}
		}
		else if (choice == 2) {
			cout << "Enter values : " << endl;
			for (int i = 0; i < m; i++) {
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					cout << A[i][j] << " ";

				}
			}
		}
		else if (choice == 3) {
			int sum = 0;
			cout << "Enter values : " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					sum += A[i][j];
				}
			}
			cout << sum << endl;
		}
		else if (choice == 4) {
			int sum = 0;
			cout << "Enter values : " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					sum += A[i][j];
				}
				cout << "Sum for row " << i + 1 << " is " << sum;
				sum = 0;
			}

		}
		else if (choice == 5) {
			int sum = 0;
			cout << "Enter values : " << endl;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					sum += A[i][j];
				}
				cout << "Sum for col " << i + 1 << " is " << sum;
			}

		}
		else if (choice == 6) {

			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++)
				{
					cout << A[j][i];
				}

			}

		}
	}
}
int main()
{
	int A[2][2];
	func(A, 2, 2);


	return 0;
}
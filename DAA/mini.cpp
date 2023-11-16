#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }

    vector<vector<int> > matrix1(row1, vector<int>(col1));
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Create the second matrix
    vector<vector<int> > matrix2(row2, vector<int>(col2));
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix with zeros
    vector<vector<int> > result(row1, vector<int>(col2, 0));

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
 
#include<iostream>
#include<vector>
using namespace std;

void markRow(int row, int n, int m, vector<vector<int>>& arr) {
    for (int j = 0; j < m; j++) {
        if (arr[row][j] != 0) {
            arr[row][j] = -1;
        }
    }
}

void markColumn(int col, int n, int m, vector<vector<int>>& arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i][col] != 0) {
            arr[i][col] = -1;
        }
    }
}

void setMatrix(vector<vector<int>>& arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                markRow(i, n, m, arr);
                markColumn(j, n, m, arr);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    setMatrix(arr, n, m);

    // Printing the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] <<"  ";
        }
        cout << endl;
    }


    return 0;
}

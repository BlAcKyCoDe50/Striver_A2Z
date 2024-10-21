#include<iostream>
#include<vector>
using namespace std;

// *********************Brute force*************************
// void markRow(int row, int n, int m, vector<vector<int>>& arr) {
//     for (int j = 0; j < m; j++) {
//         if (arr[row][j] != 0) {
//             arr[row][j] = -1;
//         }
//     }
// }

// void markColumn(int col, int n, int m, vector<vector<int>>& arr) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i][col] != 0) {
//             arr[i][col] = -1;
//         }
//     }
// }

// void setMatrix(vector<vector<int>>& arr, int n, int m) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == 0) {
//                 markRow(i, n, m, arr);
//                 markColumn(j, n, m, arr);
//             }
//         }
//     }
// }

// ******************************Better Approach***************************

void setMatrix(vector<vector<int>>& arr,int n,int m ){
    int roww[n]={0};
    int col[m]={0};
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                roww[i]=1;
                col[j]=1;
            }
        }
    }

    //marking again in original matrix
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
            if(roww[i]==1 || col[j] ==1){
                arr[i][j]=0;
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

    
    cout<<"Original Matrix: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] <<"  ";
        }
        cout << endl;
    }
    cout<<"************************"<<endl;
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

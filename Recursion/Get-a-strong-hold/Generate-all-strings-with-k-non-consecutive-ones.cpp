#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(int K, string str, vector<string>& arr) {
    if (K == 0) {
        arr.push_back(str);
        return;
    }

    if (str.back() == '0') {
        string str1 = str;
        str1.push_back('1');
        string str2 = str;
        str2.push_back('0');
        print(K - 1, str1, arr);
        print(K - 1, str2, arr);
    } else if (str.back() == '1') {
        string str3 = str;
        str3.push_back('0');
        print(K - 1, str3, arr);
    }
}

vector<string> generateString(int N, vector<string>& arr) {
    if (N <= 0) return arr;  
    
    print(N - 1, "0", arr);
    print(N - 1, "1", arr);

    return arr;
}

int main() {
    int K = 4;

    vector<string> arr;
    arr = generateString(K, arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

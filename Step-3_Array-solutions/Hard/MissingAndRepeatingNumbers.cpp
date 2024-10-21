/*You are given an array of ‘N’ integers where each integer value is between ‘1’ and ‘N’.



Each integer appears exactly once except for ‘P’, which appears exactly twice, and ‘Q’, which is missing.



Your task is to find ‘P’ and ‘Q’ and return them respectively.



Example:
Input: ‘N’ = 4
‘A’ = [1, 2, 3, 2]

Output: {2, 4}

Explanation: The integer appearing twice is ‘2’, and the integer missing is ‘4’.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
     sort(a.begin(),a.end());
    int repeat=0;
    int missing=0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
                repeat=a[i];
        }   
    else if(a[i]!=a[i+1]-1 && a[i]!=a[i+1]){
        missing = a[i]+1;
    } //repeating nhi hona chahey i.e. 2,2 and continue nhi hona chahey i.e 2,3

    if(missing == 0){
        missing=a[a.size()-1]+1;
    }
}
    cout<<repeat;
    cout<<missing;
}


main(){
// int n;
// cin>>n;
vector<int> arr;
arr={8 ,4 ,1 ,6 ,7 ,2 ,5 ,8 };
//1,2,4,5,6,7,8,8,
findMissingRepeatingNumbers(arr);

return 0;
}

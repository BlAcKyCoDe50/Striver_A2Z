   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    vector<int> smallestRange(vector<vector<int>>& nums) 
    {
        int k = nums.size();
        vector<int>arr(k,0);  // {0,0,0..} intially
        vector<int>resRange = {-1000000 , 1000000};
        
        while(true)
        {
        int minEl = INT_MAX;
        int maxEl = INT_MIN;
        int minElListIdx = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            int listidx = i;
            int elidx = arr[i];
            int element = nums[listidx][elidx];

            //finding minimum of every list 
            if(element<minEl)
            {
                minEl = element;
                minElListIdx = listidx;
            }
            
            //finding max element of every list
            maxEl = max(maxEl , element); 
        }

        //now finding the range
        if(maxEl - minEl < resRange [1] - resRange[0] )
        {
            resRange[0] = minEl;
            resRange[1] = maxEl;
        }

        //updating the minimum element pointer by 1
        int nextIdx = arr[minElListIdx]+1;
        if(nextIdx>=nums[minElListIdx].size()) break;
        arr[minElListIdx] = nextIdx;
        }
        return resRange;
    }

main(){
 
 vector<vector<int>>list = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<int>res = smallestRange(list);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }



 return 0;
 }
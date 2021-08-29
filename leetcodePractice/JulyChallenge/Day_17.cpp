static int x=[](){ios::sync_with_stdio(false); cin.tie(NULL); return 0;}();

class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        //count number of 1s
        int countOne=0;
        for(int c: arr)
            if(c==1)
                countOne++;
        
        // if no 1 found in whole vector, return {0, size-1}
        if(countOne==0)
             return {0, arr.size()-1};
        
        if(countOne%3!=0)
            return {-1,-1};
        
        //find partition size
        int i,k=countOne/3;
        
        //finding first 1 of array
        for(i=0;i<arr.size();i++)
            if(arr[i]==1)
                break;
        int start=i;
        
        //find (k+1)th 1 in the array
        int count1=0;
        for(i=0;i<arr.size();i++){
            if(arr[i]==1)
                count1++;
            if(count1==k+1)
                break;
        }
        int mid=i;
        
        //find (2*k+1)th 1 in the array
        count1=0;
        for(i=0;i<arr.size();i++){
            if(arr[i]==1)
                count1++;
            if(count1===2*k+1)
                break;
        }
        int end=i;
        
        //match all values till the end of the array
        while(end<arr.size() && arr[start]==arr[mid] && arr[mid]==arr[end])
        {start++; mid++; end++;}
        
        //return approapriate values if all values have matched till the end
        if(end==arr.size())
            return {start-1, mid};
        
        //end case, if no such index found
        return {-1,-1};
    }
};
/*
Algorithm:
1) Count no. of 1's in the given array, say countNumberOfOnes.
2) If no 1 is found ie. countNumberOfOnes == 0, just return {0,size-1}
3) If countNumberOfOnes % 3 != 0 , then we cannot partition the given array for sure. 
This is because, there is no way to put equal no. of 1's in any partition and hence, we will get different binary representations.
4) Let's try to find if there is a valid partition possible now. We find the first 1 in the given array and represent it's position by start.
5) Also, we know that each partition must have countNumberOfOnes/3 (for same reason as given in step 3).
Therefore, after finding the first 1, leave k = countNumberOfOnes/3 1's for the first partition.
6) Assign this position as mid that denotes the beginning of a possible second partition.
7) Further leave k = countNumberOfOnes/3 1's for this partition and assign the beginning of last partition as end
8) Now, all we need to do is verify whether all the partitions have same values in them. This can be done by iterating through to the end of the array.
9) If end doesn't reach the end of the array, we find a mismatch and hence, we need to return {-1, -1}
10) Otherwise, we have found our partition, return {start-1,mid}

Time Complexity: O(n)
Space Complexity: O(1)

*/
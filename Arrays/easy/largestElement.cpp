//Approach 1
// sort the array in ascending order.
// print the element at last index.

int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

// Time Complexity: O(N*log(N))
// Space Complexity: O(n)


//Approach 2

// Create a max variable and initialize it with arr[0].
// Use a for loop and compare it with other elements of the array
// If any element is greater than the max value, update max value with the element’s value
// Print the max variable.

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)maxi=arr[i];
    }
    return maxi;
}

// Time Complexity: O(N)

// Space Complexity: O(1)
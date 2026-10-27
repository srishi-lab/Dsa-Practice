#include <iostream>
using namespace std;

// two sum
// brute method
vector<int> twosum(int arr[], int n,int target){
    int i=0;
    vector<int> ans;
    while(i<n-1){
   for(int j=i+1;j<n;j++){
        if(arr[i] +arr[j]== target){
            ans.push_back(i);
            ans.push_back(j);
        }   
    }
         i++;
    }
    return ans;
 
}

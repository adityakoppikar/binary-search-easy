#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int findMinElement(vector<int> arr) {
  int low {0}, high = arr.size()-1;
  int minEle = INT_MAX;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[low] <= arr[mid]) {
      minEle = min(minEle, arr[low]);
      low = mid+1;
    } else {
      high = mid-1;
      minEle = min(minEle, arr[mid]);
      
    }
  }
  return minEle;
}

int main () {
  vector<int> arr = {6, 7, 8, 1, 2, 3, 4, 5};
  int key {3};

cout<<"minimum element present in the array is "<<findMinElement(arr)<<"\n";
  
  return 0;
}
#include<iostream>
#include<vector>
using namespace std;


bool searchRotatedSorted(vector<int> arr, int key) {
  int low = {0};
  int high = arr.size()-1;
  while(low <= high) {
    int mid = (low+high)/2;
    if(arr[mid] == key)
      return true;
    if(arr[low] == arr[mid] && arr[mid]== arr[high]) {
      low++;
      high--;
      continue;
    }
    
    else if(arr[low] <= arr[mid]) {
      if(key>=arr[low] && key<arr[mid]) 
        high = mid-1;
      else
        low = mid+1;
      }
    else {
      if(key>arr[mid] && key<=arr[high]) 
        low = mid+1;
      else  
        high = mid-1;
      
    }
}
}

int main () {
  vector<int> arr = {3, 1, 2, 3, 3, 3, 3};
  int key {3};
  if(searchRotatedSorted(arr, key)) {
    cout<<"element "<<key<<" present in the array\n";
  } else {
    cout<<"element "<<key<<" is not present in the array\n";
  }
  return 0;
}
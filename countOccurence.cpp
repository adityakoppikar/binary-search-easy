#include<iostream>
#include<vector>
using namespace std;

int findLastOccurence(vector<int> arr, int key) {
	int low {0}, high = arr.size()-1;
	int lastOccurence = arr.size();
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid] == key) {
			lastOccurence = mid;
      if(mid < arr.size()-1) {
        if(arr[mid+1] != arr[mid]) return lastOccurence;
      }
      low = mid+1;
		} else if(arr[mid] < key)
			low = mid+1;
		else 
			high = mid-1;
	}
	return lastOccurence;
}

int findFirstOccurence(vector<int> arr, int key) {
	int low {0}, high = arr.size()-1;
	int firstOccurence {-1};
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid] == key) {
			firstOccurence = mid;
			high = mid-1;
		} else if(arr[mid] < key) {
			low = mid+1;
		} else {
			high = mid-1;
		}
	}
	return firstOccurence;
}


int main () {

  vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4};
  int key {4};
	cout<<"the number of occurences of element "<<key<<" is: "<<findLastOccurence(arr, key)-findFirstOccurence(arr, key) + 1;
  return 0;
}

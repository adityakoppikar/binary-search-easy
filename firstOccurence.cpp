#include<iostream>
#include<vector>
using namespace std;

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

    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int key {4};
	cout<<"element "<<key<<" first occured at index "<<findFirstOccurence(arr, key)<<endl;
    return 0;
}
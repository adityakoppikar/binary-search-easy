#include<iostream>
#include<vector>
using namespace std;

int binarySearchIterative(vector<int> arr, int key) {
    int beg {0}, end = arr.size()-1;
    while (beg <= end) {
        int mid = (beg+end)/2;
        if(arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            beg = mid+1;
        } else {
            end = mid-1;
        }
    } return -1;
}

int binarySearchRecursive(vector<int> arr, int low, int high, int key) {
    if(low > high) return -1;
    
    int mid = (low+high)/2;
    if(arr[mid] == key) {
        return mid;
    } else if(key < arr[mid]) {
        return binarySearchRecursive(arr, low, mid-1, key);
    } else {
        return binarySearchRecursive(arr, mid+1, high, key);
    }
}


int main () {
    int n;
    vector<int> arr;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0; i<n; i++) {
        int data;
        cin>>data;
        arr.push_back(data);
    }
    if(binarySearchIterative(arr, key) == -1) {
        cout<<"element not found\n";
        return 0;
    }
    cout<<"element "<<key<<" found at index "<<binarySearchIterative(arr, key)<<endl;
    cout<<"element "<<key<<" found at index "<<binarySearchRecursive(arr, 0, arr.size()-1, key)<<endl;
    return 0;
}
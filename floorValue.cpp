#include<iostream>
#include<vector>
using namespace std;

int findFloor(vector<int> arr, int key) {
    int low {0}, high = arr.size()-1;
    int floorValue = -1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] <= key) {
            floorValue = arr[mid];
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return floorValue;
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
    int floorvalue = findFloor(arr, key);
    cout<<"the floor value of "<<key<<" is: "<<floorvalue<<endl;
    return 0;
}
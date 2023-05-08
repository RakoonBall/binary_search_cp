#include <bits/stdc++.h>
using namespace std;

int bin_search(int arr[], int s,int e, int k){
    //base case
    if(s>e){  //e-s<1
        return -1;
    }
    //calculate mid 
    int mid = s + (e-s)/2;
    //recursive calls
    if(arr[mid]==k){
        return mid;
    }else if(arr[mid]> k){
        e = mid-1;
        return bin_search(arr, s, e, k);
    }else{
        s = mid +1;
        return bin_search(arr, s, e, k);
    }
}

int main(){
    int arr[6] = {1,2,4,5,6,8};
    int result = bin_search(arr, 0, 6-1, 5);
    cout <<"index is "<<  result <<endl;
    return 0;
}
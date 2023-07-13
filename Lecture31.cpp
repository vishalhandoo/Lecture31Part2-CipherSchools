#include<bits/stdc++.h>
using namespace std;


void merge(int *arr,int start , int end){

}


void mergeSort(int *arr, int start , int end){
    

    int mid;
    mid = (start+end)/2;
    if(start>=end){
        return;
    }
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);


}


int main(){
    int arr[5]={1,5,10,4,3};
    int size=5;
    mergeSort(arr,0,size-1);
    return 0;
}
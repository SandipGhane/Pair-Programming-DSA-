/*
input arr[] = {1,0,1,2,0,1,2,0,0}
output arr = {0,0,0,0,1,1,1,2,2}
time ========== O(n)
space O(1)
*/
#include<iostream>
using namespace std;

void arraySort(int arr[],int size){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;++i){
         if(arr[i]==0)
            count0++;
        else if(arr[i]==1)
            count1++;
        else
            count2++;
    }
    int i=0;
    while(count0>0){
        arr[i++] = 0;
        count0--;
    }
    while(count1>0){
        arr[i++] = 1;
        count1--;
    }
    while(count2>0){
        arr[i++] = 2;
        count2--;
    }
}

int main(){
    int arr[9]={1,0,1,2,0,1,2,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    arraySort(arr,size);
    cout<<"After sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
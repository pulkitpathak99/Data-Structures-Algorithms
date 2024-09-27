#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,7,4,43,45,6,52,436,7687,56,312,563,5243,45,554,4,324,56768,543,54,75,547,456,54,6546};
    int max=arr[0];
    for (int i=0; i<= sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"The Maximum Number in the given array is: "<<max;
}


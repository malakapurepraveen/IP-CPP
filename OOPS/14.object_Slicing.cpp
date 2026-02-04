#include<iostream>
using namespace std;

int removeDublicate(int arr[],int n){
    int index=0;
    for(int i=0;i<n;i++){
        bool isDublicate=false;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                isDublicate=true;
                break;
        }
        if(isDublicate){
            arr[index]=arr[i];
            index+++;
        }
    }
    return index;
}
int main(){
    int arr[]={1,2,3,2,3,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ne=removeDublicate(arr,n );
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
    

}
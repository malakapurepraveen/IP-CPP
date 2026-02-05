// #include<iostream>
// using namespace std;
// void reverseString(char str[]){
//     int right=0,left=0;

//     while(str[right]!='\0')
//         right++;
// right--;
//         while(left<right){
//             char temp=str[left];
//             str[left]=str[right];
//             str[right]=temp;
//             left++;
//             right--;
//         }
// }

// int main(){
//     char str[]="Praveenm";
//     reverseString(str);
//     cout<<str<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int arr[] = {10, 5, 20, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest: "
         << findSecondLargest(arr, n) << endl;

    return 0;
}
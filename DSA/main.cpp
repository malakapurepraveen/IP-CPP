// #include<iostream>
// using namespace std;
// int main(){
//     int n=10,sum=0;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Output:"<<sum;
//     return 0;
    
// }

#include<iostream>
using namespace std;

// int main(){
//     int N=5;
//     int oddSum=0;
//     int num=1;
//     while(num<=N){
//         if(num%2 !=0)
//                 oddSum+=num;
//         num++;
//     }
//     cout<<oddSum<<endl;
    
// }


// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     bool isPrime=true;

//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             isPrime=false;
//         }
//     }
//     if(isPrime){
//         cout<<"Prime";
//     } else {
//         cout<<"Non-prime";
//     }
// }



//reverse a guven number
// int main(){
//     int num=523;
//     int rev=0;
//     int lastDigit=0;
//     while(num>0){
//         lastDigit=num%10;
//         rev=rev*10+lastDigit;
//         num=num/10;
        
//     }
//         cout<<rev<<endl;
//     return 0;
// }

//print prime numbers from 2 to N

// int main(){
//     int N;
//     cout<<"Enter a number: ";
//     cin>>N;

//     for(int i=2;i<=N;i++){
//         bool isPrime=true;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//             isPrime=false;
//                 break;
//         }
//             }
//         if(isPrime==true){
//             cout<<i<<" ";
//         }
//     }
// }



// decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int num=56;
//     int rem=0;
//     int ans=0;
//     int position=1;
//     int original = num;

//     while(num>0){
//         rem=num%2;
//         num=num/2;
//         ans=ans+(rem*position);
//         position=position*10;
//     }
//     cout<<"binary num of "<<original<<" is "<<ans<<endl;
//     return 0;
// }



//binary to decimal
// #include<cmath>
// int main(){
//     int lastDigit=0;
//     int num=101010;
//     int ans=0;
//     int base=1;

//     while(num>0){
//         lastDigit=num%10;
//         num=num/10;
//         ans=ans+(lastDigit*base);
//         base*=2;

//     }
//     cout<<"Decimal Num = "<<ans<<endl;
//     return 0;
// }


// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;

//     if(num<1){
//         cout<<"Enterd number is not a power of 2"<<endl;
//         return 0;
//     }
//     int x=1;
//     while(x<=num){
//         if(x==num){
//             cout<<"Given number is a power of 2"<<endl;
//             return 0;
//         }
//         x*=2;
        
//     }
//     cout<<"Given Number is not power of 2"<<endl;
//     return 0;
// }

//arrays
// #include<climits>
// int main(){
//     int nums[]={20,30,50,2,4,-10};
//     int size=sizeof(nums)/sizeof(int);
//     int largest = INT_MIN;
//     int smallest=INT_MAX;
//     int m_index=0,s_index=0;

//     for(int i=0;i<size;i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//             s_index=i;
//         } else if(nums[i]>largest){
//             largest=nums[i];
//             m_index=i;
//         }
//     }
//     cout<<"smallest value is: "<<smallest<<" At index: "<<s_index<<endl;
//     cout<<"largest value is: "<<largest<<" At index: "<<m_index<<endl;
//     return 0;
// }



//reverse an array
#include<utility>
// void revArr(int arr[],int size){
//     for(int i=0;i<size/2;i++){
//        swap(arr[i],arr[size-i-1]);
//         // arr[i]=arr[size-1-i];
//     }
// }

////Vectors

#include<vector>
// int main(){
//     int ans=0;
//     vector<int> nums = {1,2,3,4,1,2,3};
//     for(int vec:nums){
//         ans=ans^vec;
//     }
//     cout<<"Unique Number="<<ans<<endl;
//     return 0;
// }

////////////////////////
// int main(){
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.push_back(6);
   
//     vec.pop_back();


//     for(int val:vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<vec.at(2)<<endl;
//     cout<<vec.front()<<endl;

//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
//     return 0;

// }

////////////////////////reverse vector
// void revVec(vector<int>& vec){
//      int j=0;
//     int k=0;
//     for(int i:vec){
//         if(j<vec.size()/2){
//             swap(vec.at(k),vec.at(vec.size()-j-1));
//             j++;
//             k++;
//         }
                
//     }
// }
// int main()
// {
//     vector<int> vec = {1,24,2,7,4,5,8,4};
//     revVec(vec);
//     for(int vec_value:vec){
//         cout<<vec_value<<" ";
//     }
//     return 0;
// }
int main(){
vector<int> v(3);
v.push_back(5);
cout<<v.at(0);
cout<<v.at(1);
cout<<v.at(2);

cout << v.size();
}







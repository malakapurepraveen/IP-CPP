// #include <iostream>
// #include <stack>
// using namespace std;

// bool isValid(string s) {
//     stack<char> st;

//     for(char ch : s) {

//         // Opening brackets
//         if(ch == '(' || ch == '{' || ch == '[') {
//             st.push(ch);
//         }
//         else {
//             if(st.empty()) return false;

//             char top = st.top();
//             st.pop();

//             if( (ch == ')' && top != '(') ||
//                 (ch == '}' && top != '{') ||
//                 (ch == ']' && top != '[') ) {
//                 return false;
//             }
//         }
//     }

//     return st.empty();
// }

// int main() {
//     string s1 = "[()]{ }";
//     string s2 = "()[ ]{[ }";

//     cout << s1 << " → "
//          << (isValid(s1) ? "Valid" : "Not Valid") << endl;

//     cout << s2 << " → "
//          << (isValid(s2) ? "Valid" : "Not Valid") << endl;
// }




//
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// bool isValid(string s){
//     stack<char> st;

//     for(char x:s){
//         if(x=='(' || x=='{' ||x=='['){
//             st.push(x);
//         }
//         else
//         {
//             if(st.empty()) return false;

//             char top=st.top();
//             st.pop();

//             if(x==']' && top!='[' ||
//                 x=='}' && top!='{' ||
//                 x==')' && top!='(') return false;
//         }
//     }
//     return st.empty();
// }
// int main(){

//     string s1="{((()))}";
//     string s2="{({)}";
//     cout<<((isValid(s1))?"Valid":"Not Valid")<<endl;
//     cout<<((isValid(s2))?"Valid":"Not Valid")<<endl;
//     return 0;

// }





#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for(char ch:s){
        if(ch=='['||ch=='('||ch=='{'){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
        }
            char top=st.top();
            st.pop();

            if(ch==']' && top!='[' || ch==')' && top!='(' || ch=='}' && top!='{'){
                return false;
            }
    }
    }
    return st.empty();
}
int main(){
    string s1="{{({)}}";
    string s2="{{(){}}}";
    cout<<(isValid(s1)?"Valid":"Not Valid")<<endl;
    cout<<(isValid(s2)?"Valid":"Not Valid")<<endl;

    return 0;
}




#include <bits/stdc++.h>
// using namespace std;
// // void prinum(int n){
// //     cout<<n<<' ';
// //     n--;
// //     if (n<=0){
// //         return;
// //     }
// //     prinum(n);
// // }

// bool isPalindrome(string s){
//     int i;
//     int a=s.length();
//     if (s[i]!=s[a-1-i]){
//         return false;
//     }
//     i++;
//     isPalindrome(s);
// }
// int fib(int n){
//     if (n==1 || n==0){
//         return n;
//     }
//     else{
//         int c = fib(n-1)+fib(n-2);
//         cout<<c<<endl;
//     }
    

// }
// int main(){
//     // int num, mun;
//     // cout<<"Enter the Number you want to reverse: ";
//     // cin>>num;
//     // while (num>0){
//     //     mun=num%10;
//     //     num=num/10;
//     //     cout<<mun;
//     // }
//     // string s;
//     // cout<<"Enter the string: ";
//     // cin>>s;
//     // bool p= isPalindrome(s);
//     // if (p){
//     //     cout<<"Palindrome ";
//     // }
//     // else{
//     //     cout<<"No Palindrome ";
//     // }
    
//     int n;
//     cout<<"Enter fib n: ";
//     cin>>n;
//     int c= fib(n);
//     cout<<c;
//     return 0;
// }
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}
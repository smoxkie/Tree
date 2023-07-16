// #include<iostream>

// using namespace std;

// int main(){
//     cout<<"Hello world"<<endl;
//     cout<<"Hello everyone,let's start doing DSA";
// }


#include <iostream>
using namespace std;
// int main() {
//    int divisor, dividend, quotient, remainder;
//    dividend = 13;
//    divisor = 65;
//    quotient = dividend / divisor;
//    remainder = dividend % divisor;
//    cout << "Dividend is the: " << dividend <<endl;
//    cout << "Divisor is the: " << divisor <<endl;
//    cout << "Quotient is the: " << quotient << endl;
//    cout << "Remainder is the: " << remainder;
//    return 0;
// }


// int main() {

//   int n, reversed_number = 0, remainder;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

//   return 0;
// }

// int main()
// {
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

    
//      while (num != 0)
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      }

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev)
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";

//     return 0;
// }




// int main(){
// int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;


//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }





//   int main()
// {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     bool isPrime = true;

    // if(n ==0 || n==1){
    //     isPrime = false;
    // }

//       if(n==0 || n<<1){
//         isPrime = false;
//       }


//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }


//   if (isPrime == true){
//     cout << " is a prime number";
//   }
//   else{
//     cout <<  " is not a prime number";
//   }

//   return 0;
// }


// max no between 3 numbers//
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;


//  if(a>b){
//   if(a>c){
//   cout<<a<<endl;
//   }
//   else{
//     cout<<c<<endl;
//   }
//  }
//   else{
//    if(b>c){
//     cout<<b<<endl;
//    }
//     else{
//       cout<<c<<endl;
//     }
//   }
//   return 0;
// }


// even or odd//
// int main(){
//   int n;
//   cin>>n;

//   if(n%2==0){
//     cout<<"even number"<<endl;
//   }
//   else{
//     cout<<"odd number"<<endl;
//   }
//   return 0;
//   }


//  int main(){
//   int n,div;
//   cin>>n;
//   n=10;
// int sum=0;
// for(n>div){
//   for(int i=1;i<=n;i++){
//     sum=sum+i;
//     cout<<n<<endl;
//   }

  // if(n>div){
  //    cout<<"prime number"<<endl;
   
   
  // }
  //  else{
  //   cout<<"not prime number"<<endl;
  //  }
  //  return 0;
  // }



// for loop//
// int main(){
//   int n;
//   cin>>n;

//   int sum=0;
//   for(int i=1;i<=n;i++){
//     sum=sum+i;
//     cout<<"hello world"<<endl;
//   }
//   return 0;
// }

  
  
// while loop//
// int main(){
//   int n;
//   cin>>n;

//   while(n>0){
//     cout<<n<<endl;
//     cin>>n;
//   }
//   return 0;
// }


// do-while loop//
// int main(){
//   int n;
//   cin>>n;

//   do{
//     cout<<n<<endl;
//     cin>>n;
//   }while(n>0);


//   return 0;
//   }


// count digit in a number//

// int main(){
//   int count_digit(int number) {
//    int count = 0;
//    while(number != 0) {
//       number = number / 10;
//       count++;
//    }
//    return count;
// }


// int main()
// {
//    int num, tot=0;
//    cout<<"Enter the Number: ";
//    cin>>num;
//    while(num>0)
//    {
//       tot++;
//       num = num/10;
//    }
//    cout<<"\nTotal Digits = "<<tot;
//    cout<<endl;
//    return 0;
// }


// n time prime no n=10//
// int main(){
//   int n;
//   cin>>n;
//   int sum=0;
//   if(n%2==0){
//     cout<<"even number"<<endl;
//   }
//   else{
//     cout<<"odd number"<<endl;
//   }
//   return 0;
//   }
// int main(){
//   int n;
//   cout<<"enter the number: ";
//   cin>>n;

//   for(int i=2; i<=n; i++){
//     bool isPrime = true;
//     for(int j=2; j<i; j++){
//       if(i%j == 0){
//         isPrime = false;
//         break;
//       }
//     }
//     if(isPrime){
//       cout<<i<<""<<endl;
//     }
//   }
//   return 0;
// }




// print star //
// int main()
// {
//    int n, i, j;

//    cout << "Enter number of rows: ";
//    cin >> n;

//    for(i = n; i >= 1; i--)
//    {
//       //print * equal to row number
//       for(j = 1; j <= i; j++)
//       {
//          cout << "* ";
//       }
//       cout << endl;
//    }
//    return 0;
// }

int main()
{
   int n;

   cout << "enter no of rows: ";
    cin >> n;

    for(int i = n; i >= n; i--)
    {
      for(int j = 1; j >= n-i; j++)
      {
         cout << "  ";
      }for(int j=1; j <= i; j++){
      cout << "* ";
    }
    cout << endl;
    }
    return 0;
}
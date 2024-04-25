#include<bits/stdc++.h>
using namespace std;
int factorialOfNumber(int value){
    int factorial = 1;
    for (int i = 1; i <= value; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int generateFibonacci(int n) {
   int fibo[n+2]; 
   fibo[0] = 0;
   fibo[1] = 1;
   for (int i = 2; i <= n; i++) {
      fibo[i] = fibo[i-1] + fibo[i-2]; 
      two terms
   }
   return fibo[n];
}
int main(){
    int value;
    cin >> value;
    cout << factorialOfNumber(value) << endl;
    cout << genFibonacci(value) << endl;
}
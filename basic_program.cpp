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
int main(){
    int value;
    cin >> value;
    cout << factorialOfNumber(value) << endl;
}
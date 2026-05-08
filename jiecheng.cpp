#include<iostream>
#include<cmath>
using namespace std;

int jiecheng(int n){
    int res = 1;
    for(int i=1; i<=n; i++){
        res *= i;
    }
    return res;
}   

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The res of jiecheng" << n << " is: " << jiecheng(n) << endl;
    return 0;
}

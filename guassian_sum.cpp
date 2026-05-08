#include<iostream>
#include<cmath>
using namespace std;

int guassian_sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}   

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The guassian sum of " << n << " is: " << guassian_sum(n) << endl;
    return 0;
}

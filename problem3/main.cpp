#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long num;
    long originalnum;
    cout << "This program is designed to find the largest prime factor of a number" << endl;
    cout << "please enter the number you wish to check" << endl;
    
    cin >> num;
    originalnum = num;
    
    for (int i = 2; i <= sqrt(num); i++){
        while ((num% i == 0) && (num != i)){
            num = num/i;
        }
    } 
    
    cout << "the largest prime factor of " << originalnum << " is " << num << endl;
    return 0;
}



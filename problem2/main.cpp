#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 0;
    int c = 0;
    int i = 0;
    
    while (a <= 4000000){
        i = a+b;
        if (a % 2 == 0){
            c = c + a;
            } 
        b = a;
        a = i;
        }
    cout << c;
    return 0;
    }

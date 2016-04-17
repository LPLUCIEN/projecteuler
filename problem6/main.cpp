#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long max;
    long sumofsquare = 0;
    long squareofsum = 0;
    long difference;
    
    cout << "please enter the max limit of the sumation" << endl;
    cin >> max;
    
    squareofsum = pow(((max/2) * (2 + (max-1))), 2 );
    
    cout << "the sum of the series squared is " << squareofsum << endl;  
    
    for (int i = 1; i <= max; i++){
        sumofsquare = sumofsquare + pow(i,2);
        
    }
    cout  << "the sum of the squares in the series is " << sumofsquare << endl;
    
    difference = squareofsum - sumofsquare;
    
    cout << "the difference between the two is " << difference << endl;
    
    return 0; 
}

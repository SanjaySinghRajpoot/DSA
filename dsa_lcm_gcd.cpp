// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


// program to find the LCM and GCD for two numbers. 
int main() {
    
    int a=24, b=36, temp;
    int cpy = a, cpy1 = b;
    
    while(b%a != 0){
        
        temp = b%a;
        // a = temp;
        b = a;
        a = temp;
    }
    
    cout<<temp<<endl;
    
    int lcm = (cpy* cpy1)/temp;
    
    cout<<"LCM is this "<<lcm<<endl;
    

    return 0;
}
#include <bits/stdc++.h> 
using big_int = boost::multiprecision::cpp_int; 
using namespace std; 
  
// function to generate first n 
// fibonacci numbers 
int fib(unsigned int n) 
{ 
    big_int a = 0; 
    big_int b = 1; 
    const big_int c=0; 
    for (unsigned int i = 2; i < n; ++i) 
    { 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    return c;
} 
  
// Driver code 
int main() 
{ 
    unsigned int n = 999999; 
    // function calling 
    cout<<fib(n);
    return 0; 
} 
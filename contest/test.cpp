#include<bits/stdc++.h>
using namespace std;
  
// Returns position of survivor among a circle 
// of n persons and every second person being 
// killed 
int josephus(int n) 
{ 
    // Find value of 2 ^ (1 + floor(Log n)) 
    // which is a power of 2 whose value 
    // is just above n. 
    int p = 1; 
    while (p <= n) 
        p *= 2; 
  
    // Return 2n - 2^(1+floor(Logn)) + 1 
    return (2 * n) - p + 1; 
} 
  
// Driver Program to test above function 
int main() 
{ 
    int n ;
    cin>>n;
    printf("The chosen place is %d", josephus(n)); 
    return 0; 
} 
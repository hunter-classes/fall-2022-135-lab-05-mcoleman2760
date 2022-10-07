#include <iostream>
#include "funcs.h"
#include <string>

bool isDivisibleBy(int n, int d) {
  bool s ;
  if (n % d == 0) {
   s = true;
    return s;
  }

  else if (n % d != 0) {
     s = false;
    return s;
  }
}

   bool isPrime(int n){
      bool s = true ;

     if (n <=1) {
      
       s = false;
     }
    for (int i = 2; i <= n/2; i++){
      if (n % i == 0) {
        
         s = false;
      }
     
      
     
    }
     return s;
     }

int nextPrime(int n){
 
  if (n <=1){
    
   return 2;
   }

  int prime = n;
    bool next = false;
  
while (!next) {
        prime++;
 
        if (isPrime(prime))
            next = true;
    }
 
    return prime;
}

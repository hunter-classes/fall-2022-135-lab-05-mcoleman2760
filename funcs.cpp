
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

int countPrimes(int a, int b){

  int num;

  

  for(int i = a; i <= b; i++) {
   
    if(isPrime(i) == true){
      num++;
    }
    
  }
  return num;
  }

bool isTwinPrime(int n){

  if(isPrime(n) == false) {
    return false;
  }
  else {
    if (isPrime(n-2) == true || isPrime (n+2) == true){
      return true;
    }
  }
  return false;
  
}

int nextTwinPrime(int n){
for (int i = n+1; i < 2147483647 ; i++){
  if (isTwinPrime(i) == true) {
    return i;
  }
}
  return -1;
}

int largestTwinPrime(int a, int b) {
  for (int i=b; i >=a;i--){
    if (isTwinPrime(i) == true){
      return i;
    }
  }
  return -1;
}

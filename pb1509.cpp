#include <iostream>

using namespace std;

int nrmaxim(int n) {
       int i, j = 1, len = 0, cop, max = -1000000, cop2;
       cop = n;
       max = n;
       while(cop != 0){
           len++;
           cop /= 10;
       }
       for(i = 1; i < len; i++)
           j *= 10;
       for(i = 1; i <= len; i++){
           cop = n % j;
           n /= j;
           cop2 = n % 10;
           n = cop * 10 + cop2;
           if(n > max) max = n;
       }
       return max;
   }

int main(){

   cout<<nrmaxim(123423);

}

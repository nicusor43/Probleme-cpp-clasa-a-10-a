#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("cioc.in");
ofstream g("cioc.out");

int t[200002];

int main(){
    int n, c, k, kf; 
    f >> c >> n >> k;
    for(int i = 1; i <= n; i++){
        f >> t[i];   
    }

    if(c == 1){
        sort(t, t + n + 1);
        kf = k;
        for(int i = 1; (i <= k) || ( (t[i] == t[i+1]) || (t[i+1] == t[i+2]) ); i++){
            if(t[i] == t[i+1]) kf++;    
        }

        g << kf;
    }
}
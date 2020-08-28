#include <string>
#include <fstream>
#include <iostream>

using namespace std;

ifstream f("arh.in");
ofstream g("arh.out");

int nr_t;

string S, T;

string solve_par(int i, int fin, int nr_m), solve_sqr(), solve_sqr_b();

string solve_par(int i, int fin, int nr_m){

}


int main(){
    f >> S;
    cout << S;
    T = ""
    for(int i = 0; i < S.size(); i++){
        if(S[i] == '('){
            int nr_m = S[i-1];
            while(int x = i, S[x] != ')'){

            }
        }
    }
}

#include <iostream>
#include <queue>

using namespace std;

const int n = 5, m = 5;
int A[n][m] = {{1, 0, 0, 1, 0},{1, 0, 1, 0, 1},{1, 0, 0, 1, 0},{1, 0, 0, 1, 0},{1, 0, 0, 1, 0}};

int di[] = {-1, 0, 1, 0},
    dj[] = { 0, 1, 0, -1};

void Fill(int istart ,int jstart ,int v)
{
    queue<pair<int,int>> Q;
    //initializare coada
    Q.push(make_pair(istart , jstart));
    //marcare pozitie de start
    A[istart][jstart] = v;
    while(! Q.empty()) // cat timp coada este nevida
    {   
        int i = Q.front().first, j = Q.front().second; // determinam elementul de la inceputul cozii
        for(int k = 0 ; k < 4 ; k ++)
        {
            int iv = i + di[k], jv = j + dj[k]; // coordonatele vecinului
            if(iv >= 1 && iv <= n && jv >= 1 && jv <= m // element în matrice
                && A[iv][jv] != 1 // element liber
                && A[iv][jv] != v) // nemarcat
            {
                // marcam elementul vecin
                A[iv][jv] = v;
                // il adaugam in coada
                Q.push(make_pair(iv , jv));
            }
        }
        Q.pop(); // eliminam din coada
    }
}

int main(){
    Fill(3,3,2);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}


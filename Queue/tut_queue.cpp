#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<int> Q;
    cout << Q.empty() << endl;
    Q.push(5);
    cout << Q.front();
}
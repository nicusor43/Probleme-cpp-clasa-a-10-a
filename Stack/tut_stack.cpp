#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<int> S;
    cout << S.empty() << '\n';
    S.push(7);
    cout << S.empty() << '\n';
    cout << S.top() << '\n';
    S.pop();
    cout << S.empty() << '\n';
    S.push(5); S.push(7);   
    cout << S.size();
    S.swap(S);
}
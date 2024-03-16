#include <iostream>
using namespace std;

void run (int w);

int main ()
{
    int weight; cin >> weight;
    run (weight);
}

void run (int w)
{
    if (w % 2 == 0 && w > 2) cout << "YES";
    else cout << "NO";
}
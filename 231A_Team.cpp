#include <iostream>
using namespace std;

int run ();

int main () 
{
    int n; cin >> n;
    int count = 0;
    while (n--)
    {
        if (run () > 0)
            count++;
    }
    cout << count;
}

int run ()
{
    int cnt = 0;
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
            cnt++;
    }
    if (cnt >= 2)
        return cnt;
    else 
        return 0;
}

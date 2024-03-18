#include <iostream>
using namespace std;

void run ();
void exportArr (char arr[]);

int main ()
{
    int N; cin >> N;
    while (N--)
        run ();
}

void run ()
{
    char arr[1000];
    int cnt = 0;
    for (int i = 0; i < 1001; i++)
    {
        cin >> arr[i];
        cnt += 1;
    }
    if (cnt > 9) 
    {
        exportArr (arr);
        cout << endl;
    }
    else 
    {
        cout << arr[0] << cnt - 1 << arr[cnt];
    }
}

void exportArr (char arr[])
{
    for (int i = 0; i < 1001; i++)
        cout << arr[i];
}
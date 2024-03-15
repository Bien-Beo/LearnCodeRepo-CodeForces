#include <iostream>
using namespace std;

void zeroArr (int arr[], int sizeArr);
void importArr (int arr[], int sizeArr);
void run();
void exportArr(int arr[], int sizeArr);

int main ()
{
    int testCase; cin >> testCase;

    while(testCase--)
        run();
}

void run()
{
    int sizeArr; cin >> sizeArr;
    int arr[sizeArr];
    importArr (arr, sizeArr);

    int i = 1;
    while (i <= sizeArr - 2)
    {
        if (arr[i - 1] > 0)
        {
            arr[i - 1] -= 1;
            arr[i] -= 2;
            arr[i + 1] -= 1;
        }
        //exportArr(arr, sizeArr);
        if (arr[i - 1] <= 0) continue;
    }
    zeroArr(arr, sizeArr);
}

void exportArr(int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr; i++)
        cout << arr[i] << " ";
}

void importArr(int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr; i++)
        cin >> arr[i];
}

void zeroArr (int arr[], int sizeArr)
{
    for (int i = 0; i < sizeArr; i++)
    {
        if (arr[i] != 0) cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
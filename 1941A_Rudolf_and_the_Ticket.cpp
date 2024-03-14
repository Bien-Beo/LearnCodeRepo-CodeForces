#include <iostream>
using namespace std;

void importArr (int *arr, int sizeArr);
int run (int *arrL, int *arrR, int l, int r, int s, int &result);

int main ()
{
    int testCase, result;
    int resultArr[100];
    do cin >> testCase;
    while (testCase < 1 && testCase > 100);

    for (int i = 0; i < testCase; i++)
    {
        int left, right, sum;

        do cin >> left;
        while (left < 1 && left > 100);
        do cin >> right;
        while (right < 1 && right > 100);
        do cin >> sum;
        while (sum < 1 && sum > 2000);

        int leftArr[100], rightArr[100];

        importArr (leftArr, left);
        importArr (rightArr, right);
        resultArr[i] = run (leftArr, rightArr, left, right, sum, result);
    }

    for (int j = 0; j < testCase; j++)
        cout << resultArr[j] << endl;
}

void importArr (int *arr, int sizeArr)
{
    for (int i = 0; i < sizeArr; i++)
        cin >> *(arr + i);
}

int run (int *arrL, int *arrR, int l, int r, int s, int &result)
{
    result = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (*(arrL + i) + *(arrR + j) <= s)
                result++;
        }
    }
    return result;
}


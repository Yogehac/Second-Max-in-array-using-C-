#include <iostream>

using namespace std;

int max(int *arr, int size, int skipIdx = -1)
{
    int maxIdx = 0, i = 0;
    while (i < size)
    {
        if (arr[i] > arr[maxIdx] && i != skipIdx)
            maxIdx = i;
        i++;
    }
    return maxIdx;
}

int main()
{
    int num[5] = {5, 4, 8, 9, 1};
    int firstMax = max(num, 5);
    int secondMax = max(num, 5, firstMax);
    cout << secondMax;

    return 0;
}
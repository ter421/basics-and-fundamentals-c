// jed filip m. sayat

#include <iostream>
using namespace std;

void mergedArray (int arrOne[], int arrTwo[], int arrMerge[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        arrMerge[i] = arrOne[i];
    }

    for (int i = 0; i < arrSize; i++)
    {
        arrMerge[i + arrSize] = arrTwo[i];
    }
}

void sortDescend (int arrMerge[10], int arrSize)
{
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (arrMerge[j] < arrMerge[j + 1])
            {
                int temp = arrMerge[j];
                arrMerge[j] = arrMerge[j + 1];
                arrMerge[j + 1] = temp;
            }
        }
    }
}

int main ()
{
    const int arrSize = 10;
    int arrOne[arrSize], arrTwo[arrSize];

    cout << "Enter 10 elements for the first array:" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arrOne[i];
    }

    cout << endl;

    cout << "Enter 10 elements for the second array:" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arrTwo[i];
    }

    int arrMerge[arrSize * 2];

    mergedArray(arrOne, arrTwo, arrMerge, arrSize);

    sortDescend(arrMerge, arrSize * 2);

    cout << endl;

    cout << "Merged array in descending order:" << endl;
    for (int i = 0; i < arrSize * 2; i++)
    {
        cout << arrMerge[i] << endl;
    }

    cout << endl;
    return 0;

}
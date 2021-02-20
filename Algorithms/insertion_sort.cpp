
//This algorithm is similar to sorting pack of cards in hand. Select the element from 2nd position till last position.
//Swap and sort all element before the selected element in step 1.
// This algorithm can be used to find number of inversions in an array

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int ar[], int n)
{
    int temp;
    for(int i = 1; i < n; i++)
    {
        int j = i-1;
        int key = ar[i];
        while(j >= 0)
        {
            if(ar[j] > key)
            {
                ar[j+1] = ar[j];
                ar[j] = key;
            }
            j--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    insertion_sort(ar, n);
    return 0;
}

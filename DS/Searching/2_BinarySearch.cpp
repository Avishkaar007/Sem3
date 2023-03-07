#include <iostream>
using namespace std;

template <class D>

int binSearch(D list[], D toSearch, int sz)
{
    int f = 0;
    int l = sz - 1;

    while (f <= l)
    { // 1 3 5 7 9 11 13 15 17
        int mid = (f + l) / 2;
        if (list[mid] == toSearch)
        {
            return mid;
        }
        else if (list[mid] < toSearch)
        {
            f = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int list[] = {1, 3, 5, 7, 9};
    int toSearch;
    cout << "Enter element to be searched : ";
    cin >> toSearch;
    int sz = sizeof(list) / sizeof(list[0]);
    cout << "Element Found at index " << binSearch(list, toSearch, sz) << endl;
}
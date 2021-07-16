[6:24 PM, 7/15/2021] Tanu??: #include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to find the frequency of each element in a sorted array
void findFrequency(int arr[], int n, unordered_map<int, int> &count)
{
    // if every element in subarray `arr[0…n-1]` is equal,
    // then increment the element count by `n`
    if (arr[0] == arr[n - 1])
    {
        count[arr[0]] += n;
        return;
    }
 
    // divide the array into left and right subarray and recur
    findFrequency(arr, n/2, count);
    findFrequency(arr + n/2, n - n/2, count);
}
 
int main()
{
    int arr[] = { 2, 2, 2, 4, 4, 4, 5, 5, 6, 8, 8, 9 };
    int n = sizeof(arr) / sizeof(int);
 
    // find the frequency of each array element and store it in a map
    unordered_map<int, int> map;
    findFrequency(arr, n, map);
 
    // print the frequency
    for (auto &p: map) {
        cout << p.first << " occurs " << p.second << " times\n";
    }
 
    return 0;
}

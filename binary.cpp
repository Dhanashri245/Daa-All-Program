#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int LOW, int UP) {
    if (UP >= LOW) {
        int mid = (LOW +UP)/ 2;
        // If found at mid, then return it
        if (array[mid] == x)
            return mid;
        // Search the left half
        if (array[mid] > x)
        return binarySearch(array, x, LOW, mid - 1);
      // Search the right half
        return binarySearch(array, x, mid + 1, UP);
    }
    return -1; // Element not found
}
int main() {
    int array[50];
    
    int i,n;
    cout<<"Enter size of array:\n";
    cin>>n;
    cout<<"Enter the elements in array:\n";
    for(i=0;i<n;i++)
        cin>>array[i];
   int x;
    cout << "Enter the element you want to search: ";
    cin >> x;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        cout << "Element not found";
    else
       cout << "Element is found at index " << result;
    return 0;
}


/* output*/

/*  Enter size of array:
10
Enter the elements in array:
7
3
26
78
45
12
78
35
98
44
Enter the element you want to search: 3
Element is found at index 1    

Enter size of array:
10
Enter the elements in array:
11
56
35
89
56
45
23
90
55
87
Enter the element you want to search: 22
Element not found     */
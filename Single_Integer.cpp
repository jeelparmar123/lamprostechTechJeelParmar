#include <iostream>
using namespace std;
 
int solve(int arr[], int ar_size)
{
    // Do XOR of all elements and return
    //same solution we can do it in for loop manner but it will go into the o(n^2) time complexity but XOR will do in a o(n).
    int ans = arr[0];
    for (int i = 1; i < ar_size; i++)
        ans = ans ^ arr[i];    //by doing OR identical elements will gets cancel out
 
    return ans;          //solution works in O(n) time.
}
 
int main()
{
    
    int size=0;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"\nEnter array:\n";
    for(int i=0; i<size; i++){
        cout<<"Insert element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout << "Element occurring once is "<< solve(arr, size);
    return 0;
}

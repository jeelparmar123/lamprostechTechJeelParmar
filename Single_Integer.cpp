#include <iostream>
using namespace std;
 
int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];    //by doing OR identical elements will gets cancel out
 
    return res;
}
 
int main()
{
    
    int size=0;
    cout<<"Enter the size of the array:";
    cin>>size;
    int ar[size];
    cout<<"\nEnter array:\n";
    for(int i=0; i<size; i++){
        cout<<"Insert element "<<i+1<<": ";
        cin>>ar[i];
    }
    cout << "Element occurring once is "<< findSingle(ar, size);
    return 0;
}

/*Smallest Number
You are given an array a with N integers and an integer K. Output the smallest number in the array which occurs exactly K times in an array. There will always be a number that is occurring K times.*/
#include <iostream>
using namespace std;
int main(){
    int n, i;
    cout << "Enter Number of Intergers: ";
    cin>>n;
    int a[n];
    cout << "Enter array Intergers: ";
    for (i=0; i<n; i++)
    cin>>a[i];
    int k;
    cout << "Enter number of time an Interger occur: ";
    cin>>k;
    int freq[n];
    for(i=0; i<n; i++)
        freq[i]=0;
    for(i=0; i<n; i++)
        freq[a[i]]++;
    for(i=0; i<n; i++)
        if(freq[i]==k) 
        {
            cout<<i<<endl;
            break;
        }
    return 0;
}

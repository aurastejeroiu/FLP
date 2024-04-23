/*9. a. Invert a list
b. Determine the maximum element of a numerical list.*/

#include <iostream>
using namespace std;

void invert_list(int n, int v[100], int i, int inverted[100], int j){
    if(i<n)
    {
        inverted[j]=v[i];
        invert_list(n,v,i+1,inverted,j-1);
    }

}
 void Max_El(int n, int v[100], int &Max)
 {
    if(n>=0)
    {
        if(v[n]>Max)
            Max=v[n];
        Max_El(n-1,v,Max);
    }
 }

int main() {
    int v[100],n,i,j,inverted[100];
    cout<<"n=";cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>v[i];
        }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    invert_list(n,v,0,inverted,n-1);
    for(i=0;i<n;i++)
        cout<<inverted[i]<<" ";
    cout<<endl;
    int Max=0;
    Max_El(n-1,v,Max);
    cout<<"The maximum value is:";cout<<Max;
    return 0;
}

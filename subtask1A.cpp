#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int n,m;
    cout<<"enter the numbers of row: ";
    cin>>m;
    cout<<"enter the numbers of colum: ";
    cin>>n;
    int matA[m][n],matB[n][m];
    cout<<"enter elements of rectangular matrix A: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matA[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            matB[j][i]=matA[i][j];
        }
    }
    cout<<"transpose of matrix A is matrix B:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}


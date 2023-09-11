#include<iostream>
using namespace std;
int  main()
{
    int i,j,a[10][10],b[10][10],c[10][10],d[10][10],n,m;
    cout<<"\nenter the number of row and column of matrix A and B:";
    cin>>n>>m;
    cout<<"enter the element of matrix A:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nenter the element of matrix in B:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"\nthe resultant matrix c=a+b:\n";
    for(i=0; i<n; i++)
            {
    for (j=0;j<m;j++)
    {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n the resultant matrix d=a-b";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
}
}
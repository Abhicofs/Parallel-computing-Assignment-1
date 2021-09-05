#include<bits/stdc++.h>
using namespace std;
int main()
{

    
    int m,n,p;
    cout<<"Enter the size of m,n,p : ";
    cin>>m>>n>>p;

    int a[m][n],b[n][p];
    int mul[m][p];
    float nnz1,spa,nnz2,spb;

    cout<<"Enter the sparsity of first matrix : ";
    cin>>spa;
    cout<<"Enter the sparsity of second matrix : ";
    cin>>spb;
    //Now calculate the Non zero value using sparsity
    nnz1  = ((m*n)-ceil(spa*m*n));
    nnz2 = ((n*p)- ceil(spb*n*p));
    srand(time(0));
    int row1,col1;
    for(int i=0;i<nnz1;i++)
    {
        row1 = rand()%m;
        col1 = rand()%n;
        a[row1][col1] = rand();
    } 
    int row,col;
    for(int i=0;i<nnz2;i++)
    {
        row = rand()%n;
        col = rand()%p;
        b[row][col] = rand();
    } 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<n;k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    
  /*  for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<"Matrix Multiplication of A and B :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }


}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,spa,spb;
    cout<<"Enter the value of m, n , p : ";
    cin>>m>>n>>p;
    int a[m][n]={0};
    int b[n][p] = {0};
    int nnz1,nnz2;
    cout<<"Enter the sparsity of spa and spb : ";
    cin>>spa>>spb;
    nnz1  = ((m*n)-ceil(spa*m*n));
    nnz2 = ((n*p)- ceil(spb*n*p));
    for(int i=0;i<nnz1;i++)
    {
        a[rand()%m][rand()%n] = rand();
    }
    for(int j=0;j<nnz2;j++)
    {
        b[rand()%n][rand()%p] = rand();
    }

    int mul[m][p];
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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }

}
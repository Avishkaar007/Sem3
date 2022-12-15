#include<iostream>
 
using namespace std;
 
int main()
{
    int row,col;

    cout<<"Enter the no. of rows of matrix :- ";
    cin>>row;

    cout<<"Now, Enter the no. of columns of matrix :- ";
    cin>>col;

   
    int matrix[row][col];

     cout<<"Enter the elements of matrix :- ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    cout << "Lower triangular matrix : \n";
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Upper triangular matrix: \n";  
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Diagonal matrix: \n";      
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
           if (i == j)
            cout << matrix[i][j] << " ";
           else
             cout << "0" << " ";
        }
       cout << endl;
    }
         
    return 0;
}
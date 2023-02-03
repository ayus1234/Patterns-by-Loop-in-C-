#include<iostream>
using namespace std;
int main()
{
    int row,col,flag,num;
    cout<<"Enter the number of rows "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        flag=1;
        if(row==1||row==2||row==num)
        {
            for(col=1;col<=2*num-1;col++)
            {
                if(col>=(num+1)-row && col<=(num-1)+row && flag)
                {
                    cout<<"* ";
                    flag=0;
                }
                else
                {
                    cout<<"  ";
                    flag=1;
                }
            }
        }
        else
        {
            for(col=1;col<=num-row;col++)
            {
                cout<<"  ";
            }

            cout<<"* ";

            for(col=1;col<=2*row-3;col++)
            {
                cout<<"  ";
            }

            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
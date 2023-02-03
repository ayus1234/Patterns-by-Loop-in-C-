#include<iostream>
using namespace std;
int main()
{
    int row,col,count,num;
    cout<<"Enter the number of rows "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        count=row;
        if(row==1||row==num-1||row==num)
        {
            for(col=1;col<=num;col++)
            {
                if(col<=(num+1)-row)
                {
                    cout<<count<<" ";
                    count++;
                }
            }
        }
        else
        {
            cout<<count<<" ";
            count++;
            for(col=1;col<=(num-1)-row;col++)
            {
                cout<<"  ";
                count++;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int row,col,num;
    cout<<"Enter the number  "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        if(row==1||row==num-1||row==num)
        {
            for(col=1;col<=num;col++)
            {
                if(col<=(num+1)-row)
                    cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(col=1;col<=(num-1)-row;col++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
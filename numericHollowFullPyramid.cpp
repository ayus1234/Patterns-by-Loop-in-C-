#include<iostream>
using namespace std;
int main()
{
    int row,col,count,num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        for(count=1;count=num-row;count++)
            cout<<"   ";
        for(col=1;col<=row;col++)
        {
            if(row==1||col==1||row==num||col==row)
                cout<<"   "<<col<<"   ";
            else
                cout<<"       ";
        }
        cout<<endl;
    }
    return 0;
}
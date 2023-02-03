#include<iostream>
using namespace std;
int main()
{
    int row,col,num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        if(row==1||row==num)
        {
            for(col=1;col<=2*num-1;col++)
            {
                cout<<"* ";
            }
        }

        else
        {
            cout<<"* ";

            for(col=1;col<=(2*num-1)-2;col++)
            {
                cout<<"  ";
            }

            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
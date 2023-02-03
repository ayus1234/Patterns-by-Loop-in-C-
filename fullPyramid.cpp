#include<iostream>
using namespace std;
int main()
{
    int row,col,num,flag;
    cout<<"Enter the number "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        flag=1;
        for(col=1;col<=2*num+1;col++)
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
        cout<<endl;
    }
    return 0;
}
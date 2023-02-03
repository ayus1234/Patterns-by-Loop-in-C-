#include<iostream>
using namespace std;
int main()
{
    int row,col,num,count;
    cout<<"Enter the number "<<endl;
    cin>>num;
    for(row=1;row<=num;row++)
    {
        count=row;
        for(col=1;col<=2*num-1;col++)
        {
            if(col>=(num+1)-row && col<=(num-1)+row)
            {
                cout<<count<<" ";
                col<5?count++:count--;
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
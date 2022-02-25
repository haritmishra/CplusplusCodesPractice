#include<iostream>
using namespace std;
int main(){
    int n=100;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if (i%3==0)
        {
            /* code */
            continue;
        }
        else
        {
            cout<<" "<<i;
        }
         
        
    }
    cout<<"\nNumbers that are divisible by 3 are removed"<<endl;
    return 0;
}
/* 2D array initialization, take input, displau output, addition and sub
 */
#include <iostream>
using namespace std;
int main()
{
    int myarray[5][5];// declaration
    int myarray1[2][2]={1,2,3,4};
    int myarray2[3][3]={{1,2,3},{2,2,2},{3,3,3}};
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<myarray2[i][j]<<" ";
        }
        cout<<endl;
    }

}

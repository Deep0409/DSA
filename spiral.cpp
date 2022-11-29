
#include <iostream>

using namespace std;

int main()
{int a[4][4]={0},top=0,bottom=3,left=0,right=3,i,j;
cout<<"Enter elements\n";
for( i=0;i<4;i++)
{for(j=0;j<4;j++)
cin>>a[i][j];}

cout<<endl;

while(top<=bottom&&left<=right)
{
    for(int i=left;i<=right;i++)
    cout<<a[top][i]<<" ";
    top++;
    
    
    for(int i=top;i<=bottom;i++)
    cout<<a[i][right]<<" ";
    right--;;
    
   
    for(int i=right;i>=left;i--)
    cout<<a[bottom][i]<<" ";
    bottom--;
    
    
    for(int i=bottom;i>=top;i--)
    cout<<a[i][left]<<" ";
    left++;
    
    
    
}
    return 0;
}

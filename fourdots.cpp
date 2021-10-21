#include <iostream>
int setboard(int,int);
int arr[6][7]={{0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0}};
const char p='r'; const char pp='b'; const char ppp='y' ;
const char pppp='g';
int playing(int,int);
int checkfour();
int main() {
    // Write C++ code here
    std::cout << "Hello world!\n";
    setboard(6,7);
    playing(6,7);
    checkfour();
    return 0;
}
int setboard(int r,int c)
{   int i,j;
      for(i=0; i<=r; i++)
        {
                for(j=0; j<=c; j++)
                {
                       std::cout<<" "<<arr[i][j]<<" ";
                }
                std::cout<<"\n";
        }
         return 0;
}
int playing(int r,int c)
{ 
    int i,j,q;
    std::cout<<"player 1\n";
    std::cout<<"Enter row and column";
    std::cin>>arr[i][j];
    for(i=0;i<=arr[i][j];i++)
    {
        if(arr[i][j]==0)
        {
            arr[i][j]=p;
        }
    }
    for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                       std::cout<<" "<<arr[i][j]<<" ";
                }
                std::cout<<"\n";
        }
        std::cout<<"player 2\n";
    std::cout<<"Enter row and column";
    std::cin>>arr[i][j];
    for(i=0;i<=arr[i][j];i++)
    {
        if(arr[i][j]==0)
        {
            arr[i][j]=pp;
        }
    }
    for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                       std::cout<<" "<<arr[i][j]<<" ";
                }
                std::cout<<"\n";
        }
        std::cout<<"player 3\n";
    std::cout<<"Enter row and column";
    std::cin>>arr[i][j];
    for(i=0;i<=arr[i][j];i++)
    {
        if(arr[i][j]==0)
        {
            arr[i][j]=ppp;
        }
    }
    for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                       std::cout<<" "<<arr[i][j]<<" ";
                }
                std::cout<<"\n";
        }
        std::cout<<"player 4\n";
    std::cout<<"Enter row and column";
    std::cin>>arr[i][j];
    for(i=0;i<=arr[i][j];i++)
    {
        if(arr[i][j]==0)
        {
            arr[i][j]=pppp;
        }
    }
    for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                       std::cout<<" "<<arr[i][j]<<" ";
                }
                std::cout<<"\n";
        }
         return 0;
}
int checkfour()
{ int i,j;
    std::cout<<"In checkfour function";
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]==4)  //checking if four dots are in a line(horizontal)
            {
                std::cout<<"4 dots connected";
            }
        }
    }
    for(j=0;j<7;j++)
    {
       for(i=0;i<3;i++)
       {
           if(arr[j][i]+arr[j][i+1]+arr[j][i+2]+arr[j][i+3]==4)//checking if four dots are in a line(vertical)
           {
               std::cout<<"4 dots connected";
           }
       }
       
    }
    
    return 0;
}
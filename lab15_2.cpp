#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<< A[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void inputMatrix(double a[][N]){
    for(int i=0;i<N;i++){
        cout<<"Row "<<i+1<<": ";
        for(int j=0;j<N;j++){
            cin>>a[i][j];
        }
    
    
    }
}

void findLocalMax(const double a[][N], bool b[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++){
            if(a[i][j]>=a[i+1][j] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i][j-1])
            {
                b[i][j]=1;
            }
            else{
                 b[i][j]=0;
            }
        }
    }
    
     for(int i=0;i<N;i++)
     {
            for(int j=0;j<N;j++)
            {
                if(i==0 or i==N-1 or j==0 or j==N-1)
                {
                    b[i][j]=0;
                }
            }
    }
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
int main() {
    cout << "Hello world!"<<endl;
    int i,j;
    int matrix[4][4];
    int a=1;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           matrix[i][j]=a; a++;
           cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    vector<int> v;
        int m=4;
        int n=4;
        int k= m<n?m:n;
        
        k=k%2==0?k/2:(k+1)/2;
        for(i=0;i<k;i++){
            for(j=i;j<n-i;j++) v.push_back(matrix[i][j]);
            for(j=i+1;j<m-i;j++) v.push_back(matrix[j][n-i-1]);
            for(j=n-i-2;j>=i;j--) v.push_back(matrix[n-i-1][j]);
            for(j=m-i-2;j>i;j--) v.push_back(matrix[j][i]);
        }
        cout<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<"\t";
    return 0;
}

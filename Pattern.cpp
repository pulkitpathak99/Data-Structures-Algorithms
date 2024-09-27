#include <iostream>
using namespace std;

int solidrect(int m,int n) {

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}

int hollowrect(int n,int m){
    for (int row=0; row<m; row++){
        for (int col=0; col<n; col++){
            if (row>=1 && col>=1 && row<=m-2 && col<=n-2){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void halfpyramid(int n){
    for (int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if (row-col>=0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void invertedhalfpyramid(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row+col<=n-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void numhalfpyr(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++ ){
            cout<<col;
            
        }
        cout<<endl;
    }
}
void fullpyr(int n){
    int c= n+n;
    for(int row=1; row<n+1; row++){
        for(int col=1; col<c; col++){
            if((n-row)>=col || (n+row)<=col || (row+col)%2==n%2){
                cout<<" ";
            }
            else{
                cout<<"x";
            }
        }
        cout<<endl;
    }
}

int main() {
    char a;
    int m,n;
    cout << "Enter your selection: ";
    cin >> a;
    switch (a){
    case 'A':
        cout<<"Row Count ";
        cin>>m;
        cout<<"Column Count ";
        cin>>n;
        solidrect(m,n);
        break;
    
    case 'B':
        cout<<"Row Count ";
        cin>>m;
        cout<<"Column Count ";
        cin>>n;
        hollowrect(m,n);
        break;
    case 'C':
        cout<<"Enter Size ";
        cin>>n;
        halfpyramid(n);
        break;
    case 'D':
        cout<<"Enter Size ";
        cin>>n;
        invertedhalfpyramid(n);

    case 'E':
        cout<<"Enter Size ";
        cin>>n;
        numhalfpyr(n);
    case 'F':
        cout<<"Enter Size ";
        cin>>n;
        fullpyr(n);

    }
    return 0;



}

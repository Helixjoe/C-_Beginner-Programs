#include <iostream>
using namespace std;
// 0-1 Pattern
int main() {
    
    int n;
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if(i%2==0 && j%2!=0){
                cout<<"0";
            }
            else if(i%2!=0 && j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
	return 0;
}

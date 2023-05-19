#include <iostream>
#inlcude "Lib.h"

int main(){
  char n;
  cin>>n;
  char x=0;
  x=funzione1(n);
  if(x==0) {
   cout<<"errore"<<endl;
  }else 
    cout<<x<<endl;
    return 0;
}

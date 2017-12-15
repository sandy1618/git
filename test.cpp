#include <iostream>
using namespace std;
int main()
{
int t,T,N ; cin>>T;
for(t=0; t<T; t++){
int N; cin>>N;
int k= N%12;


switch(k){


case 1: cout<<N+11<<" WS"<<endl;break;
case 8: cout<<N-3 <<" MS"<<endl;break;
case 9: cout<<N-5 <<" AS"<<endl;break;
case 10:cout<<N-7 <<" AS"<<endl;break;
case 11:cout<<N-9 <<" MS"<<endl;break;
case 2: cout<<N+9<<" MS"<<endl;break;
case 3: cout<<N+7<<" AS"<<endl;break;
case 4: cout<<N+5 <<" AS"<<endl;break;
case 5: cout<<N+3 <<" MS"<<endl;break;
case 6: cout<<N+1 <<" WS"<<endl;break;

case 7: cout<<N-1 <<" WS"<<endl;break;
case 0: cout<<N-11 <<" WS"<<endl;
}

}
}

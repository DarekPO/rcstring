#include "rcstring.h"

int main()
{
/*rcstring a,b,c;
a="10";
b="ala ma kota";
cout << "----------------------------"<< endl;

cout << a << " " << b << endl; // 10 ala ma ma kota
cout << "----------------------------"<< endl;
c=a+b;
cout << "----------------------------"<< endl;
cout << c<<endl; // 10ala ma kota

cout << "----------------------------"<< endl;

c=a+rcstring(" ")+b;

cout << "----------------------------"<< endl;
cout << c << endl; //10 ala ma kota
*/



rcstring d("ALA");
cout << "----------------------------"<< endl;
cout << d <<endl; //a
cout << "----------------------------"<< endl;
/*d+="ula";
cout << "----------------------------"<< endl;
cout << d << endl; //aula
cout << "----------------------------"<< endl;
d+="15";
cout << "----------------------------"<< endl;
cout << d << endl; //aula15

cout << "----------------------------"<< endl;
cout << d[3]<<endl; //a
cout << "----------------------------"<< endl;

d[3]='b';
cout << "----------------------------"<< endl;
cout << d << endl; //aulb15
d[2]=d[1]=d[0];
cout << d << endl; //aaab15*/
d.toLower();
cout << d <<endl;
d.Left(2);
cout<<d<<endl;
return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
class String
{
char v[50];
int len;
public:
String() {len=0;}
String(char t[20]){len =strlen(t); strcpy(v,t); }
// String(string & t){ len = t.Stringlen; strcpy(v,t.v);}
String add(String t1,String t2)
{
String temp;
strcpy(temp.v,t1.v);
strcat(temp.v,t2.v);
return(temp);
}

void display()
{
cout<<v;
}
};
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
String t3;
char a[50];
char b[50];
cin>>a>>b;
String t1(a),t2(b);
t3= t3.add(t1,t2);
t3.display();
return 0;
}

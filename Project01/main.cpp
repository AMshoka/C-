#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ int basis,remain1,remain2,tedad1,tedad2,remain3,remain4,t,answer,sumation,carry,total,p,j,felag,felag1,felag2,aa,aaaa,bb,bbbb,aaaaa,bbbbb,s,w,f,z,q;
float number1,number2,aaa,bbb,a,b,c,d,sum;
answer=1;
while (answer)
{

p=1;
carry=0;
total=0;
felag=1;
felag1=1;
felag2=1;
s=1;
w=1;
f=1;
z=1;

cout<<"on what basis are these numbers"<<endl;
cin>>basis;
while(felag)
{cout<<"please enter two numbers"<<endl;
cin>>number1>>number2;
c=number1;
d=number2;
felag1=1;
felag2=1;
while (felag1)
{
    a=number1*s;
    aa=a;
    aaa=a-aa;
    if(aaa==0)
    {
        aaaa=a;
        aaaaa=a;
        tedad1=a;
       felag1=0;
    }
    else
        s=s*10;
}
while (felag2)
{
    b=number2*w;
    bb=b;
    bbb=b-bb;
    if(bbb==0)
    {
        bbbb=b;
        bbbbb=b;
        tedad2=b;
        felag2=0;
    }
    else
        w=w*10;
}
//if
/*while(tedad1>0)
{
    f=f*10;
    tedad1=tedad1/10;
}
while(tedad2>0)
{
    z=z*10;
    tedad2=tedad2/10;
}
if (f>=z)
{
    q=f/z;
}
else
    q=z/f;*/
    if(s>=w)
    {
        q=s/w;
    }
    else
        q=w/s;
if(aaaa<bbbb)
{
aaaa=aaaa*q;
aaaaa=aaaaa*q;
j=aaaa;
aaaa=bbbb;
bbbb=j;
//bbbb=bbbb*q;
//bbbbb=bbbbb*q;

}
else
{bbbb=bbbb*q;
bbbbb=bbbbb*q;
}
while (aaaa>0)
{
    remain3=aaaa%10;
    remain4=bbbb%10;
    if(remain3<basis && remain4<basis)
    {
        aaaa=aaaa/10;
        bbbb=bbbb/10;
        felag=0;
    }
    else
        break;
}
}
if (bbbbb>aaaaa)
{
    t=bbbbb;
    bbbbb=aaaaa;
    aaaaa=t;
}

while (aaaaa>0)
{
    remain1=aaaaa%10;
    remain2=bbbbb%10;
    sumation=remain1+remain2+carry;
    if(sumation>basis)
    {
        sumation=sumation-basis;
        carry=1;

    }
   else if(sumation==basis)
    {
        sumation=sumation-basis;
        carry=1;

    }

  else  if(sumation<basis)
    {
        sumation=sumation;
        carry=0;
    }
    total=total+(sumation*p);
    p=p*10;
    aaaaa=aaaaa/10;
    bbbbb=bbbbb/10;

}
sum=total+(carry*p);
if(s>=w)
{
    sum=sum/s;
}
else
    sum=sum/w;
    cout<<"["<<c<<"]"<<"+"<<"["<<d<<"]"<<","<<"in basis "<< "["<<basis<<"] "<<"is="<<sum<<endl;
    cout <<"do you want to continue this program???(if your answer is yes please enter (1) else enter (0)"<<endl;
    cin >>answer;
}


    getch();
    return 0;
}

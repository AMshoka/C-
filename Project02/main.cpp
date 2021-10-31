#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x,qual;
    qual=1;

    cout<<"                                                              {HELLO,IS ALSO PLEASED THAT THE PROGRAM YOU'VE CHOSEN}"<<endl;






    cout<<"-----------------------------------------------------this program was written for addition and multiplication of large numbers---------------------------------------------"<<endl;


    while (qual)
    {
        int u;




    cout<<"                                             if you want to multiply please enter key (1) , if you want to collect please enter key (0)"<<endl;
    cin>>x;
    if(x==1)
    {
        cout<<"(you've chosen multiplication operator)"<<endl;

     int i,c,j,t,s,ss,k,cc,b,d,q,v,p;
    char number1[400];
    char number11[400];
    char number1111[400];
    char number2[400];
    char number22[400];
    char number222[400];
    int number111[400];
    int sum[400];
    int sum1[400];
    for(i=0;i<100;i++)
    {
        sum[i]=0;
    }
    cc=0;
    c=0;
    d=0;
    q=1;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"please enter number1=";
    cin>>number1;
    cout<<endl;
    cout<<"please enter number2=";
    cin>>number2;
    for(i=0;number1[i];i++)
    {

    }
    for(j=0;number2[j];j++)
    {

    }
    if(i<j)
    {
        ss=j-i;
        for(k=0;k<i;k++)
        {
            number11[k+ss]=number1[k];

        }
        number11[j]='\0';
        for(k=0;k<ss;k++)
        {
            number11[k]='0';
        }
        for(j=0;number2[j];j++)
        {
            number22[j]=number2[j];
        }
        number22[j]='\0';
        s=j-1;
    }
    if(j<i)
    {
        ss=i-j;
        for(k=0;k<j;k++)
        {
            number22[k+ss]=number2[k];

        }
        number22[i]='\0';
           for(k=0;k<ss;k++)
        {
            number22[k]='0';
        }
        for(i=0;number1[i];i++)
        {
            number11[i]=number1[i];
        }
        number11[i]='\0';
        s=i-1;

    }
    if(i==j)
    {
         for(j=0;number2[j];j++)
        {
            number22[j]=number2[j];
        }
        number22[j]='\0';

           for(i=0;number1[i];i++)
        {
            number11[i]=number1[i];
        }
        number11[i]='\0';
        s=j-1;


    }
    for(i=s;i>=0;i--)
    {
        number11[i]=number11[i]-48;
        number22[i]=number22[i]-48;
    }

    b=0;
    for(i=s;i>=0;i--)
    {
        cc=0;

        for(j=s;j>=0;j--)
        {
                 d=0;


            sum[b]+=(number11[i]*number22[j])+cc;
            if(sum[b]>=10)
            {
                while(sum[b]>=10)
                {
                    sum[b]=sum[b]-10;
                    d=d+1;
                }
                cc=d;
            }
            else
            {
                cc=0;
            }
            b=b+1;;
            v=b;

        }
        sum[v]=cc;


        b=q;
        q++;

    }
   sum[v]='\0';

  int r;
   r=0;
   for(i=v-1;i>=0;i--)
   {
       if(sum[i]==0)
       {
           r=r+1;
       }
       if(sum[i]!=0)
       {
           break;
       }
   }
  v=v-r;
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"multiplication of number("<<number1<<")and("<<number2<<")is=";
   if(cc!=0)
    {
        cout<<d;
    }
 for(i=v-1;i>=0;i--)
    {

      cout<<sum[i];

    }


}

cout<<endl;
cout<<endl;
cout<<endl;


   if(x==0)

  {
    cout<<"you've chosen summation operator"<<endl;


   int i,c,j,t,s,ss,k;
    char number1[100];
    char number11[100];
    char number2[100];
    char number22[100];
    int sum[150];
    c=0;
    cout<<endl;
    cout<<endl;
    cout<<"please enter number1=";
    cin>>number1;
    cout<<endl;
    cout<<endl;
    cout<<"please enter number2=";
    cin>>number2;

    for(i=0;number1[i];i++)
    {

    }
    for(j=0;number2[j];j++)
    {

    }
    if(i<j)
    {
        ss=j-i;
        for(k=0;k<i;k++)
        {
            number11[k+ss]=number1[k];

        }
        number11[j]='\0';
        for(k=0;k<ss;k++)
        {
            number11[k]='0';
        }
        for(j=0;number2[j];j++)
        {
            number22[j]=number2[j];
        }
        number22[j]='\0';
        s=j-1;
    }
    if(j<i)
    {
        ss=i-j;
        for(k=0;k<j;k++)
        {
            number22[k+ss]=number2[k];

        }
        number22[i]='\0';
           for(k=0;k<ss;k++)
        {
            number22[k]='0';
        }
        for(i=0;number1[i];i++)
        {
            number11[i]=number1[i];
        }
        number11[i]='\0';
        s=i-1;

    }
    if(i==j)
    {
         for(j=0;number2[j];j++)
        {
            number22[j]=number2[j];
        }
        number22[j]='\0';

           for(i=0;number1[i];i++)
        {
            number11[i]=number1[i];
        }
        number11[i]='\0';
        s=j-1;


    }
    for(i=s;i>=0;i--)
    {
        sum[i]=(number11[i]+number22[i]+c)-96;
        if(sum[i]>=10)
        {
            sum[i]=sum[i]-10;

            c=1;
        }
        else
        {
            c=0;
        }
    }
    cout<<"summation of number("<<number1<<") and("<<number2<<")is=";
    if(c==1)
    {
        cout<<1;
    }
    for(i=0;i<=s;i++)
    {
        cout<<sum[i];
    }
  }
   cout<<endl;
  cout<<endl;
   cout<<"                                      DO YOU WANT TO CONTINUE ???????(IF YOUR ANSWER IS ' YES ' PLEASE ENTER KEY(1),ELSE PLEASE ENTER KEY (0)"<<endl;
   cin>>u;
   cout<<endl;
   cout<<endl;
   if(u==0)
   {
       cout<<"                                                                            thanks for your choice   " <<endl  ;
       cout<<endl;
       cout<<endl;
        cout<<"                                                                                 GOODBYE"<<endl;
       qual=0;
   }
   if(u==1)
{

     cout<<endl;
    cout<<endl;


     cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
    }

    getch();
    return 0;
}

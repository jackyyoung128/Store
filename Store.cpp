#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

#define N 1000
int n,num;

struct node
{
    string name;
    int n;
}users[N];

void Introduce ()
{
	printf ("*******************************************\n");
	printf ("*                Introduce                *\n");
	printf ("*                                         *\n");
	printf ("*   If you want to in.Please input like:  *\n");
	printf ("*             in name number              *\n");
	printf ("*                                         *\n");
	printf ("*  If you want to sell.Please input like: *\n");
	printf ("*             out name number             *\n");
	printf ("*                                         *\n");
	printf ("*******************************************\n");
	printf ("If you want to continue.\n");
	printf ("Please input any key.\n");
	getchar ();
} 

void in (string name, int _num)
{
    int flag=1;
    for (int i=1; i<=num; i++)
    {
        if ( name == users[i].name)
        {
            flag=0;
            users[i].n += _num;
            break ;
        }
    }

    if ( flag)
    {
        users[++num].name = name;
        users[num].n = _num;
    }
    return ;
}

void out (string name, int _num)
{

    for (int i=1; i<=num; i++)
    {
        if ( users[i].name == name)
        {
            users[i].n -= _num;
            break;
        }
    }
    return ;
}

void input ()
{
	printf ("please input tests number:") ;
    scanf ("%d\n",&n);

    for (int i=1;i<=n;i++)
    {
        string way,name;
        int _num;
        cin>> way>> name>> _num;
        if ( way == "in")
        {
            in (name, _num);
        }
        else {
            out (name, _num);
        }
    }
    return ;
}

void check ()
{
    for (int i=1; i<=num; i++)
    {
        cout<< users[i].name<< ' '<< users[i].n<< endl;
    }
    return ;
}

int main()
{
//    freopen ("a.in","r",stdin);
//    freopen ("a.out","w",stdout);
    
    Introduce ();
    input ();
    check ();
    return 0;
}

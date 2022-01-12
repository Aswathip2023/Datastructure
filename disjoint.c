#include <stdio.h>
void unionset(int,int);
int Find(int);
int find(int);
int main()
{

    int n,S[50],i,a,b;
    printf("\nEnter the size of first array ");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
    printf("\nEnter the element of first array ");
    scanf("%d",&S[i]);
    }
    printf("\n enter the value of a");
    scanf("%d",&a);
    printf("\n enter the value of b");
    scanf("%d",&b);
    unionset(a,b);

}
    void unionsets(int a, int b) {
    a = Find(a);
    b = find(b);
    if (a != b)
    {

        S[b] = a;
    }

    }
        int Find(a) {
     If S[a] = 0, return a;
     else
Find(S[a]);
      return;
           }

int find(b) {
     If S[b] = 0, return b;
     else
find(S[b]);
      return;
           }

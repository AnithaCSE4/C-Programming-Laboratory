#include<stdio.h>
int main()
{
    int l,n,c=1,i,j;
    scanf("%d%d",&l,&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>l||a[i]<1)
        printf("False");
        c=0;
        return 0;
    }
}
if(c)
{
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++) 
      {
          if(a[i]==a[j])
          {
              c=0;
              break;
              return 0;
          }
      }
    }
}
if(c)
{
    int as=1,de=1; 
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            as=0;
        }
    }
}
if( a[i] > a[i-1] )
{
    de=0;
}
  }
if(as  = = 1||de = = 1)
{
    c=0;
}
  }
  if(c)
  {
      printf("True");
  }
else
{
    printf("False");
}

}








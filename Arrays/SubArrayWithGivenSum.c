#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    int n,s,start=0,end=0,sum=0,c=0;
	    scanf("%d%d",&n,&s);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        sum = sum + a[i];
	        if(sum>=s)
	        {
	            end = i;
	            while(sum>s && start<end)
	            {
	                sum = sum - a[start];
	                start++;
	            }
	            if(sum == s)
	            {
	                printf("%d %d\n",start+1,end+1);
	                c=1;
	                break;
	            }
	        }
	    }
           if(c==0)
           printf("-1\n");
         
	    
	    t--;
	}
	return 0;
}
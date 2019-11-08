#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    int n,sum=0,max_sum=-3267;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	            sum += a[i];
	            if(sum > max_sum)
	            {
	                max_sum = sum;
	            }
	            if(sum < 0)
	            {
	                sum = 0;
	            }
	    }
	    printf("%d\n",max_sum);
	    t--;
	}
	return 0;
}
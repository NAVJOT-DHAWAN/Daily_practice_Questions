#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n-1];
	    for(int i=1;i<=n-1;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    int total = n*(n+1)/2;
	    int sum = 0;
	    for(int i=1;i<=n-1;i++)
	    {
	        sum+=arr[i];
	    }
	    printf("%d\n",total-sum);
	    t--;
	}
	return 0;
}
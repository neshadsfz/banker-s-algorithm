#include<pthread.h>
int allo[10];
int max[10];
int need[10];
int flag;
int fl;
int i,j,k,p,b,n,r,g,cnt=0,id,newr;
int avail[10],seq[10];
void*thread1();
void*thread2();
pthread_mutex_t l,ll;
int main(){
	pthread_t t1;
	pthread_mutex_init(&l,NULL);
	pthread_mutex_init(&ll,NULL);	
	printf("Enter number of processes");
	scanf("%d",&n);
	printf("Enter number of resources");
	scanf("%d",&r);
	for(i=0;i<n;i++){
		printf("Enter details of p%d",i);
		printf("\nenter allocation\t");
		for(j=0;j<r;j++)
		scanf("%d",&allo[j]);
		printf("\nEnter max\t\t");
		for(j=0;j<r;j++)
			scanf("%d",&max[j]);
		flag=0;
	}

#include<stdio.h>
#include<math.h>
int ThuanNghich(int n){
	int tmp=n;
	int dao=0;
	while(n>0){
		dao=dao*10+n%10;
		n/=10;
		}
		if(tmp=dao) return 1;
		return 0;
}
int nguyento(int n){
	int i;
	if(n<2){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
	    }
	}
	return 1;
}
int uoc(int n){
	int i=0;
	int dem=0;
	for(i=2;i<n;i++){
		if(nguyento(i)==1&&n%i==0){
			dem++;
		}
		if (dem==3){
			return 1;
		}
	} return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	for(i=a;i<=b;i++){
		if(ThuanNghich(i)==1&&uoc(i)==1){
			printf("%d ",i);
		}
	}
return 0;
}

#include <stdio.h>

int result(int array[],int con){

	int i,a,b,count=0,s,result=0;

	for(i=0;;i++){		

		s = i % (con-1);



		if(array[s]>array[s+1]){

			a = array[s];

			array[s]=array[s+1];

			array[s+1]=a;

		}else{

			result += 1;

		}

		if(result==(con-2)){

			printf("sort終了\n");

			break;

		}

		if((i%(con-2))==0){

			result = 0;
	
			for(b=0;b<con;b++){

				if(b<con-1){

					printf(" %d",array[b]);

				}

				if(b==con-1){

					printf(" %d %d回目\n",array[con-1],count);

					sleep(1);

				}

			}

			count += 1;
	
		}

	}

	return 0;

}

int main(){

	int array[100];

	int i,a;

	printf("sortをします。\nいくつの要素をsortしますか？\n");

	scanf("%d",&a);

	for(i=0;i<a;i++){

		printf("array[%d] = ",i);

		scanf("%d",&array[i]);

	}

	result(array,a);

	return 0;

}

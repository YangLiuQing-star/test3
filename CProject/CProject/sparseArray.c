//#include<stdio.h>
//#include<stdlib.h>
//
///*
//	稀疏数组：非零元素的个数远小于0的个数
//	稀疏数组的压缩存储
//	思路分析：
//	1.定义稀疏数组，并进行初始化
//	2.将稀疏数组进行压缩
//	3.将压缩后的数组存盘
//*/
//
//int arr[6][6];
//
//void main(){
//	int i,j;
//	int sum = 0;//用来记录非零元素的个数
//	int count = 3;//用来记录稀疏数组的下标，因为下标为0,1,2的元素可直接赋值
//	int *sparseArr;
//	FILE * fp;
//	//计算稀疏数组的行数和列数
//	int row = sizeof(arr)/sizeof(arr[0]);
//	int col = sizeof(arr[0])/sizeof(int);
//	//1.初始化稀疏数组
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = 0;
//		}
//	}
//	arr[1][2] = 1;
//	arr[2][3] = 2;
//
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//2.将稀疏数组进行压缩处理
//	//2.1 得到原始数组的行数和列数以及非零元素的个数
//	//2.2 创建出稀疏数组
//	//2.3 遍历原始数组，将非零元素的行和列以及值赋值给稀疏数组
//	//2.4 将稀疏数组存盘
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			if(arr[i][j]!=0){
//				sum++;
//			}
//		}
//	}
//
//	sparseArr = (int *) malloc(3*(sum+	1)*sizeof(int));
//	sparseArr[0]=row;
//	sparseArr[1]=col;
//	sparseArr[2]=sum;
//
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			if(arr[i][j]!=0){
//				sparseArr[count] = i;
//				sparseArr[count+1] = j;
//				sparseArr[count+2] = arr[i][j];
//				count += 3;
//			}
//		}
//	}
//
//	for(i=0;i<(sum+1)*3;i++){			
//		if(i%3==0){
//			printf("\n");
//		}
//		printf("%d\t",sparseArr[i]);
//	}
//
//	//存盘
//	//创建文件指针
//	fp = NULL;
//	fp = fopen("map.data","w");
//	for(i=0;i<(sum+1)*3;i++){			
//		if(i%3==0&&i!=0){
//			fprintf(fp,"%c",'\n');
//		}
//		fprintf(fp,"%d",sparseArr[i]);
//	}
//	//关闭文件
//	fclose(fp);
//	//释放在堆区开辟的内存空间
//	//free(arr);
//
//	printf("\n稀疏数组存盘成功.........");
//	//printf("sum=%d\n",sum);
//	getchar();
//}
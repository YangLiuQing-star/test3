//#include <stdio.h>
//#include <stdlib.h>
//
//void showArr(int *arr, int row,int col){
//	int num = row*col;
//	int cnt = 0,i;
//	for(i = 0;i < num;i++){
//		
//			printf("%4d",*(arr+i));
//			cnt++;
//			if(cnt%row==0) printf("\n");
//	}
//}
//int main(){
//	char line[256];
//	char rlen,clen;
//	int i,j,ele;
//	int *arr;	//定义一个空间来放原始矩阵
//	FILE *f = fopen("map.data", "rb");
//	//先读第一行
//	fgets(line, 256, f);
//	ele =atoi(line);
//	rlen =ele/100;			//得到矩阵长度
//	clen =ele%100/10;		//得到矩阵宽度
//	
//	arr = (int *)malloc(sizeof(int)*rlen*clen);//根据矩阵长度宽度开辟空间
//	for(j = 0;j<rlen*clen;j++){*(arr+j) =0;} //先将所有的值赋值为0
// 
//	while (!feof(f) && !ferror(f)) {	//开始按行读取数据
//		fgets(line,sizeof(line),f);
//		
//		for(i = 0;i<rlen*clen;i++){
//			
//			int ele =atoi(line);	
//			int row = ele/100;	//得到行
//			int col = ele%100/10;	//得到列
//			int val = ele%10;//得到值
//			//rlen,clen = 6 1*6+2 =8--->1/2    2*6+3=15--->2/3
//			if((row*rlen+col)==i)	//如果此时的行列正好是目标行列，赋值即可
//				*(arr+i) = val;
//		}
//	}
//	showArr(arr,rlen,clen);
//    fclose(f);
//	getchar();
//    return 0;
//}
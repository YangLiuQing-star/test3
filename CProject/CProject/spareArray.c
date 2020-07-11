#include<stdio.h>

#define MAXSIZE 10

typedef struct {//非零元素的结构体
	int i,j;//保存非零元素的行号和列号
	int v;//保存非零元素的值
}Triple;

typedef struct {//矩阵的结构体
	Triple data[MAXSIZE];
	int m,n;//定义矩阵的行和列
}TSMatrix;

//初始化
void InitTriple(TSMatrix *m){
	int i,j,k,v;
	for(i=0;i<MAXSIZE;i++){
		
	}
}

void main()
{
		
}
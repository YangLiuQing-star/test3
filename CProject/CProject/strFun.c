//#include <stdio.h>
//#include <string.h> // 头文件中声明字符串相关的系统函数
//
//void main() {
//
//	char src[50] = "abcdefg", dest[50]; //使用字符数组表示两个字符数组(字符串) , 大小为50
//	char *str = "abcdff";//字符类型的指针来表示字符串
//	printf("str.len=%d", strlen(str)); //统计字符串的大小3
//	
//	//表示将 "hello" 拷贝到 src
//	//注意，拷贝字符串会将原来的内容覆盖
//	strcpy(src,"hello");//str = "hello"
//	printf("\nsrc=%s\n", src); //hello 
//
//	strcpy(dest, "尚硅谷");//dest = "尚硅谷"
//	//strcat 是将 src 字符串的内容连接到 dest ,但是不会覆盖dest原来的内容，而是连接!! 
//	strcat(dest, src); // "hello尚 硅谷"
//	printf("最终的目标字符串： dest=%s", dest);
//	getchar();
//
//}
//#include "MD5.h"
//
//using namespace std;
//
//int main()
//{
//	MD5_H("a");		// 0cc175b9c0f1b6a831c399e269772661
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////
#include "string.h"
#include "md5.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	MD5_CTX md5;
	MD5Init(&md5);                         //初始化用于md5加密的结构

	unsigned char encrypt[200];     //存放于加密的信息
	unsigned char decrypt[17];       //存放加密后的结果
	scanf("%s", encrypt);                 //输入加密的字符

	MD5Update(&md5, encrypt, strlen((char *)encrypt));   //对欲加密的字符进行加密
	MD5Final(decrypt, &md5);                                            //获得最终结果

	printf("加密前:%sn加密后:", encrypt);
	for (int i = 0; i < 16; i++)
		printf("%2x ", decrypt[i]);

	printf("nnn加密结束!n");

	return 0;
}
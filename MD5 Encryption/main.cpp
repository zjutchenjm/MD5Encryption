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
	MD5Init(&md5);                         //��ʼ������md5���ܵĽṹ

	unsigned char encrypt[200];     //����ڼ��ܵ���Ϣ
	unsigned char decrypt[17];       //��ż��ܺ�Ľ��
	scanf("%s", encrypt);                 //������ܵ��ַ�

	MD5Update(&md5, encrypt, strlen((char *)encrypt));   //�������ܵ��ַ����м���
	MD5Final(decrypt, &md5);                                            //������ս��

	printf("����ǰ:%sn���ܺ�:", encrypt);
	for (int i = 0; i < 16; i++)
		printf("%2x ", decrypt[i]);

	printf("nnn���ܽ���!n");

	return 0;
}
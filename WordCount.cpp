// WordCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int cnt;
	char ch;
	char filename[80];
	FILE *fp;
	strcpy(filename,argv[2]);
	fp = fopen(filename,"r");
	cnt = 0;
	if(strcmp(argv[1],"-c") == 0 || strcmp(argv[1],"-C") == 0)
	{
		while(!feof(fp))
		{
			ch = fgetc(fp);
			cnt++;
		}
		printf("字符数：%d\n",--cnt);
	}
	else if(strcmp(argv[1],"-w") == 0 || strcmp(argv[1],"-W") == 0)
	{
		while(!feof(fp))
		{
			ch = fgetc(fp);
			if (ch == ' '||ch==',')
			cnt++;
		}
		printf("单词数：%d\n",--cnt);
	}
	return 0;
}

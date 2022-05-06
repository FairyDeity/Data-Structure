
//KMP
/* s串第0个字符的next[0]=0
对于第i个字符(0<i<n)，next[i]=str(0到i-1的字串)最长前后缀重合部分 + 1
例：S=abaabcac
next=[0, 1, 1, 2, 2, 3, 1, 2]（此next值适用于第一个字符元素下标为1的字符串；教材是从1开始，S[0]表示字符串长度）
*/
void get_next(String S, int next[])
{
	i=0; j=-1;
	next[0]=-1;
	while (i<S.length)
	{
		if (j == -1 || S.str[i] == S.str[j])
		{
			++i; ++j; 
			next[i] = j; 
		}
		else j = next[j]; 
	}
}

int kmp(String T, String S, int next[])
{
	i=0; j=-1;
	while (i<T.length && j<S.length)
	{
		if (j==-1 || T.str[i] == S.str[j])
		{
			++i; ++j;
		}
		else j = next[j];
	}
	if (j == S.length) return i-j; // S子串在T的匹配位置
	else return -1; // 匹配失败
}

//引入库以及设置结构体
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define CHUNKSIZE 80

typedef struct 
{
	char *ch;
	int length;
}HString;


//初始化串
int StrAssign(HString &T,char *chars)//生成一个其值等于串常量chars的T 
{
//	if(T.ch) free(T.ch);
	int i,n;char *c;
	for(i=0,c=chars;*c;++i,++c);
	if(!i)
	{
		T.ch=NULL;
		T.length=0;
	}
	else
	{
		if(!(T.ch=(char *)malloc(i*sizeof(char))))
			return -1;
		for(n=0;n<=i-1;n++)
		{
			T.ch[n]=chars[n];
			T.length=i;
		}
	}
	return 1;
}


//求子串
int SubString(HString &Sub,HString S,int pos,int len)//求子串 
 {
 	int n; 
 	if(pos<0||pos>S.length||len<0||len>S.length-pos+1)
 	{
 		 		return 0;
	 }
//	if(Sub.ch) free(Sub.ch);
	if(!len)
		{
			Sub.ch=NULL;
			Sub.length=0;
		 } 
	else
		{
			Sub.ch=(char *)	malloc(len * sizeof(char));
			for(int n=0;n<=len-1;n++)
			{
				Sub.ch[n]=S.ch[pos+n-1];
			}
			Sub.length=len;
		}
	return 1;
 }

//串比较

int StrCompare(HString S,HString T)//若S>T，则返回值>0; 若S=T，则返回值0；若S<T，则返回值<0 
 {
 	for(int i=0;i<S.length&&i<T.length;i++)
 	{
 		if(S.ch[i]!=T.ch[i])
 			return S.ch[i]-T.ch[i];
		else
			  return S.length-T.length;
	 }	
 }


//定位功能
int Index(HString S,HString T,int pos)
{
	int i=pos,j=0;
	while(i<S.length&&j<T.length)
	{
		if(S.ch[i]==T.ch[j])
		{
			++i;++j;
		}
		else
		{
			i=i-j+1;
			j=0;
		}
		
	}
	if(j>=T.length) return i-T.length;
	else return 0;
}


//求串长度
int StrLength(HString T)//求串长 
{
	return T.length;
 } 

//串输出

void StrPrint(HString T)
{
	int i;
	for(i=0;i<T.length;i++)
	{
		printf("%c",T.ch[i]);
	}
} 
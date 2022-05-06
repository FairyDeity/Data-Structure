
//KMP
/* s����0���ַ���next[0]=0
���ڵ�i���ַ�(0<i<n)��next[i]=str(0��i-1���ִ�)�ǰ��׺�غϲ��� + 1
����S=abaabcac
next=[0, 1, 1, 2, 2, 3, 1, 2]����nextֵ�����ڵ�һ���ַ�Ԫ���±�Ϊ1���ַ������̲��Ǵ�1��ʼ��S[0]��ʾ�ַ������ȣ�
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
	if (j == S.length) return i-j; // S�Ӵ���T��ƥ��λ��
	else return -1; // ƥ��ʧ��
}

//������Լ����ýṹ��
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define CHUNKSIZE 80

typedef struct 
{
	char *ch;
	int length;
}HString;


//��ʼ����
int StrAssign(HString &T,char *chars)//����һ����ֵ���ڴ�����chars��T 
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


//���Ӵ�
int SubString(HString &Sub,HString S,int pos,int len)//���Ӵ� 
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

//���Ƚ�

int StrCompare(HString S,HString T)//��S>T���򷵻�ֵ>0; ��S=T���򷵻�ֵ0����S<T���򷵻�ֵ<0 
 {
 	for(int i=0;i<S.length&&i<T.length;i++)
 	{
 		if(S.ch[i]!=T.ch[i])
 			return S.ch[i]-T.ch[i];
		else
			  return S.length-T.length;
	 }	
 }


//��λ����
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


//�󴮳���
int StrLength(HString T)//�󴮳� 
{
	return T.length;
 } 

//�����

void StrPrint(HString T)
{
	int i;
	for(i=0;i<T.length;i++)
	{
		printf("%c",T.ch[i]);
	}
} 
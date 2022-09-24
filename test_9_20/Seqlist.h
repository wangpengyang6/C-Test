#pragma once
#define N 100
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;


//��̬����˳���
typedef struct Seqlist
{
	SLDataType*a;
	int size ;
	int capacity;
}SL;


//��ʼ��˳���
void SeqlistInit(SL* ps);
//β�巨
void SeqlistPushBack(SL* ps, SLDataType x);
//βɾ
void SeqlistPopBack(SL* ps);
//��ӡ˳���
void SeqlistPrint(SL* ps);
//�ͷ�
void SeqlistDestory(SL* ps);
//ͷ�巨
void SeqlistPushFront(SL* ps, SLDataType x);
//ͷɾ
void SeqlistPopFront(SL* ps);
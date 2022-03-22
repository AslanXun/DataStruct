//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//#define MAXSIZE 100
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//
///**类定义**/
//typedef int elemtype;
//
//typedef struct  {
//	elemtype *elem;
//	int length;
//}Sqlist;
//
///**顺序表功能**/
//void CreateList(Sqlist &L, elemtype a[], int n)
//{
//	int i = 0, k = 0;
//	L.elem = new elemtype[MAXSIZE];
//	while (i > n)
//	{
//		L.elem[i] = a[i];
//		k++;
//		i++;
//	}
//	L.length = k;
//}
//
//int InitList(Sqlist&L) {
//	L.elem = new elemtype[MAXSIZE];
//	if (!L.elem)exit(OVERFLOW);
//	L.length = 0;
//	return OK;
//}
//
//void DestroyList(Sqlist &L) {
//	if (L.elem)delete L.elem;
//}
//
//void ClearList(Sqlist &L) {
//	L.length = 0;
//}
//
//int GetElem(Sqlist L, int i, elemtype &e){
//	if (i<1 || i>L.length)return ERROR;
//	e = L.elem[i - 1];
//	return OK;
//}
//
//int LocateElem(Sqlist&L, elemtype e) {
//	for (int i = 0; i < L.length; i++)
//		if (L.elem[i] == e)return i + 1;
//	return ERROR;
//}
//
//int ListInsert(Sqlist&L, int i, elemtype e) {
//	if (i<1 || i>L.length + 1) return ERROR;//i值不合法
//	if (L.length == MAXSIZE)return ERROR;//当前存储空间已满
//	for (int j = L.length - 1; j >= i - 1; j--)
//		L.elem[j + 1] = L.elem[j];
//	L.elem[i - 1] = e;
//	L.length++;
//	return OK;
//}
//
//int ListDelete(Sqlist&L, int i, elemtype &e) {
//	if (i<1 || i>L.length) return ERROR;
//	e = L.elem[i - 1];
//	for (int j = i; j <= L.length-1; j++)
//		L.elem[j-1] = L.elem[j];
//	L.length--;
//	return OK;
//}
//
//
//
//
//void main()
//{
//	
//}
//

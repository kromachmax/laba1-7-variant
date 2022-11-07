//#include<stdlib.h>
//#include<stdio.h>
//#include<locale.h>
//#pragma warning(disable:4996)
//
//typedef struct listNode listNode;
//typedef listNode* ListNodePtr;
//struct listNode {
//	listNode* nextptr;
//	char* string;
//	int n;
//};
//
///*������� ��������� ����� ���� � ��� ������
//������� ���������� ����� � ������ ����� �����
//���� ����� ���������� ����� �� ������� ���������� � ������������������ �������
//*/
//
//void insert(ListNodePtr* sPtr, char* a, int lenght) {
//	ListNodePtr newPtr;
//	ListNodePtr previousPtr;
//	ListNodePtr currentPtr;
//
//	newPtr = (ListNodePtr)malloc(sizeof(listNode));
//
//	if (newPtr != NULL)//���� ������� �������� ������ ���������� � ��������� ������ � ����� ������
//	{
//		newPtr->string = a;
//		newPtr->n = lenght;
//		newPtr->nextptr = NULL;
//
//		previousPtr = NULL;
//		currentPtr = *sPtr;
//		while (currentPtr != NULL && lenght > currentPtr->n)// ����������� �� ������ ���� ����� ������ ����� ������ ����� � ����
//
//		{
//			previousPtr = currentPtr;
//			currentPtr = currentPtr->nextptr;
//		}
//		while (currentPtr != NULL && !Compare(a, currentPtr->string, lenght) && lenght == currentPtr->n)
//		{
//			previousPtr = currentPtr;
//			currentPtr = currentPtr->nextptr;
//		}
//		if (previousPtr == NULL) {
//			newPtr->nextptr = *sPtr;
//			*sPtr = newPtr;
//		}
//		else {
//			previousPtr->nextptr = newPtr;
//			newPtr->nextptr = currentPtr;
//		}
//	}
//	else {
//		printf("No memory available.\n");
//	}
//}
//
///*������� ��������� �������� �� ������ ������*/
//int isEmpty(ListNodePtr sPtr) {
//	return sPtr == NULL;
//}
//
///*������� �������� ��������� ������, �� ���� ��� ����� � ������ */
//void printList(ListNodePtr currentPtr) {
//	if (isEmpty(currentPtr)) {
//		puts("List is empty.\n");
//	}
//	else {
//		puts("The list is:");
//		while (currentPtr != NULL) {
//			Print(currentPtr->string, currentPtr->n);
//			currentPtr = currentPtr->nextptr;
//		}
//	}
//}
//
///*���������� ����� � ������������������ �������(��������� ������� ASKII)*/
//int Compare(char* a, char* b, int c) {
//	for (int i = 0; i < c; i++) {
//		if (a[i] < b[i]) {
//			return 1;
//		}
//		if (a[i] > b[i]) {
//			return 0;
//		}
//	}
//	return 0;
//}
//
///*�������� ���� ����� ������� ��������� � ����*/
//void Print(char* a, int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%c", a[i]);
//	}
//	puts("");
//}
//
///*����������� ������������ ������ �� �����*/
//ListNodePtr ReadText(char const* filename) {
//	ListNodePtr StartPtr = NULL;
//	FILE* f;
//	int length = 0;
//	char* a = NULL;
//	char t;
//	f = fopen(filename, "r+");
//	if (f != NULL) {//���� ������� ������� ����
//		a = (char*)malloc(sizeof(char));
//		if (a != NULL) {//���� ���������� ������ 
//			while (fscanf(f, "%c", &t) == 1) {
//				if (IsAlNum(t)) {//���� ������ �������� ������
//					length++;
//					char* p = (char*)realloc(a, length * sizeof(char));
//					if (p == NULL) {
//						return NULL;
//					}
//					a = p;
//					a[length - 1] = t;
//				}
//				else {
//					if (IsAlNum(a[0])) {//������� ���� ������ �������� ������������ ��������� ����� �� ��� �������� ����� � ����
//						insert(&StartPtr, a, length);
//						length = 0;
//						a = (char*)malloc(sizeof(char));
//
//						if (a == NULL) {
//							return NULL;
//						}
//					}
//				}
//			}
//			if (IsAlNum(a[0])) {//���� ��� ������������ �� ����� ��������� �������� ��������
//				insert(&StartPtr, a, length);
//				length = 0;
//				a = (char*)malloc(sizeof(char));
//
//				if (a == NULL) {
//					return NULL;
//				}
//			}
//		}
//		fclose(f);
//	}
//	else {
//		printf("Error.");//���� ���� �� ������� �������
//	}
//	return StartPtr;
//}
//
///*��������� �������� ������ ������ ��� ����������� ��������
//���� �� �� ���������� ���� ���� ��� �� 1*/
//int IsAlNum(char c) {
//	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))return 1;
//	return 0;
//}
//
///*�� ������� ����� � ������� ������� ��� ����� ������� ����� ������� ����� �����*/
//void first(ListNodePtr currentPtr, int N)
//{
//	if (isEmpty(currentPtr)) {
//		puts("List is empty.\n");
//	}
//	else {
//		puts("The list is:");
//		while (currentPtr != NULL) {
//			if (currentPtr->n > N)
//				Print(currentPtr->string, currentPtr->n);
//			currentPtr = currentPtr->nextptr;
//		}
//	}
//}
//
///*�� ������� ����� � ������� ������� ��� ����� ������� ����� ������ ����� �����*/
//void second(ListNodePtr currentPtr, int N)
//{
//	if (isEmpty(currentPtr)) {//�������� �� �� �������� �� ������ ������
//		puts("List is empty.\n");
//	}
//	else {
//		puts("The list is:");
//		while (currentPtr != NULL) {
//			if (currentPtr->n == N)
//				Print(currentPtr->string, currentPtr->n);
//			currentPtr = currentPtr->nextptr;
//		}
//	}
//}
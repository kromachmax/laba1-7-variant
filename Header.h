//#pragma once
///*������ ������� ��������������� ��� ����� ��������� struct listNode � ������ listNode */
//typedef struct listNode listNode;
//
///*������ ������� ��������������� ��� ��������� �� ��������� listNode* �  ������ ListNodePtr*/
//typedef listNode* ListNodePtr;
//
///*��������� ��������������� ��� ���� ��� ����� ������� ������ � ���� ������ � ��������� �� ��������� ����*/
//struct listNode {
//	listNode* nextptr;
//	char* string;
//	int n;
//};
//
///*������� ������� ������ ���� � ������*/
//void insert(ListNodePtr* sPtr, char* a, int lenght);
//
///*������� ��������� �������� �� ������ ������*/
//int isEmpty(ListNodePtr sPtr);
//
///*�������� ���� ����� ������� ��������� � ����*/
//void Print(char* a, int n);
//
///*������� �������� ��������� ������, �� ���� ��� ����� � ������ */
//void printList(ListNodePtr currentPtr);
//
///*��������� �������� ������ ������ ��� ����������� ��������*/
//int IsAlNum(char c);
//
///*���������� ����� � ������������������ �������(��������� ������� ASKII)*/
//int Compare(char* a, char* b, int c);
//
///*�� ������� ����� � ������� ������� ��� ����� ������� ����� ������� ����� �����*/
//void first(ListNodePtr currentPtr, int N);
//
///*�� ������� ����� � ������� ������� ��� ����� ������� ����� ������ ����� �����*/
//void second(ListNodePtr currentPtr, int N);
//
///*����������� ������������ ������ �� �����*/
//ListNodePtr ReadText(char const* filename);
//

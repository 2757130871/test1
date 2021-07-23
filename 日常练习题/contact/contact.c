#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 1000
#define MAX_NAME 20
#define MAX_ADDR 20
#define MAX_TELE 11

typedef struct PepInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PepInfo;


typedef struct contact
{
	PepInfo data[MAX];
	int sz;

}contact;

void InitContact(contact* con);
void AddContact(contact* con);
void DeleteContact(contact* con);
void ModifyContact(contact* con);
void SearchContact(contact* con);
void PrintContact(contact* con);


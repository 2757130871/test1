

typedef struct PepInfo
{
	char name[20];
	int number;

}PepInfo;

 
typedef struct contact
{
	PepInfo data[1000];
	int sz;
}contact;


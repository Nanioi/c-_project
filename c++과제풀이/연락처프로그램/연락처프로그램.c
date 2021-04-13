#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

typedef struct Member {
	char name[20];
	char number[15];
	char hb[9];
}MP;

void input(char *z)
{
	scanf("%s", z);
}

void ShowAll(MP *z,int n)
{
	MP *q;

	for (q =z;q < z + n-1;q++)
	{
		printf("%s %s %s\n",q->name,q->number,q->hb);
	}
}

void delete(MP *q,int i,int n)
{
	MP *a;

	for (a = q + i;a < q + n - 2;a++)
	{
		strcpy(a->name,(a+1)->name);
		strcpy(a->number,(a+1)->number);
		strcpy(a->hb,(a+1)->hb);
	}
}

int findHB(MP *q,int fh)
{
	int Hb,i;
	
	Hb = 0;
	for (i = 0;i < 2;i++)
	{
		Hb *= 10;
		Hb += q->hb[4 + i] - '0';
	}
	if (fh == Hb)
		return 1;
	else
		return 0;
}
int main()
{
	MP x[100],*p=x,tmp,*a,*b;
	int n, cnt = 1,i=0,flag=0,Fh=0,result=0;
	char dname[20], fhb[9] = { 0 };

	while (1) {
		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter_the_menu_number:");

		scanf("%d", &n);

		if (n == 1)
		{
			printf("Name:");
			input(p->name);

			printf("Phone_number:");
			input(p->number);

			printf("Birth:");
			input(p->hb);

			if (cnt >= 100)
			{
				printf("OVERFLOW\n");
				continue;
			}
			if (cnt >= 2)
			{
				for (a = x;a < x + cnt - 1;a++)
				{
					for (b = x;b < x + cnt - 1;b++)
					{
						if (strcmp(b->name, (b+1)->name) > 0)
						{
							tmp = *b;
							*b = *(b+1);
							*(b+1) = tmp;
						}
					}
				}
			}

			printf("<<%d>>\n", cnt);
			p++;
			cnt++;
		}
		else if (n == 2)
		{
			if (cnt == 1)
				continue;
			else
			{
				ShowAll(x, cnt);
			}
		}
		else if (n == 3)
		{
			if (cnt == 1)
			{
				printf("NO MEMBER\n");
				continue;
			}
			else
			{
				printf("Name:");
				input(dname);

				flag = 0;
				i = 0;
				for (a = x;a < x + cnt-1;a++)
				{
					if (strcmp(a->name, dname) == 0)
					{
						flag = 1;
						delete(x,i,cnt);
						cnt--;
						p--;
					}
					i++;
				}
				if (flag == 0)
				{
					printf("NO MEMBER\n");
					continue;
				}
			}
		}
		else if(n == 4)
		{
			printf("Birth:");
			scanf("%d", &Fh);

			result = 0;
			for (a = x;a < x + cnt;a++)
			{
				result = findHB(a, Fh);

				if (result == 1)
				{
					printf("%s %s %s\n", a->name, a->number, a->hb);
				}
			}
		
		}
		else
			break;
	}
}

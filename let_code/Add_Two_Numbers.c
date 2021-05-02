#include <stdio.h>
#include <stdlib.h>

//->next

struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *list = NULL, *fim;
	int soma, resto = -1;

	for(;;)
	{
		struct ListNode *aux = (struct ListNode*)malloc(sizeof(struct ListNode));

		if(l1 != NULL || l2 != NULL)
		{
			if(l1 == NULL)
			{
				soma = 0 + l2->val;
			}
			else if(l2 == NULL)
			{
				soma = l1->val + 0;
			}
			else
			{
				soma = l1->val + l2->val;

			}


			if(resto != -1)
			{
				soma += resto;
				resto = -1;
			}

			if(soma > 9)
			{
				resto = 1;
				soma = soma - 10;
			}



			aux->val = soma;



			//Add ao nó
			if(list == NULL)
			{
				list = aux;
				aux->next = NULL;
				fim = aux;
			}
			else
			{
				fim->next = aux;
				aux->next = NULL;
				fim = aux;
			}


		}
		else
		{
			if(resto != -1)
			{
				aux->val = resto;
				fim->next = aux;
				aux->next = NULL;
				fim = aux;
				resto = -1;
			}

			break;
		}

		if(l1 != NULL)
		{
			l1 = l1->next;

		}
		if(l2 != NULL)
		{
			l2 = l2->next;

		}
	}


	return list;
}

int main()
{

	return 0;
}

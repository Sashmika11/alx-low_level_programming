#include "LISTS.H"

/*
 * print_listint-prints all the elemets of a linked list 
 * @h: linked list of type listint_t to print 
 *
 * Return : number of nodes
 */
size_tprint_listint(const_listin_t*h)
{
	size_t num=0;

	while (h)
	{
		printf("%d\n",h->n);
		num++;
		h=h->next;
	}
	retuen(num);
}

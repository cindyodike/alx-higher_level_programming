#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/** 
*check_cycle -  to check if a singly linked list has a cycle
 *@list: linked list check
 *Return: 1 if cycle, 0 if not
 */
int check cycle(listint_t *list);
	listint_t *p1 = NULL, *p2 = NULL;
	p1 = list;
	p2 = list;
	while (list)
        {
		p2 = p2->next
	for(p1 = head;p1 ->next != NULL;p1 = p1 ->next)
		for(p2 = p1 ->next;p2 ! NULL;p2 = p2 ->next)
			if(p2 == p1)
			       return (1);
		}
	}
	return (0);
		      

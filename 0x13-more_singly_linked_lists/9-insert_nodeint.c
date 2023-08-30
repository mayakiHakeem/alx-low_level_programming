#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: ptr to ptr to first list item
 * @idx: index position to insert node
 * @n: data part of the node
 *
 * Return: address of new node. NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *pre_node, *post_node;
	unsigned int len = list_len(head);

	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (idx == len)
	{
		pre_node = get_prenode(head, idx);
		pre_node->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		pre_node = get_prenode(head, idx);
		post_node = get_postnode(head, idx);
		pre_node->next = new_node;
		new_node->next = post_node;
	}
	return (new_node);
}

/**
 * list_len - get length of list
 * @head: ptr to first list item
 *
 * Return: length
 */
int list_len(listint_t **head)
{
	listint_t *mover;
	int len = 0;

	mover = *head;
	while (mover)
	{
		len++;
		mover = mover->next;
	}
	return (len);
}

/**
 * get_prenode - get length of list
 * @head: ptr to first list item
 * @index: position
 *
 * Return: node
 */
listint_t *get_prenode(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *mover = *head;

	i = 0;
	while (i < index - 1)
	{
		mover = mover->next;
		i++;
	}
	return (mover);
}

/**
 * get_postnode - get length of list
 * @head: ptr to first list item
 * @index: position
 *
 * Return: node
 */
listint_t *get_postnode(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *mover = *head;

	i = 0;
	while (i <= index - 1)
	{
		mover = mover->next;
		i++;
	}
	return (mover);
}

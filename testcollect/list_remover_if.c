void	ft_list_remove_if(t_list **begin_list, void *date_ref, int(*cmp)())
{
	t_list *curr;
	t_list *tmp;

	while(*begin_list && cmp((*begin_list)->data, date_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begint_list)->next;
		free(curr);
	}
	
	curr = *begin_list;
	while(curr && curr->next)
	{
		if(cmp(curr->next->data, data_ref) == 0)
		{	tmp = curr->next;
			curr->next = tmp->next;
			free(test);
		}:
	}
	curr = curr->next;
}

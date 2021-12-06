#include <stdio.h>
#include <stdlib.h>

typedef struct			s_list
{
		void			*content;
		size_t			content_size;
		struct s_list 	*next;
}						t_list;

//void print_list(struct *s_list n)
//{
//	while (n != NULL)
//	{
//		printf(" %d ", n->data);
//		n = n->next;
//	}
//}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = content;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

int main()
{
	//struct t_list* head = NULL;
	//struct s_list* second = NULL;
	//struct s_list* third = NULL;

	//second = (struct s_list)malloc(sizeof(struct s_list));
	//third = (struct s_list)malloc(sizeof(struct s_list));

	//head->content = 1;
	//head->next = NULL;

	//second->content = 2;
	//second->next = third;

	//third->content = 3;
	//third->next = NULL;

	return (0);
}

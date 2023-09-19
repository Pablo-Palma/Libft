#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void          *content;
    struct s_list *next;
}t_list;

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int ft_lstsize(t_list *lst)
{
    int count;
    
    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

void  ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new->next = *lst;
    *lst = new;
}

t_list  *ft_lstnew(void * content)
{
    t_list *newnode;
    
    newnode = (t_list *)malloc(sizeof(t_list));
    if (!newnode)
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}

int main(void)
{   
    t_list *n1;
    t_list *n2;
    t_list *n3;
    int n1size;
    
    n1 = ft_lstnew("nodo1");
    n2 = ft_lstnew("nodo2");
    n3 = ft_lstnew("nodo3");
    printf("%s\n", (char *)n1->content);
    printf("%s\n", (char *)n2->content);
    printf("%s\n", (char *)n3->content);
    ft_lstadd_front(&n3, n2);
    ft_lstadd_front(&n2, n1);
    n1size = ft_lstsize(n1);
    printf("%d\n", n1size);
	printf("%s\n", (char *)ft_lstlast(n1)->content);
    return (0);
}

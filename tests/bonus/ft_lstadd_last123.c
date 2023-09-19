#include "stdio.h"
#include "stdlib.h"

typedef struct s_list
{
    void  *content;
    struct s_list *next;
}t_list;

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

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    
    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}

t_list *ft_lstnew(void *content)
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
    t_list *node1 = ft_lstnew("n1");
    t_list *node2 = ft_lstnew("n2");
    t_list *node3 = ft_lstnew("n3");
    printf("%d\n", ft_lstsize(node1));
    ft_lstadd_back(&node1, node2);
    printf("%d\n", ft_lstsize(node1));
    ft_lstadd_back(&node2, node3);
    printf("%d\n", ft_lstsize(node1));
}

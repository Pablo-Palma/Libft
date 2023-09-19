#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void          *content;
    struct s_list *next;
}               t_list;

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

void increment(void *num)
{
    int *n = (int *)num;
    (*n)++;
}

// Función para agregar un nuevo nodo al final de la lista
t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    if (!(new_node = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

int main()
{
    // Creación de una lista de 3 nodos con números del 1 al 3
    t_list *head = ft_lstnew(malloc(sizeof(int)));
    *((int *)head->content) = 1;

    t_list *second = ft_lstnew(malloc(sizeof(int)));
    *((int *)second->content) = 2;
    head->next = second;

    t_list *third = ft_lstnew(malloc(sizeof(int)));
    *((int *)third->content) = 3;
    second->next = third;

    // Impresión de la lista original
    t_list *temp = head;
    while (temp)
    {
        printf("%d -> ", *((int *)temp->content));
        temp = temp->next;
    }
    printf("NULL\n");

    // Aplicación de la función increment a cada nodo de la lista
    ft_lstiter(head, increment);

    // Impresión de la lista después de aplicar increment
    temp = head;
    while (temp)
    {
        printf("%d -> ", *((int *)temp->content));
        temp = temp->next;
    }
    printf("NULL\n");

    // Liberación de memoria
    while (head)
    {
        t_list *old = head;
        free(old->content);
        head = head->next;
        free(old);
    }

    return 0;
}

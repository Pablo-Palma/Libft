#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void  *content;
    struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;

    del(lst->content);
    free(lst);
}

// Una simple función de borrado que se encargará de liberar contenido de tipo char*
void simple_delete(void *content)
{
    free(content);
}

int main(void)
{
    // Crear un nodo y asignarle una cadena dinámica
    t_list *node = (t_list *)malloc(sizeof(t_list));
    node->content = strdup("Hello, World!"); // Usamos strdup para obtener una copia dinámica de la cadena
    node->next = NULL;

    // Imprimir el contenido del nodo
    printf("Antes de borrar: %s\n", (char *)node->content);

    // Usar ft_lstdelone para liberar el nodo
    ft_lstdelone(node, simple_delete);

    // En este punto, la memoria del nodo y su contenido han sido liberados
    // Así que no deberías intentar acceder a ellos

    return 0;
}

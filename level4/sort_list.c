#include "list.h"

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *i;
    t_list *j;
    int temp;

    if (!lst)
        return (lst);
    i = lst;
    while (i->next)
    {
        j = lst;
        while (j->next)
        {
            if (!cmp(j->data, j->next->data))
            {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
    return (lst);
}

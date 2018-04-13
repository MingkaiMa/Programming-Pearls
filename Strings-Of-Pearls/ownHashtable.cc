#include <iostream>

#define NHASH 29989
#define MULT 31

using namespace std;

typedef struct node *nodeptr;
typedef struct node {
    char *word;
    int count;
    nodeptr next;
} node;


nodeptr bin[NHASH];

unsigned int hash(char *p)
{
    unsigned int h = 0;
    for(; *p; p++)
        h = MULT * h + *p;
    return h % NHASH;
}


void incword(char *s)
{
    h = hash(s);
    for(p = bin[h]; p != NULL; p = p->next)
    {
        if(strcmp(s, p->word) == 0)
        {
            (p->count)++;
            return;
        }
    }

    p = malloc(sizeof(hashnode))
    p->count = 1;
    p->word = malloc(strlen(s) + 1);
    strcpy(p->word, s);
    p->next = bin[h];
    bin[h] = p;
}

int main()
{
    for(int i = 0; i < NHASH; i++)
        bin[i] = NULL;

    while(scanf("%s", buf) != EOF)
        incword(buf);

    for(int i = 0; i < NHASH; i++)
    {
        for(p = bin[i]; p != NULL; p = p->next;)
            cout << p->word << " " << p->count;
    }
}


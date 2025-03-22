#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct treenode
{
     int value;
     struct treenode *left;
     struct treenode *right;
} treenode;

treenode *createnode(int value)
{
     treenode *result = malloc(sizeof(treenode));
     if (result != NULL)
     {
          result->left = NULL;
          result->right = NULL;
          result->value = value;
     }
     return result;
}

void printtabs(int numbtabs)
{
     for (int i = 0; i < numbtabs; i++)
          printf("\t");
}

void printtree_rec(treenode *root, int level)
{
     if (root == NULL)
     {
          printtabs(level);
          printf("---<empty>---\n");
          return;
     }
     printtabs(level);
     printf("value = %d\n", root->value);
     printtabs(level);
     printf("left\n");

     printtree_rec(root->left, level + 1);
     printtabs(level);
     printf("right\n");

     printtree_rec(root->right, level + 1);
     printtabs(level);
     printf("DONE!\n");
}

void printtree(treenode *root)
{
     printtree_rec(root, 0);
}

bool insertNumber(treenode **rootptr, int value)
{
     treenode *root = *rootptr;
     if (root == NULL)
     {
          // tree empty
          (*rootptr) = createnode(value);
          return true;
     }
     if (value == root->value)
     {
          // do nothing
          return false;
     }
     if (value < root->value)
          return insertNumber(&(root->left), value);
     else
          return insertNumber(&(root->right), value);
}

bool findNumber(treenode *root, int value)
{
     if (root == NULL)
          return false;
     if (root->value == value)
          return true;
     if (value < root->value)
          return findNumber(root->left, value);
     else
          return findNumber(root->right, value);
}

int main()
{
     treenode *root = NULL;

     int arr[] = {87, 14, 32, 66, 53, 5, 72, 41, 19, 94, 28, 6, 37, 81, 45, 99, 22, 78, 11, 49};
     for (int i = 0; i < 20; i++)
     {
          insertNumber(&root, arr[i]);
     }

     printtree(root);

     printf("%d (%d)\n", 16, findNumber(root, 16));
     printf("%d (%d)\n", 15, findNumber(root, 15));
     printf("%d (%d)\n", 5, findNumber(root, 5));
     printf("%d (%d)\n", 115, findNumber(root, 115));
     printf("%d (%d)\n", 1, findNumber(root, 1));
     printf("%d (%d)\n", 7, findNumber(root, 7));

     return 0;
}
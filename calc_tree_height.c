#include <string.h>
#include <stdlib.h>

int max (int a, int b)
{
  return ( ( a > b) ? a : b );
}

struct Node
{
  int data;
  struct Node *pRight;
  struct Node *pLeft;
};

int find_height (struct Node *root)
{
  if (root == NULL)
    return -1;
  return max (find_height (root->pRight), find_height (root->pLeft)) + 1;
}


int main() {
  struct Node *x;
  struct Node *y;
  struct Node *z;

  x = malloc (sizeof(struct Node));
  y = malloc (sizeof(struct Node));
  z = malloc (sizeof(struct Node));

  x->data = 1;
  x->pRight = y;
  x->pLeft = z;

  y->data = 2;
  y->pRight = NULL;
  y->pLeft = NULL;

  z->data = 3;
  z->pRight = NULL;
  z->pLeft = NULL;

  find_height (x);

  return 0;
}

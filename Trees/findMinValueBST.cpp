// Whole Question:
// https://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/

int minValue(struct node* node) {
  struct node* current = node;

  /* loop down to find the leftmost leaf */
  while (current->left != NULL) {
    current = current->left;
  }
  return (current->data);
}

// As we're finding min value, we only need to traverse in on left of Tree,
// donot traverse on right.
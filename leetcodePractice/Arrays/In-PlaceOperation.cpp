public
int[] squareEven(int[] array, int length) {
  if (array == NULL)
    return;

  for (int i = 0; i < length; i++) {
    if (i % 2 == 0)
      array[i] *= array[i];  // if index is even, then simply square the
                             // element.
  }
  return array;
}
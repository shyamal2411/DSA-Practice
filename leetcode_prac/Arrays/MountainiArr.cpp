bool validMountainArray(vector<int>& arr) {
  if (arr.size() < 3)// there has to be min. 3 ele for forming mountain 
    return false;
  int p = 1;
  while (p < arr.size()) { //ascending part of mountain
    if (arr[p - 1] < arr[p])
      p++;
    else
      break;
  }

  if (p == arr.size() || p == 1) //it means there are some repetitive elements or something like 5,5
    return false;
  while (p < arr.size()) { //descending part of mountain.
    if (arr[p - 1] > arr[p]) {
      p++;
    } else
      break;
  }
  if (p == arr.size()) //if both are same means there exists mountain
    return true;
  else
    return false;
}
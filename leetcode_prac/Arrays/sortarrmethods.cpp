#include<bits/stdc++.h>
using namespace std;

class Solution {
 public:
  /*
  1. Bubble sort:
  Worstcase time: O(n^2), Bestcase Time: O(n) -  list already sorted, Space:
  O(1)
  */
  vector<int> bubbleSort(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
      bool found = false;
      for (int j = 0; j < nums.size() - i - 1; j++) {
        if (nums[j] > nums[j + 1]) {
          found = true;
          swap(nums[j], nums[j + 1]);
        }
      }
      if (!found)
        return nums;
    }
    return nums;
  }

  /*
  2. Insertion sort: (Inserting ith element in the proper position)
  Worstcase time: O(n^2), Bestcase Time: O(n) - list already sorted, Space: O(1)
  */
  vector<int> insertionSort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      int j = i;
      while (j > 0 && nums[j - 1] > nums[j]) {
        swap(nums[j], nums[j - 1]);
        j--;
      }
    }
    return nums;
  }

  /*
  3. Selection sort: (Select the  min/max value based on current element and
  swap it) Worstcase time: O(n^2), Bestcase Time: O(n^2), Space: O(1)
  */
  vector<int> selectionSort(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
      int minIndex = i;
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[minIndex] > nums[j])
          minIndex = j;
      }
      swap(nums[i], nums[minIndex]);
    }
    return nums;
  }

  /*
  4. Merge sort: (divide and concur)
  Worstcase time: O(nlogn), Bestcase Time: O(nlogn), Space: O(n) (not
  considering recursion call stack space) It is a divide and concure technique
  which Divide: Break the given problem into sub-problems of same type. Conquer:
  Recursively solve these sub-problems Combine: Appropriately combine the
  answers
  1. Base operation: find the mid elemet
  2. Divide and  concure part: divide the array into two halves and recursively
  solve these sub-problems
  3. Combine part: appropriately add sorted two halves arrays
  T(n) = 0(1)(Finding mid index -- preprocessing) + 2T(n/2) + O(N) (merging -
  postprocessing) T(n) = 2T(n/2) + O(n) --> O(nlong) T(N) = aT(n/b) + f(n) -- >
  logn(baseb) is the height and max no of leafs is a^heigh and total number
  a^(height+1)-1 (Here n is the length of the array) According to master method:
  T(N) = aT(n/b) + f(n)
  T(n) = Θ(nloga(baseb)) when f(n) has slower growth that n^loga(baseb)
  T(n) = Θ(nloga(baseb) log n) when f(n) has equal growth that n^loga(baseb)
  T(n) = Θ(f(n)) when f(n) has faster growth that n^loga(baseb)
  */
  void merge(vector<int>& nums, int low, int mid, int high) {
    int leftLength = mid - low + 1;
    int rightLength = high - mid;  // high-(mid+1)+1
    vector<int> leftList(nums.begin() + low, nums.begin() + mid + 1);
    vector<int> rightList(nums.begin() + mid + 1, nums.begin() + high + 1);
    int i = 0, j = 0, cur = low;
    while (i < leftLength && j < rightLength) {
      if (leftList[i] < rightList[j]) {
        nums[cur] = leftList[i];
        i++;
        cur++;
      } else {
        nums[cur] = rightList[j];
        j++;
        cur++;
      }
    }
    while (i < leftLength) {
      nums[cur] = leftList[i];
      i++;
      cur++;
    }
    while (j < rightLength) {
      nums[cur] = rightList[j];
      j++;
      cur++;
    }
  }
  void mergeSortHelper(vector<int>& nums, int low, int high) {
    if (low < high) {
      int mid = (high - low) / 2 + low;
      mergeSortHelper(nums, low, mid);
      mergeSortHelper(nums, mid + 1, high);
      merge(nums, low, mid, high);
    }
  }
  vector<int> mergeSort(vector<int>& nums) {
    mergeSortHelper(nums, 0, nums.size() - 1);
    return nums;
  }

  /*
  5. Heapsort (Using heap)
  Worstcase time: O(nlogn), Bestcase Time: O(n)(when all elements are same then
  heapify will not cost O(logn), it will be O(1)), Space: O(1) (not including
  recursive function stack space.)
  */
  // heapify opertaion for max heap
  void heapify(vector<int>& nums, int index, int size) {
    int lChildIndex = 2 * index + 1;
    int rChildIndex = 2 * index + 2;
    int nextIndex = index;
    if (lChildIndex < size && nums[lChildIndex] > nums[nextIndex])
      nextIndex = lChildIndex;
    if (rChildIndex < size && nums[rChildIndex] > nums[nextIndex])
      nextIndex = rChildIndex;
    if (nextIndex != index) {
      swap(nums[index], nums[nextIndex]);
      heapify(nums, nextIndex, size);
    }
  }
  void heapSortHelper(vector<int>& nums) {
    // Make the array as max heap. Time complexity is O(n), it is not nlogn
    // because height considered in each call is not the same and decreases.
    for (int i = nums.size() / 2; i >= 0; i--) {
      heapify(nums, i, nums.size());
    }
    // Swap 0th element with last, as 0 will be the max element and then heapify
    // the 0th element by passing size as last-1. Time complexity is nlogn, and
    // it will be n if all elements are same.
    for (int i = nums.size() - 1; i >= 0; i--) {
      swap(nums[0], nums[i]);
      heapify(nums, 0, i);
    }
  }
  vector<int> heapSort(vector<int>& nums) {
    heapSortHelper(nums);
    return nums;
  }

  /*
  6. Quick sort:
  Worstcase time: O(n^2), Bestcase Time: O(nlogn), Ave: O(nlogn), Space: O(1)--
  not including recursive function stack space. Quicksort uses
  divide-and-conquer approach.
  1. Base operation: find pivot element
  2. Divide and concure art: divide the array into two halves and recursselvy
  quicksort the array
  3. Combine part do nothing
  best case and avg case when partition element is around middle and in that
  case T(n) = O(n) + 2T((n-1)/2) + Nothing -- best case T(n) = O(n) + T(9n/10)+
  T(n/10) -- > O(n logn) -- averge case Worstcase when partition element is
  around start and end every time -- revered sorted input list provided here:
  T(n) = O(n) + T(n-1) + Nothing -- > O(n + n-1 + n-2 + .. ) --> O(n^2)
  We can use randomized quicksort which gives worst case complexity as O(n logn)
  by picking pivot element randomly.  But it can not gurantee, complexity can go
  to O(n^2) here also.
  */

  int partitionIndex(vector<int>& nums, int low, int high) {
    int index = low - 1;
    for (int j = low; j <= high; j++) {
      if (nums[j] <= nums[high]) {
        index++;
        swap(nums[index], nums[j]);
      }
    }
    return index;
  }
  void quickSortHelper(vector<int>& nums, int low, int high) {
    if (low < high) {
      int p = partitionIndex(nums, low, high);
      quickSortHelper(nums, low, p - 1);
      quickSortHelper(nums, p + 1, high);
    }
  }
  vector<int> quickSort(vector<int>& nums) {
    quickSortHelper(nums, 0, nums.size() - 1);
    return nums;
  }
  /*
  Note considering high index for finding partition element gives O(n^2) time
  complexity in case list is sorted in reverse order. So to increase the
  probability of getting O(nlogn) complexity, randomized quick sort can be used.
  int partitionIndex(vector<int>& nums, int low, int high){
      int randIndex = low + rand()%(high-low+1);
      swap(nums[randIndex], nums[high]);
      int index = low-1;
      for (int j=low;j<=high;j++){
          if (nums[j]<= nums[high]){
              index++;
              swap(nums[index], nums[j]);
          }
      }
      return index;
  }
  */

  vector<int> sortArray(vector<int>& nums) {
    // bubbleSort(nums);
    // insertionSort(nums);
    // selectionSort(nums);
    // heapSort(nums);
    mergeSort(nums);
    // quickSort(nums);
    return nums;
  }
};

int main()
{
    
}
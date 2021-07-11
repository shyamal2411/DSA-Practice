class MedianFinder {
 private:
  priority_queue<int> small, large;

 public:
  void addNum(int num) {
    small.push(num);
    large.push(-small.top());
    small.pop();

    if (small.size() < large.size()) {
      small.push(-large.top());
      large.pop();
    }
  }

  double findMedian() {
    if (small.size() > large.size())
      return small.top();
    else
      return (small.top() - large.top()) / 2.0;
  }
};
/*
keep two heaps (or priority queues):

Max-heap small has the smaller half of the numbers.
Min-heap large has the larger half of the numbers.

This gives me direct access to the one or two middle values (they're the tops of
the heaps), so getting the median takes O(1) time. And adding a number takes
O(log n) time.

Supporting both min- and max-heap is more or less cumbersome, depending on the
language, so I simply negate the numbers in the heap in which I want the reverse
of the default order. To prevent this from causing a bug with -231 (which
negated is itself, when using 32-bit ints), I use integer types larger than 32
bits.
*/
class Solution {
 public:
  bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    if (rec1[0] == rec1[2] || rec1[1] == rec1[3] || rec2[0] == rec2[2] ||
        rec2[1] == rec2[3]) {
      return false;  // checking if rectangle is line or not, if it is this
                     // property can't work
    }

    // checking for both the rectangles
    // if it is < or > anything means its overlapping somewhere
    return !(rec1[2] <= rec2[0] ||  // left
             rec1[3] <= rec2[1] ||  // bottom
             rec1[0] >= rec2[2] ||  // right
             rec1[1] >= rec2[3]);
  }
};

class Solution {
 public:
  bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    return (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) &&
           (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
  }
};
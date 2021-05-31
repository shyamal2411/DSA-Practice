class Solution {
 public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {
    set<int> visited{};
    stack<int> sstack{};

    visited.insert(0);

    for (const auto& element : rooms[0])
      sstack.push(element);

    while (!sstack.empty()) {
      int currentR = sstack.top();
      sstack.pop();
      if (visited.find(currentR) == visited.end()) {
        visited.insert(currentR);
        for (const auto& element : rooms[currentR])
          sstack.push(element);
      }
    }
    return (visited.size() == rooms.size());
  }
};  // revise again
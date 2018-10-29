#include <iostream>
#include <vector>

struct Point {
  int x;
  int y;
}; // struct Point

struct TestCase {
  Point king_location;
  std::vector<Point> knights;  
}; // struct TestCase

struct TestCases {
  std::vector<TestCase> cases;
}; // struct TestCases

/**
 * Reads test cases from stdin.
 */
TestCases load_from_stdin() {
  int T;
  std::cin >> T;
  TestCases tc;
  for (int i = 0; i < T; ++i) {
    int N;
    std::cin >> N;
    TestCase t;
    for (int j = 0; j < N; ++j) {
      int x, y;
      std::cin >> x >> y;
      t.knights.push_back(Point{x,y});
    }
    int x,y;
    std::cin >> x >> y;
    t.king_location = Point{x,y};
    tc.cases.push_back(t);
  }
  return tc;
}

int main() {
  auto tc = load_from_stdin();
  return 0;
}

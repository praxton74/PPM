class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minimum_manhattan = INT_MAX;
        int index = -1;
        for (int i = 0; i < points.size(); i++) {
            if(points[i][0] == x || points[i][1] == y) {
                int manhattan = abs(points[i][0] - x) + abs(points[i][1] - y);
                if (manhattan < minimum_manhattan) {
                    minimum_manhattan = manhattan;
                    index = i;
                }
            }
        }
        return index;
    }
};

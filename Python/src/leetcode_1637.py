from typing import List


class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        x = []

        for point in points:
            x.append(point[0])
        x.sort()
        cm = -1
        for i in range(1, len(x)):
            lm = abs(x[i - 1] - x[i])
            if lm >= cm:
                cm = lm

        return cm

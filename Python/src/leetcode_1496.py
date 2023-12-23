class Solution:
    def isPathCrossing(self, path: str) -> bool:
        start = (0, 0)
        visited = set()
        curr = start

        for dir in path:
            visited.add(curr)
            if dir == 'N':
                dx = curr[0]
                dy = curr[1] + 1
                curr = (dx, dy)
            elif dir == 'S':
                dx = curr[0]
                dy = curr[1] - 1
                curr = (dx, dy)
            elif dir == 'E':
                dx = curr[0] + 1
                dy = curr[1]
                curr = (dx, dy)
            elif dir == 'W':
                dx = curr[0] - 1
                dy = curr[1]
                curr = (dx, dy)
            if curr in visited:
                return True

        return False

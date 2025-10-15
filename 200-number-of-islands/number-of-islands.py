class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        visited = set()
        row = len(grid)
        count = 0
        col = len(grid[0])
        for i in range(row):
            for j in range(col):
                if grid[i][j] == "1" and (i,j) not in visited:
                    q = deque()
                    visited.add((i,j))
                    q.append((i,j))
                    directions = [[1,0],[-1,0],[0,1],[0,-1]]
                    while q:
                        R, C =  q.popleft()
                        for x,y in directions:
                            r , c  = R + x, C + y
                            if(r in range(row) and c in range(col) and grid[r][c] == "1" and (r,c) not in visited):
                                visited.add((r,c))
                                q.append((r,c))
                    count += 1
        return count



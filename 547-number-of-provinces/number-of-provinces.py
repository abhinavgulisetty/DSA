class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = [False] * n
        provinces = 0
        
        def dfs(node):
            visited[node] = True
            for i in range(n):
                if isConnected[node][i] == 1 and not visited[i]:
                    dfs(i)
        
        for i in range(n):
            if not visited[i]:
                dfs(i)
                provinces += 1
        return provinces
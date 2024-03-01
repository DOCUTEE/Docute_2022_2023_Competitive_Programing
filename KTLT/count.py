n, m = map(int, input().split())
a = [[' ' for _ in range(m+1)] for _ in range(n+1)]
vis = [[False for _ in range(m+1)] for _ in range(n+1)]

def dfs(i, j):
    vis[i][j] = True
    dx = [1, 0, -1, 0]
    dy = [0, 1, 0, -1]
    for k in range(4):
        ni = i + dx[k]
        nj = j + dy[k]
        if ni >= 1 and nj >= 1 and ni <= n and nj <= m and not vis[ni][nj] and a[ni][nj] == '.':
            dfs(ni, nj)
            vis[ni][nj] = True

cnt = 0
for i in range(1, n+1):
    row = input()
    for j in range(1, m+1):
        a[i][j] = row[j-1]
for i in range(1, n+1):
    for j in range(1, m+1):
        if not vis[i][j] and a[i][j] == '.':
            cnt += 1
            dfs(i, j)
print(cnt)

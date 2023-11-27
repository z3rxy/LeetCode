class Solution:
  def knightDialer(self, n: int) -> int:
    if n == 1:
      return 10
    
    mod = 10**9 + 7
    arr = [[4, 6], [6, 8], [7, 9], [4, 8], [3, 9, 0], [], [1, 7, 0], [2, 6], [1, 3], [2, 4]]
    cur_values = [1] * 10
    
    for _ in range(n - 1):
      new_values = [0] * 10
      for v, num in enumerate(cur_values):
        for p in arr[v]:
          new_values[p] = (new_values[p] + num) % mod
      
      cur_values = new_values
    return sum(cur_values) % mod
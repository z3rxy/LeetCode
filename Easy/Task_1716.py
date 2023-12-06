class Solution:
    def totalMoney(self, n: int) -> int:
        floor = n // 7
        mod = n % 7
        return (28 * floor) + (7 * (floor - 1) * floor // 2) + floor * mod + mod * (mod + 1) // 2
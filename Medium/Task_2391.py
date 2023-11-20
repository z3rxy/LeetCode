class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:

        timePicking = 0
        timeDriving = 0
        m, p, g = -1, -1, -1

        for i in range(len(garbage)):
            timePicking += len(garbage[i])
            if i > 0:
                timeDriving += travel[i - 1]
            if "M" in garbage[i]:
                m = timeDriving
            if "P" in garbage[i]:
                p = timeDriving
            if "G" in garbage[i]:
                g = timeDriving

        return timePicking + (m if m != -1 else 0) + (p if p != -1 else 0) + (g if g != -1 else 0)
class Solution:
    def restoreArray(self, pairs: List[List[int]]) -> List[int]:
        graph = defaultdict(list)
        for u, v in pairs:
            graph[u].append(v)
            graph[v].append(u)

        answer = []

        for node, neighbors in graph.items():
            if len(neighbors) == 1:
                answer = [node, neighbors[0]]
                break

        while len(answer) < len(pairs) + 1:
            last, prev = answer[-1], answer[-2]
            candidates = graph[last]
            if candidates[0] != prev:
                next_element = candidates[0]
            else:
                next_element = candidates[1]
            answer.append(next_element)

        return answer
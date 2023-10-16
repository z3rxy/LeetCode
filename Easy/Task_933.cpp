class RecentCounter {
private:
    queue<int> counter;
public:
    RecentCounter() {
    }

    int ping(int t) {
        counter.push(t);
        while (!counter.empty() && counter.front() < t - 3000) {
            counter.pop();
        }

        return counter.size();
    }
};
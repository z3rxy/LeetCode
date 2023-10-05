class MyStack {
     private ArrayDeque<Integer> MyQueue;
    public MyStack() {
        MyQueue = new ArrayDeque<>();
    }

    public void push(int x) {
        MyQueue.addFirst(x);
    }

    public int pop() {
        return MyQueue.poll();
    }

    public int top() {
        return MyQueue.peek();
    }

    public boolean empty() {
        return MyQueue.isEmpty();
    }


}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
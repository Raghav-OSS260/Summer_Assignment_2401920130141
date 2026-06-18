class MinStack {
private:
    stack<int> St;
    stack<int> minSt;

public:
    MinStack() {
    }

    void push(int val) {
        St.push(val);

        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (St.top() == minSt.top()) {
            minSt.pop();
        }
        St.pop();
    }

    int top() {
        return St.top();
    }

    int getMin() {
        return minSt.top();
    }
};
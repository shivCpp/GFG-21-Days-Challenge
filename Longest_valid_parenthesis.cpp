int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1);  // Initialize stack with -1 to handle base case
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            // Push the index of the opening parenthesis
            st.push(i);
        } else {
            // Pop the top element when encountering a closing parenthesis
            st.pop();

            if (st.empty()) {
                // If stack is empty, push the current index
                st.push(i);
            } else {
                // Calculate the length of the valid substring
                maxLength = max(maxLength, i - st.top());
            }
        }
    }

    return maxLength;
}

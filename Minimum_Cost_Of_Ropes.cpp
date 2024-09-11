public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
      
       // Create a min-heap (priority queue)
        priority_queue<long long, vector<long long>, greater<long long>> minHeap(arr.begin(), arr.end());

        long long totalCost = 0;

        // While more than one rope remains
        while (minHeap.size() > 1) {
            // Extract the two smallest ropes
            long long first = minHeap.top();
            minHeap.pop();
            long long second = minHeap.top();
            minHeap.pop();

            // Calculate the cost of connecting the two ropes
            long long currentCost = first + second;
            totalCost += currentCost;

            // Push the new rope back into the min-heap
            minHeap.push(currentCost);
        }

        return totalCost;
    }

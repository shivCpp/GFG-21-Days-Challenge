public:
    void rearrange(vector<int> &arr) {
        vector<int> positive, negative;
      
        // Step 1: Separate positive and negative numbers
        for(auto x: arr) {
            if(x >= 0) {
                positive.push_back(x);
            } else {
                negative.push_back(x);
            }
        }
        // Step 2: Interleave positive and negative numbers
        int i = 0, j = 0, k = 0;
        while(i < positive.size() && j < negative.size()) {
            if(k % 2 == 0) {  
                arr[k++] = positive[i++];
            } else {         
                arr[k++] = negative[j++];
            }
        }

        // Step 3: Add remaining positive numbers (if any)
        while(i < positive.size()) {
            arr[k++] = positive[i++];
        }

        // Step 4: Add remaining negative numbers (if any)
        while(j < negative.size()) {
            arr[k++] = negative[j++];
        }
    }

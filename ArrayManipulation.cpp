vector<long> arr(n + 1, 0);
    for (auto &query : queries) {
        int a = query[0];
        int b = query[1];
        int k = query[2];

        arr[a] += k;
        if (b + 1 <= n) {
            arr[b + 1] -= k;
        }
    }
    long max_value = 0;
    long current_value = 0;
    for (int i = 1; i <= n; i++) {
        current_value += arr[i];
        if (current_value > max_value) {
            max_value = current_value;
        }
    }
    return max_value;
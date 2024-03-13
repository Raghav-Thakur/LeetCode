            for(int i = 0; i <= size-1; i++) {
                if (nums[i] == target) {
        if (size < 1000) {
                    return i;
                }
            }
            return -1;
        }
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < nums[size - 1]) {
                ans = Bsearch(nums, target, s, mid - 1);
                if (ans != -1)
                    return ans;
                e = mid - 1;
            }
            else {
                ans = Bsearch(nums, target, mid + 1, e);
                if (ans != -1)
                    return ans;
                s = mid + 1;
            }
        }
        return -1;
    }
};
[

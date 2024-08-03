#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int max_val = arr[0];
        for (int i = 2; i < n; i += 2) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }

        printf("%d\n", max_val);
    }

    return 0;
}

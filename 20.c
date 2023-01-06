#include <stdio.h>

const int MAXN = 5005;

int a[MAXN];
int cnt[MAXN];

int main() {
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
cnt[a[i]]++;
}
int ans = 0;
for (int i = 1; i < n; i++) {
if (a[i] < a[i - 1]) {
ans++;
}
}
printf("%d ", ans);
int res = 0;
for (int i = 0; i < n; i++) {
if (cnt[i] > 1) {
res += cnt[i] - 1;
}
}
printf("%d\n", res);
return 0;
}

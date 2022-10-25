// GPA Calculator
// ACCEPTED
// Author @ Abuhena Rony

#include <bits/stdc++.h>

int main() {
    int x, y, testcase, subjects;
    float point, count, avg;
    scanf("%d", &testcase);

    if (testcase <= 5) {
        for (x = 1; x <= testcase; x++) {
            scanf("%d", &subjects);
            count = 0;
            point = 0;
            if(subjects <= 8){
                for (y = 1; y <= subjects; y++) {
                    scanf("%f", &point);
                    if (2 <= point <= 4)
                        count += point;
                }
                avg = count / subjects;
                printf("Case %d: %0.3f\n", x, avg);
            }
        }
    }
    return 0;
}

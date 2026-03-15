#include <stdio.h>

void convert(char type) {
    int opt;
    float val, res;

    printf("Enter option: "); 
    scanf("%d", &opt);

    printf("Enter value: "); 
    scanf("%f", &val);

    if (type == 'L') {
        res = (opt == 1) ? val * 3.28084 : val * 0.3048;
        printf("%.2f %s = %.2f %s\n", val, (opt==1?"m":"ft"), res, (opt==1?"ft":"m"));
    } 
    else if (type == 'W') {
        res = (opt == 1) ? val * 2.20462 : val * 0.453592;
        printf("%.2f %s = %.2f %s\n", val, (opt==1?"kg":"lb"), res, (opt==1?"lb":"kg"));
    } 
    else if (type == 'T') {
        res = (opt == 1) ? (val * 9/5) + 32 : (val - 32) * 5/9;
        printf("%.2f %s = %.2f %s\n", val, (opt==1?"°C":"°F"), res, (opt==1?"°F":"°C"));
    }
}

int main() {
    int ch;

    do {
        printf("\n1.Length 2.Weight 3.Temp 4.Exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("1.m-ft 2.ft-m\n");
            convert('L');
        }
        else if (ch == 2) {
            printf("1.kg-lb 2.lb-kg\n");
            convert('W');
        }
        else if (ch == 3) {
            printf("1.C-F 2.F-C\n");
            convert('T');
        }

    } while (ch != 4);

    return 0;
}
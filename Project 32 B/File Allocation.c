#include <stdio.h>
#include <stdlib.h>

/* Portable replacements for putw/getw (binary write/read of int) */
int putw_portable(int w, FILE *fp) {
    return (fwrite(&w, sizeof(int), 1, fp) == 1) ? w : EOF;
}
int getw_portable(FILE *fp) {
    int w;
    return (fread(&w, sizeof(int), 1, fp) == 1) ? w : EOF;
}

int main() {
    FILE *fp;
    int marks, n, i;

    /* Write phase (binary) */
    fp = fopen("marks.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        fclose(fp);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        if (scanf("%d", &marks) != 1) {
            printf("Invalid marks input.\n");
            fclose(fp);
            return 1;
        }
        if (putw_portable(marks, fp) == EOF) {
            printf("Write error.\n");
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);

    /* Read phase (binary) */
    fp = fopen("marks.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Stored Marks ---\n");
    i = 1;
    while ((marks = getw_portable(fp)) != EOF) {
        printf("Student %d: %d\n", i, marks);
        i++;
    }

    fclose(fp);
    printf("This program is developed By Shrey Dharmesh Dhameliya_25CE024 ");
    return 0;
}

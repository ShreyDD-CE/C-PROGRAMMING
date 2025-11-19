#include <stdio.h>
#include <string.h>

#define MAX 50

struct Coach {
    char name[30];
    int age, experience;
};

struct Team {
    char name[30], sport[20];
    struct Coach coach;
};

void addTeam(struct Team t[], int *n) {
    printf("Team name: "); fgets(t[*n].name, 30, stdin);
    printf("Sport type: "); fgets(t[*n].sport, 20, stdin);
    printf("Coach name: "); fgets(t[*n].coach.name, 30, stdin);
    printf("Coach age: "); scanf("%d", &t[*n].coach.age);
    printf("Experience: "); scanf("%d", &t[*n].coach.experience);
    getchar(); (*n)++;
}

void showTeams(struct Team t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nTeam: %sSport: %sCoach: %sAge: %d, Exp: %d yrs\n",
            t[i].name, t[i].sport, t[i].coach.name,
            t[i].coach.age, t[i].coach.experience);
    }
}

void searchTeam(struct Team t[], int n) {
    char key[30]; int found = 0;
    printf("Search team name: "); fgets(key, 30, stdin);
    for (int i = 0; i < n; i++) {
        if (strcmp(t[i].name, key) == 0) {
            printf("\nFound: %sSport: %sCoach: %sAge: %d, Exp: %d yrs\n",
                t[i].name, t[i].sport, t[i].coach.name,
                t[i].coach.age, t[i].coach.experience);
            found = 1; break;
        }
    }
    if (!found) printf("Team not found.\n");
}

int main() {
    struct Team teams[MAX]; int count = 0, ch;
    do {
        printf("\n1.Add 2.Search 3.Show All 4.Exit: ");
        scanf("%d", &ch); getchar();
        if (ch == 1) addTeam(teams, &count);
        else if (ch == 2) searchTeam(teams, count);
        else if (ch == 3) showTeams(teams, count);
    } while (ch != 4);
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}

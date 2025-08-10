#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void day(int d) {
    setcolor(2);
    if (d == 1) {
        outtextxy(257, 180, "Mon");
    } else if (d == 2) {
        outtextxy(257, 180, "Tue");
    } else if (d == 3) {
        outtextxy(257, 180, "Wed");
    } else if (d == 4) {
        outtextxy(257, 180, "Thu");
    } else if (d == 5) {
        outtextxy(257, 180, "Fri");
    } else if (d == 6) {
        outtextxy(257, 180, "Sat");
    } else if (d == 7) {
        outtextxy(257, 180, "Sun");
    }
}

// Creating a function which return integer, increments year after every 365 days(leap years not considered in this scope)
int year(int j, int y) {
    if (j > 365) {
        y++;
    }
    return y;
}

// Creation function for loading animation
void loading(void) {
    int gd = DETECT, gm, i, check;
    initgraph( & gd, & gm, " ");
    outtextxy(265, 220, "LOADING......");
    rectangle(55, 250, 550, 260);
    for (i = 1; i < 1000; i++) {
        check = 55 + i;
        if (check <= 550) {
            setcolor(YELLOW);
            line(55 + i, 250, 55 + i, 260);
            delay(10);
        }
    }
}

// Main method starts
main() {
    int h = 0, m = 0, s = 0, j, d, y, x;
    char ar[20], ar1[10], ar2[10], a;
    select: ;
    system("cls");
    printf("\t========Selection=========\n");
    printf("\nenter   1.Digital-Clock\n\t2.Digital-Timer\n\t3.-\n\t4.Exit\n");
    printf("enter your choice:");
    scanf("%d", & x);
    printf("\n\t=====Selected Option:%d=====\n", x);
    printf("\n\tPress 'Y' to continue\n\t\t(or)\n\tPress 'N' to choose option again\n:");
    scanf("%s", & a);
    if (a == 'N' || a == 'n') {
        goto select;
    } else if (a == 'Y' || a == 'y') {
        switch (x) {
        case 1:
            system("cls");
            printf("\n\n\t====Digital-Clock Setup====\n");
            printf("\nenter   1.Monday\n\t2.Tuesday\n\t3.Wednesday\n\t4.Thursday\n\t5.Friday\n\t6.Saturday\n\t7.Sunday");
            printf("\nenter day:");
            scanf("%d", & d);
            printf("\nenter year:");
            scanf("%d", & y);
            printf("\nenter day of year(out of 365 days):");
            scanf("%d", & j);
            printf("\nenter time HH MM SS ->[24-hour format]:");
            scanf("%d%d%d", & h, & m, & s);
            if ((h > 24 || m > 60 || s > 60) || y == '\0' || j >= 366 || d > 7) {
                printf("\nERROR-003 : INVALID INPUT!\n");
                break;
            }
            printf("\n\t======Setup Completed======");
            loading();
            cleardevice();
            clock: ;
            for (; j <= 365;) {
                for (; h < 24; h++) {
                    for (; m < 60; m++) {
                        for (; s < 60; s++) {
                            if (j == 1) {
                                setcolor(rand());
                                outtextxy(240, 80, "HAPPY  NEW  YEAR");
                            }
                            if (h == 23 && m == 59 && s == 59) {
                                sprintf(ar, "%02d:%02d:%02d", h, m, s);
                                j++;
                                if (d == 7) {
                                    d = 0;
                                }
                                sprintf(ar, "%02d:%02d:%02d", h, m, s);
                                d++;
                            }
                            day(d);
                            setcolor(4);
                            if (h > 3 && h < 12) {
                                outtextxy(316, 180, "MRN");
                            } else if (h > 11 && h < 16) {
                                outtextxy(316, 180, "AFN");
                            } else if (h > 15 && h < 20) {
                                outtextxy(316, 180, "EVE");
                            } else if (h > 22 || h < 1) {
                                outtextxy(316, 180, "MNIG");
                            } else {
                                outtextxy(316, 180, "NIG");
                            }
                            setcolor(9);
                            if (h < 12) {
                                outtextxy(275, 210, "AM");
                            } else {
                                outtextxy(275, 210, "PM");
                            }
                            sprintf(ar, "Day %d", j);
                            y = year(j, y);
                            sprintf(ar1, "%d", y);
                            sprintf(ar2, "%02d:%02d:%02d", h, m, s);
                            setcolor(7);
                            outtextxy(275, 200, ar2);
                            setcolor(8);
                            outtextxy(252, 230, ar);
                            setcolor(14);
                            sprintf(ar, "%02d:%02d:%02d", h, m, s);
                            outtextxy(316, 230, ar1);
                            setcolor(3);
                            circle(300, 217, 90);
                            circle(300, 217, 70);
                            rectangle(280, 107, 320, 127);
                            for (double i = 0; i < 89999900; i++) {
                                i++;
                                i--;
                            }
                            cleardevice();
                        }
                        s = 0;
                    }
                    m = 0;
                }
                h = 0;
            }
            j = 1;
            goto clock;
            getch();
            closegraph();
            break;
        case 2:
            system("cls");
            printf("\n\n\t====Digital-Timer Setup====\n");
            printf("\nenter HH MM SS for timer:");
            scanf("%d%d%d", & h, & m, & s);
            if (h > 24 || m > 60 || s > 60) {
                printf("\nERROR-004 : INVALID INPUT!\n");
                break;
            }
            printf("\n\n\t=====Setup Completed=====\n");
            loading();
            cleardevice();
            for (; h >= 0;) {
                for (; m >= 0; m--) {
                    for (; s >= 0; s--) {
                        sprintf(ar, "%02d:%02d:%02d", h, m, s);
                        setcolor(3);
                        circle(292, 220, 63);
                        circle(292, 220, 78);
                        rectangle(240, 190, 342, 220);
                        rectangle(280, 123, 300, 143);
                        rectangle(260, 113, 320, 123);
                        if (h == 0 && m == 0 && (s > 10 && s <= 30)) {
                            setcolor(12);
                        } else if (h == 0 && m == 0 && s <= 10) {
                            if (h == 0 && m == 0 && s == 0) {
                                setcolor(2);
                                outtextxy(248, 230, "Time Up !!!!!!!");
                            }
                            setcolor(4);
                        } else {
                            setcolor(8);
                        }
                        if (h < 0 && m >= 0 && s >= 0) {
                            break;
                        }
                        if (h == 0 && m == 0) {
                            outtextxy(278, 200, ar);
                        } else {
                            outtextxy(265, 200, ar);
                        }
                        for (double i = 0; i < 89999900; i++) {
                            i++;
                            i--;
                        }
                        if (s > 0 && s < 11) {
                            cleardevice();
                        }
                    }
                    s = 59;
                    if (m == 0) {
                        h--;
                        m = 60;
                    }
                }
            }
            getch();
            closegraph();
            break;
        case 3:
            loading();
            cleardevice();
            for (; h <= 23; h++) {
                for (; m <= 59; m++) {
                    for (; s <= 59; s++) {
                        setcolor(15);
                        sprintf(ar, "%02d:%02d:%02d", h, m, s);
                        outtextxy(278, 200, ar);
                        setcolor(3);
                        circle(292, 220, 63);
                        circle(292, 220, 78);
                        rectangle(240, 190, 342, 220);
                        rectangle(280, 123, 300, 143);
                        rectangle(260, 113, 320, 123);
                        while (kbhit()) { //outtextxy(30,50,ar);}
                            if (getch() == 'c') {
                                printf("\n%02d:%02d:%02d", h, m, s);
                            }
                        }

                        for (double i = 0; i < 89999900; i++) {
                            i++;
                            i--;
                        }
                        cleardevice();
                    }
                    s = 0;
                }
                m = 0;
            }
            h = 0;
            getch();
            closegraph();
            break;
        case 4:
            exit(0);
        default:
            printf("\nERROR-001 : INVALID SELECTION!\n");
        }
    } else {
        printf("\nERROR-002 : INVALID PRESS!\n");
        exit(0);
    }
}

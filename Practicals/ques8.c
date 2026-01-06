#include <stdio.h>
#include <string.h>
int main() {
    char user[100], pass[100];
    const char su[] = "admin", sp[] = "1234";
    if (scanf("%99s %99s", user, pass) != 2) return 1;
    int ok = (strcmp(user, su) == 0) && (strcmp(pass, sp) == 0);
    printf("%s\n", ok ? "Login Successful." : "Invalid Login.");
    return 0;
}
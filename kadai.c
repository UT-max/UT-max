#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

// パスワードの強度をチェックする関数
void checkPasswordStrength(const char* password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    // 各基準をチェック
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    // 強度の判定
    int isStrong = (length >= MIN_LENGTH) && hasUpper && hasLower && hasDigit;

    if (isStrong) {
        printf("\u5f37\u3044\u30d1\u30b9\u30ef\u30fc\u30c9\u3067\u3059\uff01\n");
    } else {
        printf("\u30d1\u30b9\u30ef\u30fc\u30c9\u306f\u6b21\u306e\u3088\u3046\u306b\u6539\u5584\u3057\u3066\u304f\u3060\u3055\u3044\uff1a\n");

        if (length < MIN_LENGTH) {
            printf("- \u9577\u3055\u3092 %d \u6587\u5b57\u4ee5\u4e0a\u306b\u3059\u308b\u3002\n", MIN_LENGTH);
        }
        if (!hasUpper) {
            printf("- \u5927\u6587\u5b57\u3092\u542b\u3081\u308b\u3002\n");
        }
        if (!hasLower) {
            printf("- \u5c0f\u6587\u5b57\u3092\u542b\u3081\u308b\u3002\n");
        }
        if (!hasDigit) {
            printf("- \u6570\u5b57\u3092\u542b\u3081\u308b\u3002\n");
        }
    }
}

int main() {
    char password[100];

    printf("\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: ");
    scanf("%99s", password);

    checkPasswordStrength(password);

    return 0;
}

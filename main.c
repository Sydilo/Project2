#include <stdio.h>
#include <string.h>

int main() {
    char answer1[4], answer2[4], answer3[4], input[4];
    printf("Це система діагностики COVID-19!!! Варіанти відповіді (yes or no)\n");
    printf("Запитання 1: Чи була у вас підвищена температура протягом останніх 14 днів? \n");
    while(1) {
        scanf("%s", input);
        if (strcmp(input, "yes") == 0 || strcmp(input, "no") == 0) {
            strcpy(answer1, input);
            break;
        }
        printf("Будь ласка, введіть yes або no:");
    }
    if (strcmp(answer1, "yes") == 0) {
        printf("Запитання 2: Чи спостерігався у вас сухий кашель протягом останніх 14 днів?\n");
        while(1) {
            scanf("%s", input);
            if (strcmp(input, "yes") == 0 || strcmp(input, "no") == 0) {
                strcpy(answer2, input);
                break;
            }
            printf("Будь ласка, введіть коректну відповідь (yes або no):");
        }

    } else if (strcmp(answer1, "no") == 0) {
        printf("Враховуючи симптоми, малоймовірно, що у вас COVID-19. Проте, будь ласка, продовжуйте практикувати соціальне дистанціювання та дотримуйтеся вказівок  МОС, щоб запобігти поширенню вірусу.\n");
    }
    if (strcmp(answer2, "yes") == 0) {
        printf("Запитання 3: Чи відчували ви задишку або ускладнене дихання протягом останніх 14 днів? ye\n");
        while (1) {
            scanf("%s", input);
            if (strcmp(input, "yes") == 0 || strcmp(input, "no") == 0) {
                strcpy(answer3, input);
                break;
            }
            printf("Будь ласка, введіть yes або no:");
        }
    } else if (strcmp(answer2, "no") == 0){
        printf("Враховуючи симптоми, малоймовірно, що у вас COVID-19. Проте, будь ласка, продовжуйте стежити за своїми симптомами та зверніться до медичного працівника, якщо у вас виникнуть інші симптоми.\n");
    }

    if (strcmp(answer3, "yes") == 0) {
        printf("Судячи з симптомів, у Вас може бути COVID-19. Негайно зверніться до лікаря!\n");
        while (1) {
            scanf("%s", input);
            if (strcmp(input, "yes") == 0 || strcmp(input, "no") == 0) {
                break;
            }
            printf("Будь ласка, введіть yes or no:\n");
        }
    } else if (strcmp(answer3, "no") == 0) {
        printf("Враховуючи ваші симптоми, у вас може бути респіраторна інфекція, відмінна від COVID-19. Будь ласка, зверніться до медичного працівника для отримання подальших порад.\n");
    }

    return 0;
}
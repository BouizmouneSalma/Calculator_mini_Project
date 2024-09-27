#include <stdio.h>
#include <stdlib.h>
#include <math.h>//utilisé cette librerie pour appelé les fonction de lmath comme sqrt(racine caree)...

int main() {
    int operation;
    //pour afficher le Munu je veux utiliser un boucle while loop infinie finalisé par une codition de que le choix==9(quiter) faire un break
    while (1) {
        printf("\n=== Menu ===\n");
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Moyenne\n");
        printf("6. Valeur absolue\n");
        printf("7. Exponentiation\n");
        printf("8. Racine carrée\n");
        printf("9. Quitter\n");
        scanf("%d", &operation);

        if (operation == 1) {
            int n;
            printf("Combien de nombres souhaitez-vous additionner ? ");
            scanf("%d", &n);
            double somme = 0, nombre;
            for (int i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &nombre);
                somme += nombre;
            }
            printf("Le résultat de l'addition est : %.2f\n", somme);

        } else if (operation == 2) {
            double a, b;
            printf("Entrez deux nombres  : ");
            scanf("%lf %lf", &a, &b);
            printf("Le résultat de la soustraction est : %.2f\n", a - b);

        } else if (operation == 3) {
            int n;
            printf("Combien de nombres souhaitez-vous multiplier ? ");
            scanf("%d", &n);
            double produit = 1, nombre;
            for (int i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &nombre);
                produit *= nombre;
            }
            printf("Le résultat de la multiplication est : %.2f\n", produit);

        } else if (operation == 4) {
            double a, b;
            printf("Entrez deux nombres  : ");
            scanf("%lf %lf", &a, &b);
            if (b == 0) {
                printf("Erreur : Division par zéro.\n");
            } else {
                printf("Le résultat de la division est : %.2f\n", a / b);
            }

        } else if (operation == 5) {
            int n;
            printf("Combien de nombres souhaitez-vous pour calculer la moyenne ? ");
            scanf("%d", &n);
            double somme = 0, nombre;
            for (int i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &nombre);
                somme += nombre;
            }
            printf("La moyenne est : %.2f\n", somme / n);

        }else if (operation == 6) {
            double a;
            printf("Entrez un nombre : ");
            scanf("%lf", &a);
            printf("La valeur absolue est : %.2f\n", abs(a));
        }else if (operation == 7) {
            double base, puissance;
            printf("Entrez la base et la puissance  : ");
            scanf("%lf %lf", &base, &puissance);
            printf("Le résultat de l'exponentiation est : %.2f\n", pow(base, puissance));
        } else if (operation == 8) {
            double a;
            scanf("%lf", &a);
            if (a < 0) {
                printf("Erreur : La racine carrée d'un nombre négatif n'est pas définie.\n");
            } else {
                printf("La racine carrée est : %.2f\n", sqrt(a));
            }

        }
        else if (operation == 9) {
            printf("Fin !\n");
            break;

        } else {
            printf("operation invalide. Veuillez réessayer.\n");
        }
    }
    return 0;
}

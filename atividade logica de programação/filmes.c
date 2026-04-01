#include <stdio.h>
#include <ctype.h>

int main() {
    char resp;

    printf("Responda com [S] para Sim ou [N] para Não.\n\n");

    printf("Drama [S] [N]? ");
    scanf(" %c", &resp);
    resp = toupper(resp);

    if (resp == 'S') {
        printf("Aventura [S] [N]? ");
        scanf(" %c", &resp);
        resp = toupper(resp);

        if (resp == 'S') {
            printf("Suspense [S] [N]? ");
            scanf(" %c", &resp);
            resp = toupper(resp);
            if (resp == 'S') printf("Você deve assistir Lost\n");
            else {
                printf("Fantasia [S] [N]? ");
                scanf(" %c", &resp);
                resp = toupper(resp);
                if (resp == 'S') printf("Você deve assistir Game of Thrones\n");
                else printf("Desculpe! Não tenho série para indicar\n");
            }
        } else {
            printf("Mistério [S] [N]? ");
            scanf(" %c", &resp);
            resp = toupper(resp);
            if (resp == 'S') {
                printf("Sci-Fi [S] [N]? ");
                scanf(" %c", &resp);
                resp = toupper(resp);
                if (resp == 'S') printf("Você deve assistir X-Files\n");
                else {
                    printf("Médico [S] [N]? ");
                    scanf(" %c", &resp);
                    resp = toupper(resp);
                    if (resp == 'S') printf("Você deve assistir House M.D.\n");
                    else printf("Desculpe! Não tenho série para indicar\n");
                }
            } else {
                printf("Crime [S] [N]? ");
                scanf(" %c", &resp);
                resp = toupper(resp);
                if (resp == 'S') printf("Você deve assistir Breaking Bad\n");
                else {
                    printf("Político [S] [N]? ");
                    scanf(" %c", &resp);
                    resp = toupper(resp);
                    if (resp == 'S') printf("Você deve assistir House of Cards\n");
                    else printf("Desculpe! Não tenho série para indicar\n");
                }
            }
        }
    } 
    else {
        printf("Comédia [S] [N]? ");
        scanf(" %c", &resp);
        resp = toupper(resp);

        if (resp == 'S') {
            printf("Romance [S] [N]? ");
            scanf(" %c", &resp);
            resp = toupper(resp);
            if (resp == 'S') printf("Você deve assistir How I Met Your Mother\n");
            else {
                printf("Musical [S] [N]? ");
                scanf(" %c", &resp);
                resp = toupper(resp);
                if (resp == 'S') printf("Você deve assistir Glee\n");
                else {
                    printf("Nerd [S] [N]? ");
                    scanf(" %c", &resp);
                    resp = toupper(resp);
                    if (resp == 'S') printf("Você deve assistir The Big Bang Theory\n");
                    else printf("Desculpe! Não tenho série para indicar\n");
                }
            }
        } 
        // --- BLOCO AÇÃO ---
        else {
            printf("Ação [S] [N]? ");
            scanf(" %c", &resp);
            resp = toupper(resp);

            if (resp == 'S') {
                printf("Drama [S] [N]? ");
                scanf(" %c", &resp);
                resp = toupper(resp);
                if (resp == 'S') {
                    printf("Mistério [S] [N]? ");
                    scanf(" %c", &resp);
                    resp = toupper(resp);
                    if (resp == 'S') printf("Você deve assistir Homeland\n");
                    else {
                        printf("Terror [S] [N]? ");
                        scanf(" %c", &resp);
                        resp = toupper(resp);
                        if (resp == 'S') printf("Você deve assistir The Walking Dead\n");
                        else printf("Desculpe! Não tenho série para indicar\n");
                    }
                } else {
                    printf("Policial [S] [N]? ");
                    scanf(" %c", &resp);
                    resp = toupper(resp);
                    if (resp == 'S') printf("Você deve assistir CSI\n");
                    else {
                        printf("Crime [S] [N]? ");
                        scanf(" %c", &resp);
                        resp = toupper(resp);
                        if (resp == 'S') printf("Você deve assistir Dexter\n");
                        else printf("Desculpe! Não tenho série para indicar\n");
                    }
                }
            } else {
                printf("Desculpe! Não tenho série para indicar\n");
            }
        }
    }

    return 0;
}

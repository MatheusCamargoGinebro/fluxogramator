#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, "portuguese");
    
    printf("\nIIIIIIIIIIFFFFFFFFFFFFFFFFFFFFFF   SSSSSSSSSSSSSSS PPPPPPPPPPPPPPPPP\nI::::::::IF::::::::::::::::::::F SS:::::::::::::::SP::::::::::::::::P  \nI::::::::IF::::::::::::::::::::FS:::::SSSSSS::::::SP::::::PPPPPP:::::P \nII::::::IIFF::::::FFFFFFFFF::::FS:::::S     SSSSSSSPP:::::P     P:::::P\n  I::::I    F:::::F       FFFFFFS:::::S              P::::P     P:::::P\n  I::::I    F:::::F             S:::::S              P::::P     P:::::P\n  I::::I    F::::::FFFFFFFFFF    S::::SSSS           P::::PPPPPP:::::P \n  I::::I    F:::::::::::::::F     SS::::::SSSSS      P:::::::::::::PP  \n  I::::I    F:::::::::::::::F       SSS::::::::SS    P::::PPPPPPPPP    \n  I::::I    F::::::FFFFFFFFFF          SSSSSS::::S   P::::P            \n  I::::I    F:::::F                         S:::::S  P::::P            \n  I::::I    F:::::F                         S:::::S  P::::P            \nII::::::IIFF:::::::FF           SSSSSSS     S:::::SPP::::::PP          \nI::::::::IF::::::::FF           S::::::SSSSSS:::::SP::::::::P          \nI::::::::IF::::::::FF           S:::::::::::::::SS P::::::::P          \nIIIIIIIIIIFFFFFFFFFFF            SSSSSSSSSSSSSSS   PPPPPPPPPP");
    
    printf("\n\nBem vindos, bixos.\n\n");

    system("pause");
    system("cls");
    printf("Levem na brincadeira >:)\n\n");

    system("pause");
    system("cls");
    
    int cont=0;

    do
    {
        system("start explorer");
        cont++;
    } while (cont<5);
    

    return 0;

}

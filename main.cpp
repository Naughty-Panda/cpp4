#include <iostream>

int main()
{

    // 4.1

    int nSum(0), nInput(0);
    std::cout << "Please enter first integer: " << std::endl;
    std::cin >> nInput;
    nSum += nInput;

    std::cout << "Please enter second integer: " << std::endl;
    std::cin >> nInput;
    nSum += nInput;

    std::cout << ((nSum >= 10 && nSum <= 20) ? "true" : "false") << std::endl;

    // 4.2

    const int nConstA(4), nConstB(6);

    printf("\nConst A = %d\nConst B = %d\n", nConstA, nConstB);
    printf("A + B = %d\n", nConstA + nConstB);
    printf("%s\n", ((nConstA == 10 && nConstB == 10) || nConstA + nConstB == 10) ? "true" : "false");

    // 4.3

    const int nLast(50);

    printf("\nOdd numbers [0 - %d]:\n", nLast);

    for (int i = 0; i < nLast; i++) {
        if (i%2)
            printf("%d%s", i, (i == nLast) || (i == nLast - 1) ? ".\n\n" : ", ");
    }

    // 4.4

    int nIterCount(0);
    char sResult[64] = "%d is prime!\n";
    printf("Testing prime numbers. Enter an integer: ");
    scanf("%d", &nInput);

    if (nInput == 2) goto skip;

    if (!(nInput % 2)) {
        sprintf(sResult, "%d is a composite number. Divider is 2.\n", nInput);
        nIterCount++;
    }
    else {
        for (int i = 3; i < nInput / 2; i++) {
            if (i%2) {
                if (!(nInput % i)) {
                    sprintf(sResult, "%d is a composite number. Divider is %d.\n", nInput, i);
                    nIterCount++;
                    break;
                }
            //printf("i = %d\n", i);
            nIterCount++;
            }
        }
    }
    skip:
    printf(sResult, nInput);
    printf("Calculated in %d iterations.\n\n", nIterCount);

    // 4.5
    
    printf("Enter a year: ");
    scanf("%d", &nInput);

    sprintf(sResult, "It's a common year.");

    if (!(nInput % 4)) {
        sprintf(sResult, "It's a leap year!");
        if (!(nInput % 100)) {
            sprintf(sResult, "It's a common year.");
            if (!(nInput % 400)) {
                sprintf(sResult, "It's a leap year!");
                if (!(nInput % 40000)) {
                    sprintf(sResult, "In the grim darkness of the far future, there is only war...");
                }
            }
        }
    }

    std::cout << sResult << std::endl;


    return 0;
}

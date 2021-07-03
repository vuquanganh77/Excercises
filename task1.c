#include<stdio.h>

int DemPhanTu(int a[], int n) {

            int i, j;

            int dem=1;

            int tam=2;

            for(i=1; i<n; i++) {

                        for(j=0; j<i; j++) {

                                    if(a[j]==a[i]) {

                                                tam = 0;

                                                break;

                                    } else

                                                tam = 1;

                        }

                        if(tam == 1)

                                    dem++;

            }

            return dem;

}

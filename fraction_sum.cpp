void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {
    int a_c = 0, b_c = 0;
    while (true) {
        if (a_c >= na) {
            for (int i = a_c + b_c; i < na + nb; i++) {
                c[i] = b[b_c];
                b_c++;
            }
            break;
        } else if (b_c >= nb) {
            for (int i = a_c + b_c; i < na + nb; i++) {
                c[i] = a[a_c];
                a_c++;
            }
            break;
        } 
        if (a[a_c] <= b[b_c]) {
            c[a_c + b_c] = a[a_c];
            a_c += 1;
        } else {
            c[a_c + b_c] = b[b_c];
            b_c += 1;
        }
    }
}
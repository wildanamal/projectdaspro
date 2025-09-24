#include <stdio.h>

int main() {
    int pilihan;
    int saldo = 100000; // Saldo awal
    int nominal;

    do {
        // Tampilkan menu
        printf("\n=== Mesin ATM ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Setor Uang\n");
        printf("3. Tarik Uang\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1: // Cek Saldo
                printf("Saldo Anda saat ini: Rp%d\n", saldo);
                break;

            case 2: // Setor Uang
                printf("Masukkan nominal setor: Rp");
                scanf("%d", &nominal);
                if (nominal > 0) {
                    saldo += nominal;
                    printf("Setoran berhasil! Saldo terbaru: Rp%d\n", saldo);
                } else {
                    printf("Nominal tidak valid.\n");
                }
                break;

            case 3: // Tarik Uang
                printf("Masukkan nominal tarik: Rp");
                scanf("%d", &nominal);
                if (nominal > 0) {
                    if (nominal <= saldo) {
                        saldo -= nominal;
                        printf("Penarikan berhasil! Saldo terbaru: Rp%d\n", saldo);
                    } else {
                        printf("Saldo tidak cukup.\n");
                    }
                } else {
                    printf("Nominal tidak valid.\n");
                }
                break;

            case 4: // Keluar
                printf("Terima kasih telah menggunakan ATM.\n");
                break;

            default: // Input tidak valid
                printf("Menu tidak valid. Silakan pilih 1-4.\n");
                break;
        }

    } while(pilihan != 4); // Berhenti jika pilih keluar

    return 0;
}

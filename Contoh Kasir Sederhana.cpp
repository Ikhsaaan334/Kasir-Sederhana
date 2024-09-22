#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int beras, minyak, kecap, gula, garam; // variabel barang
	int hargaBeras, hargaMinyak, hargaKecap, hargaGula, hargaGaram;
	int totalHarga, pilihan;
	
	beginning:
		
	printf("Silahkan input angka pembelian, lakukan input 0 apabila tidak membeli!\n");
	
	// Input unit barang yang dibeli
	
	printf("Harga Beras \t\tRp 15.000\n");
	printf("Beras: ");
	scanf("%d", &beras); getchar();
	
	printf("Harga Minyak \t\tRp 12.500");
	printf("\nMinyak: ");
	scanf("%d", &minyak); getchar();
	
	printf("Harga Kecap: \t\tRp 10.000");
	printf("\nKecap: ");
	scanf("%d", &kecap); getchar();
	
	printf("Harga Gula: \t\tRp 7.000");
	printf("\nGula: ");
	scanf("%d", &gula); getchar();
	
	printf("Harga Garam \t\tRp 7.000");
	printf("\nGaram: ");
	scanf("%d", &garam); getchar();
	
	// Perhitungan
	
	hargaBeras = 15000 * beras;
	hargaMinyak = 12500 * minyak;
	hargaKecap = 10000 * kecap;
	hargaGula = 7000 * gula;
	hargaGaram = 7000 * garam;
	
	totalHarga = hargaBeras + hargaMinyak + hargaKecap + hargaGula + hargaGaram;
	
	// Daftar Pembelian
	
	system("cls");
	printf("Beras %d unit = Rp %d\n", beras, hargaBeras);
	printf("Minyak %d unit = Rp %d\n", minyak, hargaMinyak);
	printf("Kecap %d unit = Rp %d\n", kecap, hargaKecap);
	printf("Gula %d unit = Rp %d\n", gula, hargaGula);
	printf("Garam %d unit = Rp %d\n", garam, hargaGaram);
	
	printf("Total Harga Pembelian = Rp %d\n", totalHarga);
	
	printf("Menu Kasir\n");
	printf("1. Kembali ke awal\n");
	printf("2. Mematikan program\n");
	
	scanf("%d", &pilihan); getchar();
	
	switch(pilihan){
		case 1:{
			system("cls");
			goto beginning;
			break;
		}
		case 2:{
			printf("Program dimatikan");
			break;
		}
	}
	
	return 0;
}


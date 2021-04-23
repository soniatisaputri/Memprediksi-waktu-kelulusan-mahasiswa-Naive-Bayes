#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float pLulus =0.57;float pNoLulus =0.42;//done
	
	float S1Lulus =0.63;float D3Lulus =0.36;float TfLulus=0.90;float MTfLulus=0.09;
	float LakiLulus=0.90;float PerLulus=0.09;float sksALulus=0.36;float sksBLulus=0.63;float ipkALulus=0.00;float ipkBLulus=1.00;
	
	float S1GLulus =0.25;float D3GLulus =0.75;float TfGLulus=1;float MTfGLulus=0;
	float LakiGLulus=0.87;float PerGLulus=0.12;float sksAGLulus=0.75;float sksBGLulus=0.25;float ipkAGLulus=0.37;float ipkBGLulus=0.62;
	
	float Px1;float Px2;//buat yg X|lulus dan tidak lulus
	float HasilTepat;//Hasil akhir Tepat
	float HasilNoTepat;//Hasil akhir tidak tepat
	printf("==============PROGRAM MENGHITUNG PERKIRAAN LULUS TEPAT WAKTU atau TIDAK================\n");
	printf("1. Jenjang S1 jurusan Teknik Informatika\n");
	printf("2. Jenjang D3 jurusan Teknik Informatika\n");
	printf("3. Jenjang D3 jurusan Manajemen Teknik Informatika\n");
	printf("Anda ingin memperkirakan data mahasiswa yang ... \n");
	int yang;
	scanf("%d",&yang);
	switch(yang){			
							
		case 1 :
			printf("Berikut adalah Pilihan yang bisa dipilih\n");
	printf("1. Jenjang 		 = S1\n");//tfLaki
	printf("   Jurusan 		 = Teknik Informatika\n");
	printf("   Jenis Kelamin        = Laki-Laki\n");
	printf("   Total Sks            = Inputan user\n");
	printf("   IPK	 		 = Inputan user\n");//2.00 - 2.70
	
	printf("2. Jenjang 		 = S1\n");//tfLaki
	printf("   Jurusan 		 = Teknik Informatika\n");
	printf("   Jenis Kelamin        = Perempuan\n");
	printf("   Total Sks            = Inputan User\n");
	printf("   IPK	 		 = Inputan User\n");
	
	int pilihan;
	float ipkIn;
	printf("Silahkan Masukan Pilihan Anda : ");
	scanf("%d",&pilihan);
	switch(pilihan){
		case 1 :
			printf("Masukan Total SKS : ");
			int sksIn;
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
				
					printf("\nMenghitung P(X|Status kelulusan=Tepat)\n\n");
					Px1 = S1Lulus * TfLulus * LakiLulus * sksALulus * ipkALulus;
					Px2 = S1GLulus * TfGLulus * LakiGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf \n Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf \n Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
			}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * LakiLulus * sksALulus * ipkBLulus;
					Px2 = S1GLulus * TfGLulus * LakiGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n,  Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n,  Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
		
			else if(sksIn <=150 && ipkIn <= 2.75){
			
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * LakiLulus * sksBLulus * ipkALulus;
					Px2 = S1GLulus * TfGLulus * LakiGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * LakiLulus * sksBLulus * ipkBLulus;
					Px2 = S1GLulus * TfGLulus * LakiGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
						
			break;			
		case 2 :
			printf("Masukan Total SKS : ");
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * PerLulus * sksALulus * ipkALulus;
					Px2 = S1GLulus * TfGLulus * PerGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * PerLulus * sksALulus * ipkBLulus;
					Px2 = S1GLulus * TfGLulus * PerGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			
			else if(sksIn <=150 && ipkIn <= 2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * PerLulus * sksBLulus * ipkALulus;
					Px2 = S1GLulus * TfGLulus * PerGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = S1Lulus * TfLulus * PerLulus * sksBLulus * ipkBLulus;
					Px2 = S1GLulus * TfGLulus * PerGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			}			
			
			break;
		case 2 :
			printf("Berikut adalah Pilihan yang bisa dipilih\n");
	printf("1. Jenjang 		 = D3\n");//tfLaki
	printf("   Jurusan 		 = Teknik Informatika\n");
	printf("   Jenis Kelamin        = Laki-Laki\n");
	printf("   Total Sks            = Inputan user\n");
	printf("   IPK	 		 = Inputan user\n");//2.00 - 2.70
	
	printf("2. Jenjang 		 = D3\n");//tfLaki
	printf("   Jurusan 		 = Teknik Informatika\n");
	printf("   Jenis Kelamin        = Perempuan\n");
	printf("   Total Sks            = Inputan User\n");
	printf("   IPK	 		 = Inputan User\n");

	int pilihan2;	
	printf("Silahkan Masukan Pilihan Anda : ");
	scanf("%d",&pilihan2);
	switch(pilihan2){
		case 1 :			
			printf("Masukan Total SKS : ");
			int sksIn;
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * LakiLulus * sksALulus * ipkALulus;
					Px2 = D3GLulus * TfGLulus * LakiGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * LakiLulus * sksALulus * ipkBLulus;
					Px2 = D3GLulus * TfGLulus * LakiGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			
		else if(sksIn <=150 && ipkIn <= 2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * LakiLulus * sksBLulus * ipkALulus;
					Px2 = D3GLulus * TfGLulus * LakiGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * LakiLulus * sksBLulus * ipkBLulus;
					Px2 = D3GLulus * TfGLulus * LakiGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
						
			break;			
		case 2 :		
			printf("Masukan Total SKS : ");
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * PerLulus * sksALulus * ipkALulus;
					Px2 = D3GLulus * TfGLulus * PerGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * PerLulus * sksALulus * ipkBLulus;
					Px2 = D3GLulus * TfGLulus * PerGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			
			else if(sksIn <=150 && ipkIn <= 2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * PerLulus * sksBLulus * ipkALulus;
					Px2 = D3GLulus * TfGLulus * PerGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * TfLulus * PerLulus * sksBLulus * ipkBLulus;
					Px2 = D3GLulus * TfGLulus * PerGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			}			
			break;			
	
	
		case 3 :
			printf("Berikut adalah Pilihan yang bisa dipilih\n");
	printf("1. Jenjang 		 = D3\n");//tfLaki
	printf("   Jurusan 		 = Manajemen Teknik Informatika\n");
	printf("   Jenis Kelamin        = Laki-Laki\n");
	printf("   Total Sks            = Inputan user\n");
	printf("   IPK	 		 = Inputan user\n");//2.00 - 2.70
	
	printf("2. Jenjang 		 = D3\n");//tfLaki
	printf("   Jurusan 		 = Manajemen Teknik Informatika\n");
	printf("   Jenis Kelamin        = Perempuan\n");
	printf("   Total Sks            = Inputan User\n");
	printf("   IPK	 		 = Inputan User\n");
		
	int pilihan3;		
	printf("Silahkan Masukan Pilihan Anda : ");
	scanf("%d",&pilihan3);
	switch(pilihan3){
		case 1 :			
			printf("Masukan Total SKS : ");
			int sksIn;
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * LakiLulus * sksALulus * ipkALulus;
					Px2 = D3GLulus * MTfGLulus * LakiGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * LakiLulus * sksALulus * ipkBLulus;
					Px2 = D3GLulus * MTfGLulus * LakiGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			
			else if(sksIn <=150 && ipkIn <= 2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * LakiLulus * sksBLulus * ipkALulus;
					Px2 = D3GLulus * MTfGLulus * LakiGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * LakiLulus * sksBLulus * ipkBLulus;
					Px2 = D3GLulus * MTfGLulus * LakiGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
						
			break;			
		case 2 :		
			printf("Masukan Total SKS : ");
			scanf("%d",&sksIn);
			printf("Masukan Nilai ipk : ");
			scanf("%f",&ipkIn);
			if(sksIn <=125 && ipkIn <=2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * PerLulus * sksALulus * ipkALulus;
					Px2 = D3GLulus * MTfGLulus * PerGLulus * sksAGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=125  && ipkIn <= 3.40 ) {
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * PerLulus * sksALulus * ipkBLulus;
					Px2 = D3GLulus * MTfGLulus * PerGLulus * sksAGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lfd",HasilTepat,HasilNoTepat);
				}
			
			else if(sksIn <=150 && ipkIn <= 2.75){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * PerLulus * sksBLulus * ipkALulus;
					Px2 = D3GLulus * MTfGLulus * PerGLulus * sksBGLulus * ipkAGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf\n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf\n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
				else if(sksIn <=150 && ipkIn <= 3.40){
					printf("Menghitung P(X|Status kelulusan=Tepat)\n");
					Px1 = D3Lulus * MTfLulus * PerLulus * sksBLulus * ipkBLulus;
					Px2 = D3GLulus * MTfGLulus * PerGLulus * sksBGLulus * ipkBGLulus;
					printf("Nilai Px Lulus Tepat Waktu : %.3lf \n, dan Nilai Px Lulus Tidak Tepat Waktu : %.3lf\n",Px1,Px2);
					HasilTepat=Px1*pLulus;
					HasilNoTepat=Px2*pNoLulus;
					printf("Kesimpulan Lulus Tepat Waktu : %.3lf \n, dan Kesimpulan Lulus Tidak Tepat Waktu: %.3lf",HasilTepat,HasilNoTepat);
				}
			}			
			break;	
			
	}
			
	return 0;
}


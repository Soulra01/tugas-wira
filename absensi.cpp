#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_limit 250

//structure
typedef struct{
    char name[max_limit];
    char nim[max_limit];
    int absensi;
}User;

//declare
User siswa[max_limit];
FILE* fps; 
//function
void menu(){
    puts("------Absensi Mahasiswa-----");
    puts("1.Registrasi");
    puts("2.Absensi");
    puts("3.Exit");
}
void registrasi(){
    char temp[max_limit];
    fps = fopen("Datasiswa.wira", "a");
    printf("Nama Siswa : ");
    scanf("%s", siswa->name);
    strcpy(temp,siswa->name);
    printf("Nim : ");
    scanf("%s", siswa->nim);
    siswa->absensi = 0;
    fprintf(fps, "%s %s %d\n", siswa->name, siswa->nim, siswa->absensi);
    printf("\nHallo %s Namamu telah tersimpan!!!\n",temp);
    fclose(fps);

}

int main(){
    // menu();
    registrasi();

}
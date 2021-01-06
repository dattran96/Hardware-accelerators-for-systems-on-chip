#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h> 

#define BASE_ADDRESS 0x0400000000
#define PAGE_SIZE 4096

int main (int argc, char *argv[]){
       	volatile unsigned long int *mapped_region;
        int memDescriptor = open("/dev/mem", O_RDWR | O_SYNC);
           
        mapped_region = (volatile unsigned long int*)mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, memDescriptor, BASE_ADDRESS);
	unsigned long int opA = 13;
	unsigned long int opB = 11;

        //Write to the first register
        *(mapped_region) = opA;

        //Write to the second register
        *(mapped_region + 1) = opB;

        //Write to the third register
        printf("Read back value Reg3 ( %d product %d): %d \n", opA, opB, *(mapped_region + 2));
	
	//sleep(1);	
	

}

#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h> 

#define BASE_ADDRESS 0x00A0000000
#define PAGE_SIZE 4096

int main (int argc, char *argv[]){
       	volatile unsigned int *mapped_region;
        int memDescriptor = open("/dev/mem", O_RDWR | O_SYNC);
              
        mapped_region = (volatile unsigned int*)mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, memDescriptor, BASE_ADDRESS);
	printf("Writing multiple values to the registers and read back value to guess pattern \n");

	
	printf("********Register 1******* \n");
	//Write to first Register and read back, do it multilple times
	for(unsigned int i = 0; i < 3 ; i++)
	{	
        *(mapped_region) = i;
        printf("Read back value of %d Reg1: %u \n", i,*mapped_region);
	}

	printf("********Register 2******* \n");
        //Write to second Register and read back, do it multilple times
	for(unsigned int i=0;i<3;i++)
	{
        *(mapped_region + 1) = i;
        printf("Read back value of %d Reg2: %u \n", i,*(mapped_region + 1));
	}

	printf("********Register 3******* \n");
        //Write to third Register and read back, do it multilple times
	for(unsigned int i = 0; i < 3 ; i++){
        *(mapped_region + 2) = i;
        printf("Read back value of %d Reg3: %u \n", i, *(mapped_region + 2));
	}

	//Guessing: the forth Register's acting like a FIFO
	//So push values to the Reg4 and later pop them.
	//push values to Register 4
	 printf("********Register 4******* \n");
	printf("push values to Register 4... \n");
	for(unsigned int i = 0; i < 4 ; i++)
	{
	printf("Writing %d to Reg4 \n",i);
        *(mapped_region + 3) = i;
	}
	
	//pop values out of Register 4
	for(unsigned int i = 0; i < 7 ; i++)
        {
        printf("Read back value of %d Reg4: %u \n", i,*(mapped_region + 3));
        }

        printf("**************Guessing************ \n");
	printf("Register 1 is a normal register, what ever is written will be return back \n");
	printf("Register 2 returns back the square of written value \n");
	printf("Register 3 returns back value depending on the clock counter inside the IPcore, no matter what we wrote to it earlier \n");
	printf("Register 4 is acting as a FIFO, if FIFO is empty, it will return the default value 2863311530 \n");
	//sleep(1);

}

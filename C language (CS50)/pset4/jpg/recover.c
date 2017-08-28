/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

#define BLOCK_SIZE 512

bool jpegfound(unsigned char buffer[]);

int main(int argc, char* argv[])
{
    FILE* card = fopen("card.raw", "r");
    
    if (card == NULL)
    {
        printf("Error, can`t open");
        return 1;
    }
    
    unsigned char buffer[BLOCK_SIZE];
    int found = 0;
    char jpeg_title[8];
    
    fread(&buffer, BLOCK_SIZE, 1, card);
    
    while(fread(&buffer, BLOCK_SIZE, 1, card) == 1)
    {
        if(jpegfound(buffer))
        {
            sprintf(jpeg_title, "%03d.jpg", found);
            FILE* img = fopen(jpeg_title, "a");
            found++;
            
            do
            {
                fwrite(&buffer, BLOCK_SIZE, 1, img);
                fread(&buffer, BLOCK_SIZE, 1, card);
            }
            while (!(jpegfound(buffer)) && feof(card) == 0);
            
            fclose(img);
            fseek(card, -1 * BLOCK_SIZE, SEEK_CUR);
        }
    }
    
    fclose(card);
    return 0;
} 

bool jpegfound(unsigned char buffer[])
{
    if(buffer[0] != 0xff)
    {
        return false;
    }
    
    if(buffer[1] != 0xd8)
    {
        return false;
    }
    
    if(buffer[2] != 0xff)
    {
        return false;
    }
    
     switch (buffer[3])
    {
        case 0xe0:
            case 0xe1:
                case 0xe2:
                    case 0xe3:
                        case 0xe4:
                            case 0xe5:
                                case 0xe6:
                                    case 0xe7:
                                        case 0xe8:
                                            case 0xe9:
                                                case 0xea:
                                                    case 0xeb:
                                                        case 0xec:
                                                            case 0xed:
                                                                case 0xee:
                                                                    case 0xef: 
                                                                        break;
        default:
            return false;
    }
    return true;
}

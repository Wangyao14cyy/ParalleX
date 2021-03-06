/*************************************************************************
	> File Name: string.c
	> Author: 
	> Mail: 
	> Created Time: 2016年07月22日 星期五 11时13分12秒
 ************************************************************************/

#include"string.h"


void *memcpy(void *dest,const void *src,uint32 len){
    int8 * str1 = dest;
    const int8 *str2 = src;
    uint32 i = 0;
    if(src == NULL || dest == NULL){
        return dest;
    }
    for(;i < len;i++){
        *str1++ = *str2++;

    }
    return dest;
}


void memset(void *dest,int8 val,uint32 len){
    
    uint32 number;
    uint32 i;
    char *str = dest;
    number = 0;
    i = 0;

    if(dest == NULL){
        return;
    }
    while(*str != '\0'){
        number++;
    }
    if(number <= len){
        for(;i < len;i++){
            *str++ = val;
        }
    }else{
        for(i = 0;i < number;i++){
            *str++ = val;
        }
    }

    *str++ = '\0';

}


void bzer(void *dest,uint32 len){
    
    uint32 number;
    uint32 i;
    char *d = dest;
    number = 0;
    i = 0;
    if(dest == NULL){
        return;
    }
    while(*d != '\0'){
        number++;
    }
    if(number >= len){
        for(;i < len;i++){
            *d++ = '\0';
        }
    }else{
        for(i = 0;i < number;i++){
            *d++ = '\0';
        }
    }

}


int strcmp(const int8* dest,const int8 *val){
    
    const int8 *s1 = dest;
    const int8 *s2 = val;

    int8 c1,c2;

    do{
        c1 = *s1++;
        c2 = *s2++;
        if(c1 == '\0'){
            return c1 - c2;
        }
    }while(c1 == c2);

    return c1 - c2;

}


int8 *strcpy(char *dest,const char *val){
    
    int8 *d = dest;
    const int8 * s = val ;
    if(dest == NULL || val == NULL){
        return dest;
    }
    do{
        *d++ = *s;

    }while(*s++ != '\0');

    return dest;


}

int8 *strcat(int8 *dest,const int8 *val){
    const int8 *s1 = val;
    int8 *d = dest;

    if(dest == NULL || val == NULL){
        return NULL;
    }

    for(;*d++ != '\0';){
        ;
    }
    for(;*s1++ != '\0';){
        *d++ = *s1;
    }

    return dest;
}



int strlen(const int8 * src){
    
    uint32 number;
    number = 0;
    while(*src++ != '\0'){
        number++;
    }


    return number;

}

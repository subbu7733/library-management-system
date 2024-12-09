#include<stdio.h>
void main(){
    int ip[8],i,j,clk,bsize,orate,bytes=0,tim,psize;
    for(i=0;i<5;i++){
        ip[i]=rand()%10;
    }
    printf("enter the orate:");
    scanf("%d",&orate);
    printf("enter the bsize:");
    scanf("%d",&bsize);
    for(i=0;i<5;i++){
        if(ip[i]>bsize)
            printf("greater thean bzize:");
            else{
                psize=ip[i];
                bytes+=psize;
                printf("\nincompacket:%d\n",psize);
                printf("transmission left:%d\n",bytes);
                printf("-------------------------------\n");
                tim=rand()%10;
                for(clk=0;clk<tim&&bytes>0;clk++){
                    printf("time left%d----no packet to tramsitt tramsmitted\n",tim-clk);
                    if(bytes){
                        if(bytes<orate)
                        bytes=0;
                        else
                        bytes -= orate;
                        printf("bytes remaing:%d\n",bytes);

                    }
                }
                 printf("next pavket %d",tim);
            }

    }
}

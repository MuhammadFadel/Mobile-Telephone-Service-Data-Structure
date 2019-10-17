#include <stdio.h>
#include <stdlib.h>

void printM ()
{
    printf("1. Data Call coming.\n");
    printf("2. Voice Call coming.\n");
    printf("3. Emergency Call coming.\n");
    printf("4. Serve a call.\n");
    printf("5. Dismiss calls with least priority.\n");
    printf("6. Exit\n");
    printf("Please Enter anumber from the above:\t");
}
int main()
{
    int x,y;
    FILE *a =fopen ("List of Number.txt","r");
    while(!feof(a))
    {
        fscanf(a,"%i",&w);
        if(w==-1)
        {
            break;
        }
        else
        {
            if(w==1) fscanf(a,"%i %i %i",&s.c,&s.r,&s.nop);
            else if(w==2) fscanf(a,"%i %i %i %i %i",&s.c,&s.r,&s.nop,&s.s,&s.ro);
            else if(w==3) fscanf(a,"%i %i ",&s.c,&s.r);
        }
        Enqueue(&q,s);
    }
    fclose(a);

    QueueEntry l;
    QueueType q;
    printM();
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        if(!QueueFull(q))
        {
            printf("Calling Party: ");
            scanf("%d",&l.s);
            printf("Number Of The Party: ");
            scanf("%d",&l.r);
            printf("Number of packets : ");
            scanf("%d",&l.p);
            l.c='D';
            Enqueue(l,&q);
        }
        break;
    case 2:
        if(!QueueFull(q))
        {
            printf("Calling Party: ");
            scanf("%d",&l.s);
            printf("Number Of The Party: ");
            scanf("%d",&l.r);
            printf("Show the caller ID : ");
            scanf("%d",&l.id);
            printf("The Roaming Option: ");
            scanf("%d",&l.op);
            l.c='V';
            Enqueue(l,&q);
        }
        break;
    case 3:
        if(!QueueFull(q))
        {
            printf("Calling Party: ");
            scanf("%d",&l.s);
            printf("Number Of The Party: ");
            scanf("%d",&l.r);
            l.c='E';
            Enqueue(l,&q);
        }
        break;
    case 4:
        if(!QueueEmpty(q))
        {
            Dequeue(&l,&q);
            printf("Calling Party :%d ",l.s);
            printf("Number Of The Party :%d",l.r);
            if(s.c=='D')
            {
                printf("Number of packets :%d ",l.p);
            }
            if(s.c=='V')
            {
                printf("Show the caller ID :%d ",l.id);
                printf("The Roaming Option:%d",l.op);
            }
        }
        else
        {
            printf("NO calls.\n");
        }
        break;
    case 5:
        ClearQueue(&q);
        break;
    case 6:
        a =fopen ("List of Number.txt","w");
    if(QueueEmpty(q))
    fprin    tf(a,"-1");
  else{
  while(!queueEmapty(q)){
    Dequeue(&q,&s);
    if(l.c=='E') fprintf(a," %d \t %d\n",l.s,l.r);
    else if(l.c=='V') fprintf(a," %d \t %d \t %d \t %d  \n",l.s,l.r,l.id,l.op);
    else if(l.c=='D') fprintf(a," %d \t %d \t %d  \n",l.s,l.r,l.p);
  }
  }
    fclose(a);

        break;
    }
    while(x)

        return 0;
}

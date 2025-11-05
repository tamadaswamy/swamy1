#include<stdio.h>
int main()
{
    
    float regular=200.00;
    float premium=300.00;
    printf("choose language\n");
    printf("1.Hindi\n2.Telugu\n3.Kannada\n4.Tamil\n");
    printf("Enter your choice:");
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("----The selected language is Hindi----\n");
        printf("__The Available Hindi Movies__\n");
        printf("1.Aashiqui\n2.War\n3.Devdas\n");
        printf("Select a movie  (1to3): ");
        int opt;
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            printf("Enter number of tickets: ");
            int b;
            scanf("%d",&b);
            if(b>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int a;
                scanf("%d",&a);
                switch(a)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Aashiqui\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",b);
                    printf("Total amount:%.2f\n",regular*b);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Aashiqui\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",b);
                    printf("Total amount:%.2f \n",premium*b);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //FOR WAR//
            case 2:
            printf("Enter number of tickets: ");
            int c;
            scanf("%d",&c);
            if(c>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int d;
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie:War\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",c);
                    printf("Total amount:%.2f\n",regular*c);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: War\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",c);
                    printf("Total amount:%.2f \n",premium*c);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            // FOR 3.Devdas
            case 3:
            printf("Enter number of tickets: ");
            int e;
            scanf("%d",&e);
            if(e>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int f;
                scanf("%d",&f);
                switch(f)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie:War\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",e);
                    printf("Total amount:%.2f\n",regular*e);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: War\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",e);
                    printf("Total amount:%.2f \n",premium*e);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            default:
            printf("invalid Movie choice! Exiting...\n");
        }
        break;
        //Mayabazar//
        case 2:
        printf("-----The Selected language is Telugu-----\n");
        printf("__The AvailableTelugu Movies__\n");
        printf("1.Mayabazar\n2.Yamagola\n3.Daana Veera Soora Karna\n");
        printf("Select a movie  (1to3): ");
        int Opt;
        scanf("%d",&Opt);
        switch(Opt)
        {
            case 1:
            printf("Enter number of tickets: ");
            int g;
            scanf("%d",&g);
            if(g>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int h;
                scanf("%d",&h);
                switch(h)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Mayabazar\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",g);
                    printf("Total amount:%.2f\n",regular*g);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Mayabazar\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",g);
                    printf("Total amount:%.2f \n",premium*g);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //2.Yamagola
            case 2:
            printf("Enter number of tickets: ");
            int i;
            scanf("%d",&i);
            if(i>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int j;
                scanf("%d",&j);
                switch(j)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Yamagola\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",i);
                    printf("Total amount:%.2f\n",regular*i);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Yamagola\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",i);
                    printf("Total amount:%.2f \n",premium*i);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //  3.Daana Veera Soora Karna
            case 3:
            printf("Enter number of tickets: ");
            int k;
            scanf("%d",&k);
            if(k>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int l;
                scanf("%d",&l);
                switch(l)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Daana Veera Soora Karna\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",k);
                    printf("Total amount:%.2f\n",regular*k);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Daana Veera Soora Karna\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",k);
                    printf("Total amount:%.2f \n",premium*k);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            default:
            printf("invalid Movie choice! Exiting...\n");
        }
        break;
        case 3:
        printf("The regional language is Kannada\n");
        printf("__The Available Kannada Movies__\n");
        printf("1.Martin\n2.Vikrant Rona\n3.Yuvarathnaa\n");
        printf("Select a movie  (1to3): ");
        int OPt;
        scanf("%d",&OPt);
        switch(OPt)
        {
            //Martin
            case 1:
            printf("Enter number of tickets: ");
            int m;
            scanf("%d",&m);
            if(m>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int n;
                scanf("%d",&n);
                switch(n)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Martin\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",m);
                    printf("Total amount:%.2f\n",regular*m);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Martin\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",m);
                    printf("Total amount:%.2f \n",premium*m);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //Vikrant Rona
            case 2:
            printf("Enter number of tickets: ");
            int o;
            scanf("%d",&o);
            if(o>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int p;
                scanf("%d",&p);
                switch(p)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Vikrant Rona\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",o);
                    printf("Total amount:%.2f\n",regular*o);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Vikrant Rona\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",o);
                    printf("Total amount:%.2f \n",premium*o);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //  Yuvarathnaa
            case 3:
            printf("Enter number of tickets: ");
            int q;
            scanf("%d",&q);
            if(q>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int r;
                scanf("%d",&r);
                switch(r)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Vikrant Rona\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",q);
                    printf("Total amount:%.2f\n",regular*q);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Vikrant Rona\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",q);
                    printf("Total amount:%.2f \n",premium*q);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            default:
            printf("invalid Movie choice! Exiting...\n");
        }
        break;
        case 4:
        printf("The regional language is Tamil\n");
        printf("__The Available Tamil Movies__\n");
        printf("1.Jailer\n2.Master\n3.Dragon\n");
        printf("Select a movie  (1to3): ");
        int option;
        scanf("%d",&option);
        switch(option)
        {
            // Jailer
            case 1:
            printf("Enter number of tickets: ");
            int s;
            scanf("%d",&s);
            if(s>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int t;
                scanf("%d",&t);
                switch(t)
                {
                    case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Jailer\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",s);
                    printf("Total amount:%.2f\n",regular*s);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Jailer\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",s);
                    printf("Total amount:%.2f \n",premium*s);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            // Master
            case 2:
            printf("Enter number of tickets: ");
            int u;
            scanf("%d",&u);
            if(u>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int v;
                scanf("%d",&v);
                switch(v)
                {
                   case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Master\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",u);
                    printf("Total amount:%.2f\n",regular*u);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Master\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",u);
                    printf("Total amount:%.2f \n",premium*u);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            //Dragon
            case 3:
            printf("Enter number of tickets: ");
            int x;
            scanf("%d",&x);
            if(x>0)
            {
                printf("Selected Seat Type:\n");
                printf("1.Regular (200/-)\n2.Premium (300/-)\n");
                printf("Enter your choice:");
                int y;
                scanf("%d",&y);
                switch(y)
                {
                     case 1:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Dragon\n");
                    printf("Seat Type: Regular\n");
                    printf("Number of Tickets:%d \n",x);
                    printf("Total amount:%.2f\n",regular*x);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                    case 2:
                    printf("_______Booking Summary________\n");
                    printf("Movie: Dragon\n");
                    printf("Seat Type: Premium\n");
                    printf("Number of Tickets:%d\n",x);
                    printf("Total amount:%.2f \n",premium*x);
                    printf("Do you want to confirm the booking? (Y/N): ");
                    break;
                }
            }
            else
            {
                printf("invalid number of ticket. Exiting...\n");
            }
            break;
            default:
            printf("invalid Movie choice! Exiting...\n");
        }
        break;
        default:
        printf("choose correct option from 1to4 for regional language. Exiting----\n");
    }
    char Ch;
    scanf(" %c",&Ch);
    if(Ch=='Y')
    {
        printf("Booking Confirmed! Enjoy your movie\n");
    }
    else if(Ch=='N')
    {
        printf("booking cancelled. Exiting\n");
    }
    else
    {
        printf("invalid input\n");
    }
}
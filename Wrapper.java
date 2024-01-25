

class Wrapper
{
    public static void main(String args[]) 
    {
        int no = 11;
        Integer iobj = no; //boxing

        System.out.println(no);
        System.out.println(iobj); 

        int i = iobj; //unboxing
    }
}

/*

Datatype        Wrapper Class

boolean
char
short
int
float
double
long*/
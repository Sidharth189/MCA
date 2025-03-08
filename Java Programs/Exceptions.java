class Main{
    public static void main(String[] args){
        String s="Hello";
        int[] a={1,2,3,4,5};

        try {
            for (int i = 0; i < 10; i++) {
                System.out.print(a[i]+" ");               
            }
        }

        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Exception !!");
            System.out.println(e);
        }
    }
}

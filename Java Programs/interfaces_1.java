interface GST{
    void gst_amount(double amount);
}
interface IT{
    void income_tax_amount(); 
}
class tax implements GST,IT{
    void gst_amount(){

    }
}
public class interfaces_1 {
    
}

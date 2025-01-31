import java.util.*;

public class Lotteria {
    private static boolean estratti = false;
    private Set<BigliettoVenduto> bigliettiVenduti;

    Lotteria() {
        this.bigliettiVenduti = new HashSet<>();
    }

    public BigliettoVenduto nuovoBiglietto(Biglietto obj, Date data, String luogo){
        if(estratti)
            throw new IllegalArgumentException("Estrazione gia avvenuta");
        BigliettoVenduto n = new BigliettoVenduto(obj, luogo, data);
        bigliettiVenduti.add(n);
        return n;
    }

    public BigliettoVenduto[] estrai() {
        if(estratti)
            throw new IllegalArgumentException("Estrazione gia avvenuta");
        if(bigliettiVenduti.size() <5)
            throw new IllegalArgumentException("Non sono presenti almeno 5 Biglietti Venduti");
        BigliettoVenduto[] array = (BigliettoVenduto[]) bigliettiVenduti.toArray();
        BigliettoVenduto[] ret = new BigliettoVenduto[5];

        System.arraycopy(array, 0, ret, 0, 5);

        this.estratti = true;

        return  ret;
    }
}

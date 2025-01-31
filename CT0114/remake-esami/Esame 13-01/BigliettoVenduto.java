import java.util.Date;
import java.util.Objects;

public class BigliettoVenduto extends Biglietto{
    private String luogoVendita;
    private Date dataVendita;

    BigliettoVenduto(String id, int numTicket, String luogoVendita, Date dataVendita){
        super(id, numTicket);
        if(luogoVendita == null){
            throw new IllegalArgumentException("luogoVendita must be a non-null 2-character string");
        }
        if(dataVendita == null){
            throw new IllegalArgumentException("datavendita must be a non-null date");
        }
        this.dataVendita = dataVendita;
        this.luogoVendita = luogoVendita;

    }
    BigliettoVenduto(Biglietto base, String luogoVendita, Date dataVendita){
        super(base);
        if(luogoVendita == null){
            throw new IllegalArgumentException("luogoVendita must be a non-null 2-character string");
        }
        if(dataVendita == null){
            throw new IllegalArgumentException("datavendita must be a non-null date");
        }
        this.dataVendita = dataVendita;
        this.luogoVendita = luogoVendita;

    }

    public Date getDataVendita() {
        return dataVendita;
    }

    public String getLuogoVendita() {
        return luogoVendita;
    }

    @Override
    public int hashCode(){
        return Objects.hash(super.hashCode(), luogoVendita, dataVendita);
    }

    @Override
    public boolean equals(Object obj) {
        if(this == obj) return true;
        if(obj == null || this.getClass() != obj.getClass()) return false;
        if(!super.equals(obj)) return false;
        BigliettoVenduto other = (BigliettoVenduto) obj;
        return dataVendita == dataVendita && Objects.equals(luogoVendita, other.luogoVendita);
    }
}

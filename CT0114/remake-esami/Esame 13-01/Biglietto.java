import java.util.Date;
import java.util.Objects;

public class Biglietto {
    private String id;
    private int numTicket;

    Biglietto(String id, int numTicket){
        if(id == null || id.length() != 2)
            throw new IllegalArgumentException("id must be a non-null 2 character string.");
        if(numTicket < 100000 || numTicket > 999999)
            throw new IllegalArgumentException("id must be a 6-digit number.");

        this.id = id;
        this.numTicket = numTicket;
    }
    Biglietto(Biglietto other){
        if(other.id == null || other.id.length() != 2)
            throw new IllegalArgumentException("id must be a non-null 2 character string.");
        if(other.numTicket < 100000 || other.numTicket > 999999)
            throw new IllegalArgumentException("id must be a 6-digit number.");

        this.id = other.id;
        this.numTicket = other.numTicket;
    }


    public String getId() {
        return id;
    }

    public int getNumTicket() {
        return numTicket;
    }

    public int hashCode(){
        return Objects.hash(this.id, this.numTicket);
    }

    public boolean equals(Object obj){
        if(this == obj) return true;
        if(obj == null || this.getClass() != obj.getClass()) return false;
        Biglietto o = (Biglietto) obj;
        return numTicket == o.numTicket && Objects.equals(id, o.id);
    }
}


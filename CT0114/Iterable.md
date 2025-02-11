Ecco un esempio di un oggetto **iterable** in Java. Un oggetto è **iterable** se implementa l’interfaccia Iterable<T>, che richiede l’implementazione del metodo iterator(). Questo consente di utilizzare il costrutto **for-each** per scorrere gli elementi.

  

**Esempio: Una classe Range che rappresenta un intervallo numerico**

  

Questa classe definisce un intervallo di numeri e lo rende **iterable**.

  

import java.util.Iterator;

  

public class Range implements Iterable<Integer> {

    private final int start;

    private final int end;

  

    _// Costruttore_

    public Range(int start, int end) {

        this.start = start;

        this.end = end;

    }

  

    _// Implementazione del metodo iterator() dell'interfaccia Iterable_

    @Override

    public Iterator<Integer> iterator() {

        return new Iterator<Integer>() {

            private int current = start;

  

            @Override

            public boolean hasNext() {

                return current <= end;

            }

  

            @Override

            public Integer next() {

                return current++;

            }

        };

    }

  

    public static void main(String[] args) {

        _// Crea un oggetto Range_

        Range range = new Range(1, 5);

  

        _// Usa il costrutto for-each per iterare sugli elementi_

        for (int num : range) {

            System.out.println(num); _// Output: 1, 2, 3, 4, 5_

        }

    }

}

  

**Spiegazione del codice:**

1. Iterable<Integer>:

La classe Range implementa l’interfaccia generica Iterable<T>, dove T è il tipo degli elementi iterabili (Integer in questo caso).

2. **Metodo** iterator():

Restituisce un oggetto Iterator che consente di scorrere l’intervallo numerico.

3. Iterator **interno**:

• hasNext(): Restituisce true finché ci sono numeri nell’intervallo.

• next(): Restituisce il numero corrente e lo incrementa.

4. **For-each**:

Il costrutto for (int num : range) utilizza il metodo iterator() dietro le quinte per scorrere gli elementi.

  

**Vantaggi di un oggetto iterable:**

• Puoi usarlo direttamente in un costrutto **for-each**.

• Può essere combinato con altre API Java come gli stream.

• Permette di creare una logica personalizzata per l’iterazione.

  

Se hai altre domande sugli **iterable**, fammi sapere! 😊
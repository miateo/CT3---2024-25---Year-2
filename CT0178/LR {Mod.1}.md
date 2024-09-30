> Non sono presenti slide per questo corso in quanto il prof fa riferimento al libro

## Dati in Javascript
```Javascript
	let a = 1;
	let b = true;
	let o = {x:1, y:true}; //-> Un oggetto produce un dizionario
	let s = 'text';
	let t = s; //-> t asssume il 'tipo' della variabile che gli viene assegnata e chiaramente anche lo stesso contenuto
```
> Tutti le variabili in javascript vengono salvate in un dizionario globale ed utilizza i nomi delle variabili come etichette
```Javascript

let check = a > 2; //-> ritorna un boolean
let check2 = a > s; //-> non ha risultato(ritorna NAN)
```
per ottenere un risultato dall'espressione precedente posso fare: 
```Javascript
let check2 = a > Number(s)

```

*Funzione "Triplo Uguale"*
Risultato: Booleano
```Javascript
let check = a === b;
```
compara anche la struttura interna salvata nel dizionario "Global"
*Funzione "Doppio Uguale"*
```Javascript
let check = a == b;
```
Converte la seconda variabile nel tipo della prima in modo da effettuare la comparazione;
Il risultato può dipendere da quale variabile viene convertita
> "non ne ho la pallida idea" ~Prof.

*Null* è un valore; rappresenta un oggetto che punta in un indirizzo specifico di memoria (circa);


Il dizionario globale può essere inizializzato con oggetti e variabili basate sul tipo di ambiente in cui l'applicativo javascript viene eseguito.

*Accedere ai valori nei dizionari*
```Javascript
let xv; //-> crea un oggetto di tipo 'undefined'
xv = o.x;
```
cerca di considerare tutto ciò che è presente dopo il punto, ovvero 'x' e trasformarlo in una stringa.
```Javascript
let yv = o['y']
o['z'] = 5; //-> permette di aggiungere un campo 'z' con val = 5 sul dizionario 'O'
```

## Classe Array
Gli array consistono in dizionari le cui etichette sono numeri.
In caso cerco di accedere un elemento non presente viene ritornato 'undefined'
```Javascript
let vec = [3,5,6,7,11,13];
```
crea un dizionario chiamato 'vec' la cui etichetta "0" = 3, "1" = 5, etc...;
```Javascript
let vec.c = {a:1, b:2};
```
Aggiunge al dizionario 'vec' un oggetto di tipo dizionario con etichetta 'c' con valori "a":1, "b":2;

```Javascript
let contains = z in o; //controlla che z sia contenuto nel dizionario 'o'
```

### Dato "funzione"
>Scope = dizionario

Le funzioni a differenza di java sono uguali agli oggetti
```Javascript
	let add = {
		x:1,a:2 //-> crea un oggetto
	};
	__________
	
	let add = function (a,b){
		let sum = a+b;
		return sum;
	};
```
 Nel secondo caso viene creato un oggetto di tipo F che punta ad un dizionario vuoto (che non è in nessun modo accessibile dall'interno della funzione) che ha concatenato il corpo della funzione
 ```Javascript
	 add.myfield = 3; --> aggiunge al dizionario della funzione
			la var: 'myfield', tipo: N, valore: 3;
			questa variabile non è accedibile dalla funzione
	let somma = add --> esegue una copia della funzione add nella
	veriabile somma come se fosse un oggetto normale
```

> modo alternativo per dichiarare un funzione
```Javascript
function add (a,b) {
	let sum = a+b;
}
```

#### Chiamata di una funzione
```Javascript
	let r = somma(2,5) -> r viene segnata come undefined finché la
							la funzione non termina e ritorna il val
```

Questa chiamata crea uno scope specifico per la funzione che contiene il dizionario sul quale sono salvate le variabili della funzione.
> I parametri vengono aggiunte dopo che la funzione è stata chiamata poiché in js non ci sono i tipi, altrimenti non saprebbe che tipo di variabile popolare e le variabili vengono popolate in seguito
> In caso una variabile non venga passata viene segnata con tipo undefined e valore undefined

### Tipo var
```Javascript
	function addvar(a,b){
		var sum;
		sum = 0;
		sum = a+b;
		return sum;
	}
	addvar(2,5)
	
```
Tutte le variabili di tipo "var" vengono create allo stesso tempo dei parametri, allo stesso tempo del setup dello scope
Effetti:
- è possibile scrivere più variabili con lo stesso nome e non da errore
- anche se una porzione di codice (esmpio un if) non viene eseguita se è presente un "var" viene comunque occupato lo spazio
---

```Javascript
	let vec = {x:1,y:2};
	let len = function(x,y){
		let l = 0;
		l = x^2 + y^2;
		l = Math.sqrt(l);
		return l;
	};
	----
	Il metodo sotto riportato di chiamata della funzione istanzia
	una variabile this che punta a "vec" 
	interno della scope della funzione, di conseguenza bisogna
	cambiare le variabili in this.variabile
	let vec = {x:1,y:2,
		len: function(x,y) {
		let l = 0;
		l = this.x^2 + this.y^2;
		l = Math.sqrt(l);
		return l;
		}
	};
	let l = vec.len();
	
	copia la funzione len di vec dentro v2
	let v2 = {x:7, y:3, vec.len}
	let t = vec.len -> t è una funzione uguale a vec.len

	let vlen = function{return Math.sqrt(this.x^2 + this.y^2);};
	let v3 = {x:4,y:9, len: vlen}; //-> assegna la funzione come terzo
									// campo dell' oggetto
	let l3 = v3.len();
```

## Prototype
E' un metodo che permette di creare oggetti basati su oggetti già presenti in memoria, si richiama utilizzando il metodo predefinito Object.create({class}) dove class rappresenta il nome dell'oggetto che si vuole usare come prototipo.
> molto simile all'eriditarietà in java -> si può accedere alla variabili definite nella classe "parent"
>Utile per non ridefinire funzioni e riutilizzare codice: si accede al codice della funzione del parente ma le variabili vengono valorizzate in base ai campi presenti nell'oggetto "child" sempre se presenti

```Javascript
	let vec_p = {x:0,y:0, len: function(){
		return Math.sqrt(this.x^2 + this.y^2);}
	};
	let l = vec_p.len();
	let v1 = Object.create(vec_p), //func predefinita che crea un nuovo oggetto -> seguendo come prototipo l'oggetto passato
	<-questo istanzia una proprietà che punta a vec_p <-non è accessibile
	let val;
	val = v1.x; //ritorna il campo x, se il campo non è presente lo cerca nel suo prototype
	
```
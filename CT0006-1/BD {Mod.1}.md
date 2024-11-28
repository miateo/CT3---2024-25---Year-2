tags: #uni #notes #Year2 

---

## Table of Contents

- [[#Introduzione alle Basi di Dati]]
- [[#DDL]]

---

**SLIDES**
![[1.SistemiAle.pdf]]

## Introduzione alle Basi di Dati

Dati spaziali = necessità di memorizzare un insieme "infinito" di punti sono possibili due modalità:

- Modello Vettoriale: rappresento attraverso delle linee il contorno dell'oggetto
- Tramite Suddivisione Spaziale: Rappresento l'oggetto riportando cosa è contenuto all'interno di una cella della griglia in cui suddivido lo spazio che voglio memorizzare
  Tema del corso: metodi e strumenti per la gestione di grandi quantità di dati in modo persistente che permettano: archiviazione, consultazione e modifica da parte dell'utente in modo sicuro ed efficiente.

## Sistemi Informativi

Combinazione di risorse materiali e umane per la manipolazione ed archiviazione di dati.
Sistema Informatico:

> Informazione: dato o elemento che consente di conoscere fatti o situazioni
> Dato: elementi di informazioni non ancora elaborati

> Una base di dati è una raccolta di dati permanenti divisa in due categorie:
>
> - Metadati -> definiscono lo schema della Base Dati
> - Dati -> informazioni che conformano alle caratteristiche dello schema

Un DBMS (Data Base Management System) è un sistema centralizzato o distribuito che offre strumenti per:

- Definire lo schema di una base dati
- Scegliere le _strutture dati_
- Memorizzare i dati
- Recuperare e modificare i dati interattivamente attraverso l'utilizzo di _query language_
  Il DBMS ci permette inoltre di verificare che i vincoli impostati nella nostra base dati risultano rispettati prima di permettere un inserimento

#### Esempio di un DBMS Centralizzato

![[Pasted image 20240920155422.png]]

### DDL

Sono presenti tre livelli di descrizione dei dati: livello di vista logica, livello logico e livello fisico.
_Livello Fisico_
Descrive come i dati vengono memorizzati nelle memorie hw e contengono strutture ausiliarie per l'ottimizzazione d'uso
_Livello Logico_
Descrive la struttura degli insieme di dati e delle relazioni fra questi, seguendo un modello dei dati senza curarsi dell'effettiva organizzazione fisica nelle memorie hw
_Vista Logica_
Descrive come deve apparire la struttura della Base Dati ad una certa applicazione (schema esterno)

#### Indipendenza logica e fisica

_Indipendenza fisica_: I programmi non devono essere modificati in seguito a modifiche dell'organizzazione fisica dei dati: - strutture dati ausiliarie - modifica della distribuzione
_Indipendenza logica_: I programmi non devono essere modificati in seguito a modifiche dello schema logico: - difficile da ottenere - richiede la ridefinizione dello schema esterno

> [!NOTE] DML: Data Manipulation Language
> Un DBMS deve poter soddisfare le diverse esigenze dei suoi utenti: Utenti delle applicazioni, Utenti non programmatori, Utenti programmatori.
> Gli _Utenti Programmatori_ necessitano di diverse modalita' per interagire con la base di dati:
>
> - Linguaggio Convenzionale + funzioni predefinite: Linguaggio che utilizza funzioni di libreria predefinite per interagire con SQL -> i comandi sono stringhe passate come parametri alle funzioni che poi vengono controllate dal DMBS
> - Linguaggio SQL Embedded: Un linguaggio esteso con un nuovo costrutto per marcare i comandi SQL. Necessita di un pre-compilatore
> - Linguaggio integrato: un linguaggio ad-hoc per usare SQL

### DMBS: Controllo dei dati

Per mantenere l'integrita' dei dati il DBMS offre vari meccanismi:

- _Integrita'_: mantenimento dei vincoli d'integrita'
- _Sicurezza_: protezione dei dati da utilizzi non autorizzati
  - Restrizione dell'accesso ai soli utenti autorizzati
  - Limitazione delle operazioni eseguibili -> non suffficiente in caso di uso statistico
- _Affidabilita'_: protezione dei dati da
  - Interferenze dovute dall'accesso concorrente ai dati da parte di piu' utenti
  - Malfunzionamenti hardware o software

#### Transazioni

**Definizione**: Una transazione e' una sequenza di azioni di lettura e scrittura in memoria permanente, che possiede le seguenti proprieta':

- _Atomicita'_: le transazioni che terminano prematuramente vengono trattate come se non fossero mai iniziate
- _Serializzabilita'_: Nel caso di esecuzioni concorrenti vengono eseguite in maniera seriale
- _Persistenza_: le modifiche a transazione terminata sono permanenti, non sono quindi alterabili da eventuali malfunzionamenti

> [!NOTA] Strumenti per l'amministrazione
> Strumenti per l’amministratore della base di dati:
>
> - Linguaggio per la definizione e la modifica degli schemi della base di dati
> - logico, esterno, e fisico
> - Strumenti per il controllo e messa a punto del funzionamento del sistema.
> - Strumenti per stabilire i diritti di accesso ai dati
> - Strumenti per ripristinare la base di dati in caso di malfunzionamenti di sistemi o disastri

### Vantaggi e Svantaggi dei DBMS

**Vantaggi**

- Indipendenza fisica e logica
- Gestione efficiente dei dati
- Integrita' e sicurezza dei dati
- Accessi interattivi, concorrenti e protetti da malfunzionamenti
- Amministrazione dei dati
- Riduzione dei tempi di sviluppo delle applicazioni
  **Svantaggi**
- Possono essere costosi e complessi da installare e mantenere in esercizio
- Richiedono personale qualificato
- Le applicazioni sviluppate possono essere difficili da trasferire su sistemi diversi se il linguaggio e' troppo legato al DBMS -TUTTAVIA-> la riduzione dei costi della tecnologia e i possibili tipi presenti sul mercato facilitano la loro diffusione

---

**SLIDES**
![[2.ModelliAle.pdf]]

### Progettazione e Modellazione

Progettare una base di dati significa progettare la struttura dati e le applicazioni dei dati, richiede di specificare un modello più realistico possibile.

> [!NOTA] Modelli Informatici
> Un modello astratto è la rappresentazione formale di idee e conoscenze relative ad un fenomeno.
> Un modello è la rappresentazione di certi fatti attraverso un linguaggio formale.

### Modellazione Concettuale

Nella Modellazione concettuale si progetta e definisce come i dati verranno gestiti e come sarà possibile interagire con essi;
Si definiscono inoltre eventuali relazioni tra i dati

Nella modellazione concettuale si modellano:

- La conoscenza concreta -> i fatti
- La conoscenza astratta -> le strutture e i vincoli
- La conoscenza procedurale -> le operazioni possibili
- Le comunicazioni -> come si interfaccia con l'applicativo

#### La conoscenza concreta

La conoscenza concreta è costituita da: entità complete delle loro proprietà, collezioni di entità omogenee e le associazioni tra entità.
Le **entità** sono ciò di cui ci interessa rappresentare le **proprietà**, che è una coppia <Attributo, valore di un certo tipo>; esistono diversi tipi di proprietà:

- atomica o strutturata
- univoca o multivalore
- totale o parziale

Ogni entità è descritta da un tipo che ne specifica la natura
Una _collezione_ o _classe_ è un insieme variabile nel tempo di entità omogenee(entità dello stesso tipo).
Spesso quest'ultime vengono organizzate secondo una gerarchia di **specializzazione o generalizzazione**, le gerarchie garantiscono due importanti caratteristiche:

- Ereditarietà delle proprietà
- Inclusione degli elementi di una sottoclasse nell'insieme degli elementi della superclasse

Un'istanza di un associazione è qualcosa che correla due o più entità stabilendo un legame logico tra di esse; le associazioni possiedono le seguenti proprietà: **molteplicità(o cardinalità)** e **totalità**

> [!N] Molteplicità
> Vincolo di univocità: un associazione R(X,Y) è **univoca** da X a Y se per ogni elemento di X esiste _al più_ un elemento di Y; in caso questo non sia vero si parla di **associazione multivalore**.

> [!N] Totalità
> Vincolo di totalità:  Un’associazione R(X, Y) è **totale** da X a Y se _per ogni_ elemento x di X esiste almeno un elemento di Y che è associato ad x; in caso contrario l’associazione è **parziale** da X a Y.

#### La conoscenza astratta

La conoscenza astratta consiste in fatti generali che descrivono la struttura concreta, le restrizioni sui valori possibili e sui modi in cui essi possono cambiare ed infine sulle regole per derivare informazioni da fatti noti.

> [!N] Vincoli di integrità
> **Vincoli di integrità statici**: definiscono delle condizioni sui valori delle informazioni concrete che _devono_ essere soddisfatte sempre;
> **Vincoli di integrità dinamici**: definiscono le condizioni sul modo in cui la conoscenza concreta può evolvere nel tempo.

### Oggetto

Ogni entità corrisponde ad un oggetto del modello informatico, un oggetto è un entità con stato, comportamento ed identità:

- Stato -> costanti o variabili
- Comportamento -> risultato di un insieme di metodi
- Identità -> viene associata all'oggetto al momento della creazione e non subisce modifiche

### CLassi

Una classe è un insieme di oggetti dello stesso tipo, modficabile e con operatori per effettuare operazioni all'interno dell'insieme.
Gli attributi all'interno delle classi possono avere diversi tipi:

- _Tipi primitivi_
  - int, float, bool, date, string
- _Non primitivi_
  - Tipo record (o dizionario)
  - Tipo Enum
  - Tipo sequenza -> num di telefono è una sequenza di stringhe esempio: prefisso + numero di telefono

**Associazioni**
Le associazioni vengono modellate secondo un apposito costrutto e possono avere proprietà, essere ricorsive ed essere in relazioni n-arie

> (Vedi slide 40 a 44 per un esempio pratico)

> [!N] Need to make notes

---
> Lezione 03/10/2024: [[Schema Universita'.pdf]]
---

Lezione 10/10/2024
Slides: ![[4.ModelloRelazionale.pdf]]
### Modello Relazionale
- *Relazione*: Sottoinsieme del prodotto cartesiano di 'n' domini
- *Enupla* : Sequenza di valori che appartiene alla relazione di un rispettivo dominio
  > Il grado di un'enupla corrisponde al numero di attributi distinti

![[Enuple e Relazioni.png|500]]
- *Schema Relazione*: Assegnazione di un nome alla relazione es: Studente:{T1}
- *Istanza di schema o relazione*: Insieme finito di enuple di tipo T
  > Cardinalita': numero di enuple

### Chiavi
- *SuperChiave*: Sottoinsieme di attributi tale che il valore di essi determina in maniera univoca un'enupla
  > L'insieme di tutti gli attributi di un'enupla e' una superchiave
- *Chiave*: Attributi primi di una superchiave
- *Chiave Primaria (PK)*: Chiave di lunghezza minima(solitamente 1 attributo) che identifica in maniera univoca un'enupla
- *Chiave Esterna (FK)*: Insieme di attributi che riferisce la chiave primaria di un'enupla(esterna alla nostra corrente tabella)
  > Puo' assumere solo valori presenti all'interno della relazione riferita
  
Lezione 11/10/2024
slides n.27 ![[4.ModelloRelazionale.pdf]]

Soluzioni per trasformare gerarchie nel modello relazionale
- Relazione Unica
  > Comodo quando sono presenti pochi elementi
- Partizionamento Verticale: le relazioni vengono mantenute ed ognuna mantiene i propri attributi specifici e possiede delle *FK* che puntano alla superclasse
  > Complica il recupero delle informazioni di tutte le relazioni a causa delle foreign key
- Partizionamento Orizzontale: Ogni sottoclasse e' una relazione a se stante e possiede oltre agli attributi specifici ad essa quelli della superclasse, il cio' crea ridondanza
  Superclasse => Possiede solo i  suoi attributi
  Sottoclassi => Possiedono i loro attributi + gli attributi della superclasse
  > Utilizzabile solo quando non devo riferire la superclasse o quando c'e' disgiunzione

![[Sequenze da concettuale a relazionele.png|700]]

### Algebra Relazionale
Formata da:
- **Operatori Primitivi**: Unione, Diff, Prodotto
- **Operatori Derivati**: Divisione, giunzione
- **Operatori di Tabella**: min, max, order by
![[Notazione.png|750]]
![[Lezione 24-10-2024.png|750]]

---
![[28-11-2024.md]]

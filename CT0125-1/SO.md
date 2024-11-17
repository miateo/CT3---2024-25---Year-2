# Modulo 1 Capitolo 1

## **Definizione di Sistema Operativo**

- **Sistema Operativo (SO)**: Software fondamentale che consente alle applicazioni di interagire con l'hardware del computer. Funziona come un intermediario, fornendo un ambiente in cui le applicazioni possono operare senza gestire direttamente le risorse hardware.
- **Kernel**: Il cuore del SO, che include i componenti essenziali per la gestione delle risorse. Il kernel controlla le interazioni di basso livello con l'hardware, gestendo l'accesso alla CPU, alla memoria, e ai dispositivi I/O.

 I SO agiscono principalmente come gestori di risorse, organizzando sia le risorse fisiche (hardware come processori, memoria e dispositivi di input/output) sia le risorse astratte (come file e processi).

### **Evoluzione Storica dei Sistemi Operativi**

### **Anni ’40**

- I primi calcolatori digitali non possedevano un sistema operativo.
- I programmatori dovevano caricare manualmente i programmi usando linguaggio macchina, a volte utilizzando interruttori per inserire i dati bit per bit.
- Iniziarono a usare schede perforate per facilitare l'inserimento di programmi, anche se la programmazione era lenta e complessa.

### **Anni ’50**

- La **General Motors** sviluppò il primo SO per il computer IBM 701.
- I sistemi batch dominavano questo periodo: ogni job (insieme di istruzioni per svolgere un compito) veniva eseguito in sequenza senza interazione dell'utente.
- I **sistemi batch** venivano chiamati “single-stream batch-processing” poiché i job erano raccolti in lotti e memorizzati su nastri o dischi, eseguiti uno dopo l'altro.
- **Job Control Language (JCL)**: linguaggio di controllo per gestire i job, che permetteva di identificare e separare i diversi job in modo automatizzato.

### **Anni ’60**

- **Multiprogrammazione**: introdotta per migliorare l’efficienza, consentiva a più job di utilizzare contemporaneamente le risorse, massimizzando il tempo in cui il processore era occupato.
- **Timesharing**: i sistemi iniziarono a permettere l’interazione diretta tra utenti e SO, riducendo il tempo di attesa tra un job e il suo completamento.
- In questo periodo vennero introdotti i terminali “stupidi”, dispositivi che consentivano agli utenti di interagire con i job senza avere capacità computazionali.
- **Sistema Timesharing**: I sistemi timesharing furono sviluppati per servire contemporaneamente più utenti in modo interattivo. (Questo tipo di sistemi era multimodale cioè sosteneva sia elaborazioni di tipo batch sia elaborazioni in tempo reale, i sistemi real-time dovevano essere in grado di fornire risultati in intervalli di tempo limitati).

### **Anni ’70**

- I sistemi multiprogrammati multimodali che supportavano le elaborazioni di tipo batch, in timesharing ed in tempo reale.
- I sistemi in **timesharing** degli anni ’60 divennero prodotti commerciali stabili e diffusi.
- Con l’aumento della trasmissione di dati, crebbe l’importanza della **sicurezza** e della **crittografia** per proteggere i dati trasmessi.

### **Anni ’80**

- Nascono i **Personal Computer (PC)**, con IBM e Apple che lanciano rispettivamente IBM PC e Macintosh.
- Introduzione delle **interfacce grafiche (GUI)**: finestre, icone e menu facilitarono l’uso dei SO per utenti non esperti.
- L’**elaborazione distribuita** su modello client-server diventa comune: i server forniscono servizi specifici ai client, come database, file storage o gestione grafica.
- progettazione del codice in ottica di riusabilità del codice, maggior grado di astrazione nei linguaggi di programmazione e multithread di istruzioni da poter eseguire in modo indipendente(se ho un singolo thread posso eseguire solo 1 parte alla volta del mio programma (thread : processo suddiviso in più fili o istanze) , con il multithread posso eseguire più processi nello stesso momento e nella stessa area di memoria)

	![[image.png]]

### **Anni ’90 e oltre**

- Espansione del **World Wide Web (WWW)** e integrazione del supporto al networking nei SO, rendendo comuni le operazioni di rete.
- Emergere dei **sistemi operativi open-source** come Linux, grazie al movimento free software e alle licenze open source.
- **Modularità e interoperabilità**: concetti come l’Object-Oriented Programming (OOP) e gli standard di API (es. POSIX) permettono una maggiore portabilità e compatibilità tra sistemi.
- Diffusione della programmazione orientata agli oggetti: Linguaggi come C++ e Java.

## **Sistemi Paralleli**

Sistemi con unità di elaborazione situate fisicamente vicine che possono lavorare in accoppiamento.

- **Caratteristiche**:
    - **Comunicazione rapida**: Dovuta al loro stretto accoppiamento.
    - **Condivisione di risorse**: Come la memoria.
    - **Alta affidabilità e prestazioni**: Grazie all'architettura condivisa.
    - **Esecuzione simultanea**: Capacità di eseguire più processi contemporaneamente.

## **Sistemi Distribuiti**

Sistemi costituiti da unità di elaborazione fisicamente separate ma interconnesse.

- **Caratteristiche**:
    - **Comunicazione più lenta**: A causa delle distanze fisiche.
    - **Esecuzione non simultanea**: Maggiore enfasi sulla cooperazione.
    - **Condivisione delle risorse**: Accesso comune a dati, risorse e processi.
    - **Trasparenza**: Un sistema operativo distribuito (SO) può controllare e integrare altri sistemi operativi.
- **Architetture**:
    - **Omogenee**: Sistemi uniformi, con hardware e software simili.
    - **Eterogenee**: Sistemi con hardware e software differenti.

## **Middleware**

Il middleware è un software che si colloca tra le applicazioni e le componenti sottostanti, come ad esempio sistemi operativi, database o hardware, e/o permette l'interazione di software distribuito.

## **Servizi Web**

- Comprendono un insieme di standard correlati per la comunicazione.
- Permettono lo scambio di dati tra applicazioni diverse.
- **Componenti**: Software pronti all'uso che consentono la comunicazione attraverso Internet.

## **Mobilità e Sistemi Mobili**

- **Evoluzione dell'hardware**:
    - Progettato per supportare le funzioni dei sistemi operativi mobili.
    - Integrazione con altri oggetti e dispositivi.
- **Ottimizzazione**:
    - Prestazioni hardware e software migliorate.
    - Focus su API per la comunicazione tra software.
- **Cloud Computing**:
    - Abilitazione di risorse e applicazioni attraverso Internet.

---

### **Componenti e Concetti Base**

1. **Componenti dei Sistemi Operativi**
    - Gestione delle componenti hardware da parte del SO.
    - Evoluzione hardware per supportare nuove funzioni del SO.
    - Ottimizzazione delle prestazioni hardware.
    - **API (Application Programming Interface):** interfacce per comunicare tra applicazioni e SO.
    - **Fasi SO:**
        - **Compilazione:** traduzione del codice sorgente.
        - **Linking:** combinazione di moduli e librerie.
        - **Loading:** caricamento in memoria.
2. **Componenti Hardware dei Sistemi**
    
    ![[image 1.png]]
    

---

### **CPU (Central Processing Unit)**

**CPU**

- **Modalità CPU:**
    - Utente: per eseguire applicazioni.
    - Kernel: per operazioni privilegiate.
- Esecuzione di istruzioni in linguaggio macchina.
- **Registri:** celle di memoria veloci interne alla CPU:
    - **Program Counter (PC):** prossima istruzione.
    - **Stack Pointer:** gestisce lo stack.
    - **Program Status Word (PSW):** stato del processo.
- Prestazioni della CPU Misurate in cicli al secondo (GHz).

![[image 2.png]]

- **Ottimizzazioni della CPU**
    - **Pipeline:** sovrapposizione di fasi di esecuzione.
    - **Multithreading:** esecuzione parallela di thread.
    - **CPU multicore:** più processori su un singolo chip.
- **Multithreading** (hyperthreading) una CPU può tenere lo stato di due thread con scambio entro 1 nano-secondo e più processori completi (core) su un chip

---

### **Memoria**

![[ed8287f2-a029-456b-8d0e-c966e7c1f3e5.png]]

1. **Gerarchia della Memoria**
    - **Registri:** interni alla CPU, velocissimi, capacità limitata ( 32x32 bit CPU a 32bit, stessa cosa con 64bit)
        
        ![[image 3.png]]
        
    - **Cache:** memoria intermedia, riduce i tempi di accesso.
        - **L1:** più veloce, meno capiente.
        - **L2:** leggermente più lenta, più capiente.
        - **Gestione della Cache**
            - **Cache hit:** processore trova dati nella cache.
            - **Cache miss:** processore cerca nella RAM.
    - **RAM:** volatile, accesso diretto.
        - **DRAM:** richiede aggiornamenti periodici.
        - **SRAM:** non richiede aggiornamenti, più veloce.
    - **ROM:** memoria non volatile, programmata dal costruttore.
        - **EEPROM:** riscrivibile ma lenta.
        - **CMOS:** utilizzata per configurazioni base, volatile.
    - **memoria secondaria** - dischi
        - la memoria secondario conserva grandi quantità (capacità) di dati persistenti (non volatili) a basso costo ma l’accesso è più lento
	    **Gestione dell’ I/O : tre modalità:**
		- **busy waiting** : chiamate di sistema -> chiamate al driver -> avvio I/O -> attesa attiva di fine I/O
		- **interrupt (meccanismo più utilizzato)** : -> avvio I/O -> attesa interruzione del dispositivo a fine I/O -> driver genera interruzione di I/O -> si seleziona il corrispondente gestore dell’interruzione
		- **componenti hardware** : DMA (direct memory access) : hardware particolare che svincola la CPU dal controllo I/O, il chip pensa a tutto e evita di far passare i dati nella cpu

### **Scheda Madre**

- Circuito stampato che collega CPU, RAM, e dispositivi.
- Contiene BIOS per operazioni di basso livello.
    - Funzioni: rilevamento componenti, gestione RAM, avvio sistema operativo.

### **Appunti sui BUS e Componenti Hardware**

### **Definizione di BUS**

- Il **bus** è un insieme di tracce elettriche sottili che trasportano informazioni tra i vari componenti hardware di un sistema.
- Collega diversi dispositivi, inclusi CPU, memoria e periferiche di I/O.
- Tipi principali:
    - **Porta:** un bus che collega solo due dispositivi.
    - **Canale di I/O:** bus condiviso da più dispositivi per gestire operazioni di input/output, spesso indipendentemente dalla CPU.
    - **Frontside Bus (FSB):** collega la CPU alla memoria principale (dati e indirizzi).

### **Velocità del BUS**

- Misurata in MHz (10⁶ Hz) in GHz (10⁹ Hz).
- PCIe (Peripheral Component Interconnect Express):
    - Collega CPU e dispositivi, con velocità fino a 64 Gbps.
- USB (Universal Serial Bus):
    - Versioni moderne (USB 3.0 e successive) raggiungono velocità di 5 Gbps.
    - Non richiede riavvio del sistema per il collegamento dei dispositivi.
- SCSI (Small Computer System Interface):
    - Per dispositivi come hard disk e scanner, velocità fino a 640 MBps.

### **Tipologie di BUS**

1. **DMI (Direct Media Interface):** collega CPU a dispositivi di memoria secondaria.
2. **SATA (Serial Advanced Technology Attachment):** utilizzato per hard disk e dischi ottici.
3. **AGP (Accelerated Graphic Port):** specifico per schede grafiche ad alte prestazioni.

### **Limiti e miglioramenti del BUS**

- Limiti:
    - Saturazione delle prestazioni dovuta all’aumento delle operazioni I/O.
- Soluzioni:
    - Utilizzo di bus addizionali per traffico di memoria e I/O.
    - Separazione tra traffico CPU-memoria e dispositivi periferici.

**Struttura dei Sistemi x86**

- **Esempio di configurazione:**
    - **Bus DMI:** connessione CPU-memoria secondaria.
    - **Bus SATA:** interfaccia per hard disk e dischi ottici.
    - **Bus USB:** connette periferiche come mouse e tastiere.
    - **Bus SCSI:** per dispositivi di alta prestazione (scanner, lettori DVD).

	![[image 4.png]]

---

### **Appunti sui Sistemi Operativi**

### **Definizione**

Il sistema operativo (SO) è un’interfaccia tra hardware e applicazioni, fondamentale per il funzionamento di un computer.

Funzioni principali:
- Gestione delle risorse hardware.
- Fornitura di un ambiente di esecuzione per le applicazioni.
- Gestione efficiente di processi e memoria.

### **Tipologie di Sistemi Operativi**

1. **Generici ad alto livello di astrazione:**
    - Supportano:
        - Grande memoria principale.
        - Hardware specializzato.
        - Numerosi processi simultanei.
2. **Sistemi integrati (embedded):**
    - Risorse limitate, progettati per dispositivi specifici (es. cellulari, PDA).
    - Efficienza nella gestione delle risorse per funzionalità essenziali.

### **Architettura**

- **Spazio utente:**
    - Dove operano le applicazioni.
- **Spazio nucleo:**
    - Area riservata al sistema operativo.
- **Interfaccia - Chiamate di sistema:**
    - Comunicazione tra applicazioni e SO.

```jsx
--------------------------
|      Spazio Utente     |
|------------------------|
| Applicazione 1         |
| Applicazione 2         |
| Applicazione 3         |
--------------------------

         ⇅  
   (Interfaccia - Chiamate di sistema)
         ⇅  

--------------------------
|      Spazio Nucleo     |
|------------------------|
| Gestione Memoria       |
| Gestione Processi      |
| Driver Hardware        |
| Sistema I/O            |
--------------------------
```

### **Sistemi Operativi: Concetti Base**

### **1. Architettura del Sistema Operativo**

- **Caratteristiche Hardware**:
    - Funzioni del SO possono essere eseguite in hardware per migliorare le prestazioni.
    - Consentono al SO di far rispettare la **protezione** (es. accessi limitati alle risorse).

### **2. Protezione e Sicurezza**

- **Meccanismi di Protezione**:
    - Impediscono ai processi di accedere a **istruzioni privilegiate** o a **zone di memoria non autorizzate**.
    - Implementati tramite **registri del processore** modificabili solo da istruzioni privilegiate.
- **Modalità di Esecuzione**:
    - **Modalità Utente**: Esegue solo istruzioni non privilegiate.
    - **Modalità Kernel**: Consente l'accesso a istruzioni privilegiate.
    - **Principio del Privilegio Minimo**: Gli utenti/processi ricevono il minimo indispensabile di permessi.
- **Interrupts ed Eccezioni**:
    - **Interrupts**: Segnali inviati dai dispositivi al processore per notificare eventi.
    - **Eccezioni**: Interrupt generati in risposta a errori (es. divisione per zero).
    - Gestiti dal SO, che li notifica ai processi in attesa.
- **Timer**: Generano interrupt a intervalli regolari per impedire ai processi di monopolizzare il processore.
- **Stallo (Deadlock)**: Situazione in cui due o più processi si bloccano aspettando risorse reciproche.
- **Clocks e Timer**:
    - Timer periodici impediscono il monopolio del processore.
    - Clocks forniscono continuità temporale (tempo e data corrente).

### **3. Bootstrapping (Avvio del SO)**

- **Fasi di Avvio**:
    1. Il BIOS (Basic Input Output System) inizializza l’hardware.
    2. Carica il SO dalla memoria secondaria (settore di avvio).
> In caso non sia caricato l'utente non può interagire con l'hardware del sistema

all’ inizio i bios non erano grafici, ora invece esistono gli EFI (Extensible Firmware Interface): che includono un’interfaccia testuale e supporto per driver.

### **4. Processi**

- **Definizione**:
    - Un **processo** è un programma in esecuzione.
    - Include spazio degli indirizzi, registri, file, segnali, ecc.
- **Identificazione**:
    - Ogni processo ha un **UID** (User Identifier) unico.
    - I processi possono creare **processi figli**.
- **Comunicazione e Sincronizzazione**:
    - **IPC (Interprocess Communication)**: Comunicazione tra processi.
    - **Tabella dei Processi**: Contiene informazioni sui processi attivi.

### **5. File System**

- **Montaggio del File System**:
    - Prima del montaggio, i file non sono accessibili.
    - Dopo il montaggio, i file diventano parte della gerarchia del file system.
- **Tipi di File**:
    - **File a blocchi**: Accesso a dispositivi come dischi.
    - **File a caratteri**: Accesso a dispositivi come stampanti e modem.
    - **Pipe**: Pseudofile per la comunicazione tra due processi.
    
    ![[image 5.png]]
    

### **6. Tecnologie Plug and Play**

- Permette al SO di configurare l’hardware automaticamente.
- Requisiti:
    - Il dispositivo deve identificarsi univocamente.
    - Comunicare risorse e driver richiesti, che il sistema userà per interfacciarsi con l’hardware.

### **7. Cache, Buffer e Spooling**

- **Cache**:
    - Memoria veloce per dati che saranno presto richiesti.
    - Migliora le prestazioni riducendo i tempi di accesso.
    - Algoritmi ottimizzano l’uso (Cache hit/miss).
- **Buffer**:
    - Memoria temporanea per dati durante I/O.
    - Sincronizza dispositivi con velocità diverse.
- **Spooling**:
    - Buffering avanzato che usa dispositivi intermedi (es. dischi) per velocizzare operazioni.

### **Memoria Virtuale**

- Permette di eseguire programmi con richieste di memoria superiori alla memoria fisica.
- **Primo OS con memoria virtuale**: MULTICS.
- Oggi usata in **Unix** e **Windows**.

### **Chiamata di Sistema**

- È una richiesta di un processo per accedere ai servizi del sistema operativo.
- **Funzionamento**:
    - Tramite una **TRAP**, un processo passa il controllo al sistema operativo.
    - Il SO esegue la richiesta e restituisce il controllo all’istruzione successiva del processo.
    - **Passaggio**: modalità utente → modalità kernel.

**Esempio di chiamata di sistema**:

![[image 6.png]]

```c
read(fd, buffer, nbytes)
```

### **Sviluppo dei Sistemi di Elaborazione**

- **Evoluzione (da prima a dopo)**:
    1. Sistemi senza sistema operativo.
    2. Multiprogrammazione e time-sharing.
    3. Personal computer.
    4. Sistemi distribuiti.
- **Nuove funzioni** derivano da:
    - Crescita della domanda.
    - Diversificazione delle richieste.
    - Requisiti specifici degli utenti.

### **Componenti Centrali dei Sistemi Operativi**

1. **Interazione utente-SO**:
    - Tramite **Shell** (interprete dei comandi).
2. **Kernel (nucleo)**:
    - Contiene le funzioni fondamentali del SO.
    - Gestisce:
        - **Processor scheduler**.
        - **Gestore della memoria**.
        - **Gestore I/O**.
        - **Gestore IPC (Interprocess Communication)**.
        - **Gestore del file system**.
3. **Modalità di esecuzione**:
    - **Supervisore** (privilegiata) vs **utente**.
4. **Thread**:
    - Eseguono indipendentemente, condividendo uno spazio in memoria.

### **Chiamate di Sistema nei SO POSIX**

- **Gestione dei processi**: ad esempio, fork(), exec().
- **Gestione file**: open(), read(), write(), close().
- **Gestione file system**: mkdir(), rmdir(), chdir().
- **Altri servizi**: gestione della memoria, segnali, sincronizzazione.
---
## **Architetture dei Sistemi Operativi**

### **Caratteristiche Generali**

- I sistemi operativi attuali sono **complessi**:
    - Offrono **molti servizi e funzioni**.
    - Supportano hardware e software **eterogenei** (diversi).
- Le architetture aiutano a gestire la complessità.

### **Tipi di Architetture di Sistemi Operativi**

### **Architettura Monolitica**

- **Caratteristiche**:
    - Tutti i componenti sono nel **nucleo (kernel)**.
    - I componenti comunicano direttamente tra loro.
- **Vantaggi**:
    - **Elevata efficienza**.
- **Svantaggi**:
    - Difficoltà nell’identificazione degli errori.
    
    ![[image 7.png]]
    

### **Architettura a Livelli**

- **Caratteristiche**:
    - Divide il kernel in **livelli**, ciascuno con funzioni simili.
    - Ogni livello comunica solo con il livello immediatamente **superiore** o **inferiore**.
- **Vantaggi**:
    - Migliora il **progetto** rispetto al modello monolitico.
    - Aumenta l’**isolamento** dei componenti.
- **Svantaggi**:
    - Riduzione dell’**efficienza** (es. throughput).

	![[image 8.png]]

### **Architettura Microkernel**

- **Caratteristiche**:
    - Fornisce solo **servizi essenziali** (es. gestione memoria, IPC, comunicazione hardware).
    - Moduli aggiuntivi sono separati e comunicano con il microkernel.
- **Vantaggi**:
    - Alta **modularità**.
    - Maggiore **stabilità** (errori nei moduli non compromettono tutto il sistema).
- **Svantaggi**:
    - Aumento della **comunicazione tra moduli**.

		![[image 9.png]]

	![[image 10.png]]

### **Macchine Virtuali (VM)**

- **Caratteristiche**:
    - Forniscono una **astrazione software** di un sistema di elaborazione.
    - Consentono la **coesistenza** di più istanze di sistemi operativi.
    - Supportano **emulazione** (HW o SW) e migliorano la **portabilità**.
- **Applicazioni**:
    - Eseguire più sistemi operativi contemporaneamente.

Struttura del sistema VM/370 con CMS:

![[image 11.png]]

### **Sistemi Operativi di Rete (Network OS)**

- **Caratteristiche**:
    - Permettono ai processi locali di accedere alle risorse su **computer remoti**.
    - Ogni computer esegue il proprio SO.

	![[image 12.png]]
### **Sistemi Operativi Distribuiti**

- **Caratteristiche**:
    - Un unico SO gestisce le risorse di un insieme di computer.
    - Obiettivi:
        - **Trasparenza**: accesso, utilizzo, replicazione.
        - **Scalabilità**.
        - **Tolleranza ai guasti**.
        - **Consistenza**.

	![[image 13.png]]
- **Middleware**:
    - Software che semplifica l’interazione tra processi in un sistema distribuito.
    - **Esempio**: ODBC (Open Data Base Connectivity):
        - API per l’accesso ai database.
        - Consente l’uso di database tramite driver middleware.

# Modulo 1 Capitolo 2
### **Introduzione al concetto di processo**

- i sistemi eseguono operazioni concorrentemente
- **Caratteristiche dei processi**:
    - Consentono di gestire attività simultanee.
    - Cambiano stato.
    - Operazioni tipiche dei SO sui processi:
        - Creazione, distruzione, sospensione, ripresa e risveglio.

### Modello di Processo

1. **Esempio multiprogrammazione di 4 programmi**:
    - 4 processi indipendenti e sequenziali.
    - Solo un programma attivo alla volta.
    
    ![image 0 c2.png](image%200%20c2.png)
    
2. **Pseudo-parallelismo**:
    - Ogni processo ha una CPU virtuale.
    - La CPU fisica è unica e viene assegnata a turno.
    - più programmi possono essere eseguiti contemporaneamente.

### Definizione di Processo

Un processo è composto da tre aree principali della memoria:

1. **Regione testo**: Contiene il codice eseguibile.
2. **Regione dati**: Contiene variabili e memoria dinamica.
3. **Regione stack**: Contiene istruzioni e variabili locali delle chiamate di procedura attive.

### Gestione dei Processi

Servizi forniti dai SO per la gestione dei processi:

- Creazione, sospensione e ripresa.
- Modifica delle priorità.
- Blocco e risveglio.
- Dispatching e comunicazione interprocesso (IPC).

### Creazione di Processi

1. **Eventi che generano un nuovo processo**:
    - Inizializzazione del sistema.
    - Chiamate di sistema specifiche.
    - Richieste utente o job batch.
2. **Differenze principali**:
    - **Unix**:
        - Uso della chiamata `fork` per clonare il processo chiamante.
        - Il processo figlio solitamente cambia immagine di memoria con `execve`.
        
        ```jsx
        [Processo Genitore]  
               |  
               |-- fork() --> [Processo Figlio]  
                                  |  
                                  |-- execve() --> [Nuovo Programma in esecuzione]  
        ```
        
    - **Windows**:
        - Uso della funzione `CreateProcess` per creare e caricare direttamente il processo.
3. **Spazi separati**:
    - In Unix: il figlio copia lo spazio del padre.
    - In Windows: il figlio ha uno spazio indipendente fin dall’inizio.

### Chiusura dei Processi

1. **Tipi di terminazione**:
    - Normale (volontaria).
    - Per errore (volontaria).
    - Critica (non volontaria).
    - Forzata da un altro processo (non volontaria).
2. **Chiamate di terminazione**:
    - Unix: `exit`, `kill`.
    - Windows: `ExitProcess`, `TerminateProcess`.
 

### Gerarchia dei Processi

- **Relazioni padre-figlio**:
    - Un processo padre genera uno o più processi figli.
    - Possibili comportamenti quando un processo padre viene distrutto:
        - Distruzione dei figli.
        - Continuazione indipendente dei figli.
- **Differenze tra Unix e Windows**:
    - Unix: organizzazione in gruppi di processi.
    - Windows: processi creati uguali senza gerarchie.

### Stati dei Processi: Ciclo di Vita

1. **Stati principali**:
    - **Running**: Il processo è in esecuzione.
    - **Ready**: Il processo è pronto a essere eseguito se un processore è disponibile.
    - **Blocked**: In attesa di un evento esterno.
        
        ![image.png](image%201%20c2.png)
        
2. **Gestione degli stati**:
    - Liste di processi `ready` e `blocked`.
    - Scheduler per selezionare quale processo eseguire.
3. **Eventi di transizione**:
    - Blocco per attesa di input.
    - Risveglio a seguito di eventi esterni (es: input ricevuto).

parte sotto da controllare e rivedere 

arrivato a **12/10/2022**

### **Stati di processo e transizioni fra stati**

- **Stati principali**:
    - **Ready**: il processo è pronto per essere eseguito.
    - **Running**: il processo è in esecuzione.
    - **Blocked**: il processo è in attesa di un evento.
    - **Suspended**: il processo è "congelato" temporaneamente.
- **Transizioni fra stati**:
    - **Ready → Running**: il processo viene "dispatchato".
    - **Running → Ready**: il quanto di tempo è terminato.
    - **Running → Blocked**: il processo attende un evento.
    - **Blocked → Ready**: l'evento atteso si verifica.
    - **SuspendedReady / SuspendedBlocked**: stati sospesi (processo sospeso ma non distrutto).
    
    ```jsx
    Ready → Running → Blocked
          ↑         ↓         ↑
    		 Suspended Ready   Blocked Suspended
    ```
    
- **Multitasking cooperativo**:
    - Permette l'esecuzione completa di un processo prima di passare al successivo.
    - L'uso di un **quanto breve** migliora la percezione del multitasking.

### **2. Scheduler**

- **Scheduler del SO**: assegna il processore ai processi secondo priorità.
- **Performance**:
    - Dipende dal tasso di multiprogrammazione:
        - nnn: numero di processi in memoria.
        - ppp: frazione di tempo in cui un processo è in attesa di I/O.

### **3. Process Control Blocks (PCBs)**

- **Informazioni contenute**:
    - PID (process identification number).
    - Stato del processo (ready, running, blocked).
    - Program counter (punta alla prossima istruzione).
    - Stack pointer.
    - Priorità per lo scheduling.
    - Puntatori ai processi padre e figli.
    - Risorse allocate.
- **Tabella dei processi**:
    - Contiene i PCB di ogni processo.
    - Permette accesso rapido.
    - Libera risorse quando un processo termina.

### **4. Cambio di contesto (Context Switching)**

- **Passaggi principali**:
    1. Salvataggio del contesto del processo corrente nel suo PCB.
    2. Caricamento del contesto del processo successivo dal PCB.
    3. Trasparente ai processi.
- **Ottimizzazione**:
    - Ridurre al minimo il tempo del cambio di contesto.

### **5. Interrupts**

- **Tipi di interrupt**:
    - **Sinceri (trap)**: sincroni con il processo, es. divisione per zero.
    - **Asincroni**: es. pressione di un tasto.
- **Gestione**:
    - Completare l'istruzione corrente.
    - Eseguire il gestore di interrupt (kernel).
    - Riprendere l'esecuzione del processo interrotto o passare al successivo.
- **Polling (alternativa)**:
    - Il processore controlla ciclicamente lo stato dei dispositivi.
    - Overhead elevato per sistemi complessi.

### **6. Interprocess Communication (IPC)**

- **Metodi principali**:
    - **Segnali**:
        - Notificano eventi, non scambiano dati.
        - Possono essere ricevuti, ignorati o mascherati.
    - **Message passing**:
        - Scambio diretto di messaggi (bloccanti o non bloccanti).
        - Implementazione comune: **pipe**.
    - **IPC in sistemi distribuiti**:
        - Problemi di corruzione o perdita di messaggi.
        - Importanza della sicurezza e autenticazione.

### **7. Processo UNIX**

- **Caratteristiche**:
    - Ogni processo ha uno spazio di indirizzi virtuali.
    - PCB gestito dal kernel in una memoria protetta.
    - Tabella dei processi tiene traccia di tutti i processi.
    - Comunicazione tramite chiamate di sistema (es. `fork`).
- **Priorità**:
    - Valori numerici da -20 (alta) a 19 (bassa).
- **Chiamate di sistema UNIX**:
    - **Fork**: crea un processo figlio (condivide file aperti del padre).
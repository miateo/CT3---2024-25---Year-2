 tags: #uni #notes 
 ---
 ## Table of Contents
 - [[#Introduzione alle Basi di Dati]]
 - [[#DDL]]
---
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

>Una base di dati è una raccolta di dati permanenti divisa in due categorie:
> - Metadati -> definiscono lo schema della Base Dati
> - Dati -> informazioni che conformano alle caratteristiche dello schema

Un DBMS (Data Base Management System) è un sistema centralizzato o distribuito che offre strumenti per:
- Definire lo schema di una base dati
- Scegliere le *strutture dati*
- Memorizzare i dati
- Recuperare e modificare i dati interattivamente attraverso l'utilizzo di *query language*
Il DBMS ci permette inoltre di verificare che i vincoli impostati nella nostra base dati risultano rispettati prima di permettere un inserimento
#### Esempio di un DBMS Centralizzato
![[Pasted image 20240920155422.png]]

## DDL
Sono presenti tre livelli di descrizione dei dati: livello di vista logica, livello logico e livello fisico.
### Livello Fisico
Descrive come i dati vengono memorizzati nelle memorie hw e contengono strutture ausiliarie per l'ottimizzazione d'uso
### Livello Logico
Descrive la struttura degli insieme di dati e delle relazioni fra questi, seguendo un modello dei dati senza curarsi dell'effettiva organizzazione fisica nelle memorie hw
### Vista Logica
Descrive come deve apparire la struttura della Base Dati ad una certa applicazione
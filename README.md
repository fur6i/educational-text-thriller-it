# Educational Text Thriller (Italian)

Un thriller psicologico testuale ed educativo sviluppato in C++. Nato come progetto didattico per esplorare la logica condizionale e il controllo del flusso narrativo.

## Come iniziare (Plug & Play)

1. Assicurati di avere installato **Visual Studio** con il carico di lavoro per lo sviluppo desktop in C++.
2. Clona o scarica questo repository come archivio ZIP ed estrailo sul tuo computer.
3. Apri il file di soluzione (`.slnx`) all'interno della cartella.
4. Premi **Ctrl + F5** per compilare ed eseguire il gioco all'istante.

## Note di sviluppo e limiti noti
Questo codice nasce come primo esperimento didattico e mostra volutamente alcune imperfezioni strutturali utili a fini di studio:
* **Gerarchia di `if` complessa:** La progressione della storia si basa su lunghe catene di condizionali annidati, evidenziando i limiti di scalabilità di questo approccio e offrendo uno spunto pratico per analizzare alternative più pulite, come macchine a stati o tabelle di transizione.
* **Gestione degli input:** L'acquisizione delle scelte dell'utente è basilare e richiede validazioni più rigorose per gestire correttamente eventuali digitazioni errate.

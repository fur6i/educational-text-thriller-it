// story.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.

#include <iostream>

int main()
{

	std::system("chcp 65001 > nul");	// Imposta la console per supportare i caratteri UTF-8 
										// (Aggiunto con AI) 


	std::cout << "Benvenuto Giocatore!\n"
		      << "Prima di iniziare ho una domanda per te: Come ti chiami? ";

	std::string nome;					// Variabile per memorizzare il nome del giocatore
	std::cin >> nome;

	std::cout << "Fantastico, " << nome << "!\nOra ho solo bisogno di un altro dettaglio: Quanti anni hai? ";

	int eta; 							// Variabile per memorizzare l'età del giocatore
	std::cin >> eta;

	if (eta >= 12) {
		std::cout << "Perfetto, sei pronto per iniziare l'avventura!\n";
	}

	if (eta < 12) {
		std::cout << "Mi dispiace, ma devi avere almeno 12 anni per giocare.";
		return 0;
	}
	
	std::cout << "In questo gioco, dovrai affrontare diverse sfide e prendere decisioni che influenzeranno il corso della storia.\n"
		      << "Buona fortuna!\n";

	std::cout << "Premi un tasto qualsiasi e premi invio per iniziare l'avventura...";
	
	char oneInput;						// Variabile 1 per attendere l'input dell'utente (Tornerà utile per Lettera Easter Egg) (canceled)
	std::cin >> oneInput;				// Variabile 1 per attendere l'input dell'utente (Tornerà utile per Lettera Easter Egg) (canceled)

	std::system("cls");					// Pulisce la console

	std::cout << "   T		Sei nel tuo salotto, seduto comodamente sul divano. La luce del sole filtra attraverso le tende, creando un'atmosfera calda e accogliente.\n"
			  << " .-'-.		All'improvviso, senti un rumore provenire dalla cucina.\n"
		      << "|  ___|		Cosa fai?\n"
			  << "| (.\\/.)\n"
			  << "|  ,,,'		1. Vai a controllare il rumore in cucina.\n"
			  << "| '###		2. Ignori il rumore e continui a guardare la TV.\n"
			  << " '----'\n"
			  << "		Inserisci il numero della tua scelta e premi invio: ";

	int scelta1;						// Variabile per memorizzare la prima scelta del giocatore

	std::cin >> scelta1;

	std::system("cls");					// Pulisce la console

	if (scelta1 == 1) {																		//PRIMA SCELTA
		std::cout << " ,--./,-.	Ti alzi dal divano e ti dirigi verso la cucina\n"
				  << "/,-._.--~\\	Apri la porta e vedi un vaso di fiori caduto a terra, il tuo gatto si trova seduto vicino alla mensola sulla quale era riposto il vaso.\n"
				  << " __}  {		Il gatto ti guarda con occhi innocenti, come se volesse dirti che non è stato lui a far cadere il vaso nonostante sia l'unica persona presente nella stanza.\n"
				  << "\\`-._,-`-,	Cosa fai?\n"
				  << " `._,._,'\n"
				  << "		1. Sgridi il gatto per aver fatto cadere il vaso.\n"
				  << "		2. Decidi di ignorare l'accaduto e pulisci il vaso caduto.\n\n"
				  << "		Inserisci il numero della tua scelta e premi invio: ";

		int scelta1_1;

		std::cin >> scelta1_1;

		std::system("cls");					// Pulisce la console)							// SECONDA SCELTA 

		if (scelta1_1 == 1) {
			std::cout << " ////^////	Sgridi il gatto per aver fatto cadere il vaso. Il gatto sembra stranamente spaventato e scappa nella camera da letto.\n"
					  << " | \\   / |	Dopo qualche minuto finisci di pulire il vaso e senti un altro rumore provenire dalla camera da letto.\n"
					  << "@ (o) (o) @	Ti avvicini alla porta della camera da letto, pronto a fare il gatto in tecia, provi ad aprirla, ma non riesci a farlo, sembra che qualcosa la stia bloccando.\n"
					  << " |   <   |	Mentre stai provando a forzare la porta il gatto inizia a soffiare a qualcosa o qualcuno, non capisci cosa stia succedendo, in quanto nell'appartamento ci siete solo tu e lui.\n"
					  << " |  ___  |\n"
					  << "  \\_____/\n\n"
						<< "		1. Inizi a calciare la porta, cercando di aprirla a qualsiasi costo.\n"
						<< "		2. Decidi di andare in salotto a riposarti un po'.\n\n"
						<< "		Inserisci il numero della tua scelta e premi invio: ";

			int  scelta1_1_1;

			std::cin >> scelta1_1_1;

			std::system("cls");					// Pulisce la console						// SECONDA SCELTA

			if (scelta1_1_1 == 1) {
				std::cout << "				Inizi a calciare la porta con tutte le tue forze, riesci a forzarla.\n"
						  << "      |\\      _,,,---,,_	Non appena entri nella camera da letto, trovi il gatto privo di vita disteso sulle coperte.\n"
						  << "      /,`.-'`'    -.  ;-;;,_	Senti un rumore strano provenire da dietro di te\n"
						  << "     |,4-  ) )-,_. ,\\ (  `'-'	Ti giri di scatto e noti un'ombra muoversi rapidamente nella stanza.\n"
						  << "    '---''(_/--'  `-'\\_)	Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
						  << "				Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n\n"
						  << "				FINE DEL GIOCO\n";
				
				//std::cout << FinalMessageU18 
			}

			if (scelta1_1_1 == 2) {
				std::cout << "         .-.		Non capisci cosa stia succedendo, ma decidi di andare a riposarti sul divano, immaginando di essere stanco e di star immaginando tutto.\n"
					<< "       _/ ee\\		Arrivi sul divano e ti sdrai, chiudi gli occhi e ti addormenti.\n"
					<< "      ( \\  o/__		Dopo qualche ora un continuo beep ti sveglia, ti alzi e noti che il tuo gatto è disteso a terra privo di vita.\n"
					<< "       \\    \\__)	Non capisci cosa stia succedendo, ma noti un'ombra con la coda dell'occhio muoversi rapidamente nella stanza.\n"
					<< "       /     \\		Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
					<< "    __/       \\		Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n"
					<< "   (   _._.-._/ \n"
					<< "    '-'        \n "
					<< "			FINE DEL GIOCO\n";

			}
		}

		if (scelta1_1 == 2) {
			std::cout << " __________\n"
				<< "()_________)		Decidi di ignorare l'accaduto e pulisci il vaso caduto.\n"
				<< " \\ ~~~~~~~~ \\		Mentre stai pulendo, noti un piccolo biglietto accanto al vaso. Lo prendi e leggi le parole scritte su di esso: 'Non fidarti del tuo gatto, non è quello che sembra'.\n"
				<< "  \\ ~~~~~~   \\		Alzi lo sguardo e noti che il tuo gatto ti sta fissando con uno sguardo strano, come se stesse cercando di comunicarti qualcosa.\n"
				<< "   \\__________\\		'Ma che...' sospiri, il gatto decide di scappare nella camera da letto.\n"
				<< "    ()__________)	'Mi sta dirigendo da qualche parte?' pensi tra te e te, ma non hai il tempo di riflettere su questo, in quanto il gatto inizia a soffiare a qualcosa o qualcuno,\n"
				<< "			non capisci cosa stia succedendo, in quanto nell'appartamento ci siete solo tu e lui.\n\n"
				<< "			1. Decidi di seguirlo e vedere cosa sta succedendo nella camera da letto.\n"
				<< "			2. Decidi di non seguirlo e andare a riposarti sul divano.\n\n"
				<< "			Inserisci il numero della tua scelta e premi invio: ";

			int scelta1_1_2;

			std::cin >> scelta1_1_2;

			std::system("cls");					// Pulisce la console						// TERZA SCELTA

			if (scelta1_1_2 == 1) {
				std::cout << "	   .-.		Decidi di andare dal gatto, ti dirigi allora verso la camera da letto.\n"
					<< "     _/ ee\\		Arrivi davanti alla porta, estremamente confuso, ma allo stesso tempo leggermente spaventato,\n"
					<< "    ( \\  o/__		provi ad aprirla, ma non ci riesci, sembra che qualcosa la stia bloccando.\n"
					<< "     \\    \\__)		Non capisci cosa stia succedendo, ma ti senti troppo stanco per proseguire, decidi quindi di andare a riposarti sul divano.\n"
					<< "     /     \\		Arrivi sul divano e ti sdrai, chiudi gli occhi e ti addormenti.\n"
					<< "  __/       \\		Dopo qualche ora un continuo beep ti sveglia, ti alzi e noti che il tuo gatto è disteso a terra privo di vita.\n"
					<< "(   _._.-._/		Non capisci cosa stia succedendo, ma noti un'ombra con la coda dell'occhio muoversi rapidamente nella stanza.\n"
					<< " '-'			Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
					<< "			Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n\n"
					<< "			FINE DEL GIOCO\n";

			}

			if (scelta1_1_2 == 2) {
				std::cout << "	   .-.		Arrivi sul divano e ti sdrai, chiudi gli occhi e ti addormenti.\n"
					<< "     _/ ee\\		Dopo qualche ora un continuo beep ti sveglia, ti alzi e noti che il tuo gatto è disteso a terra privo di vita.\n"
					<< "    ( \\  o/__		Non capisci cosa stia succedendo, ma noti un'ombra con la coda dell'occhio muoversi rapidamente nella stanza.\n"
					<< "     \\    \\__)		Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
					<< "     /     \\		Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n"
					<< "  __/       \\	\n"
					<< "			FINE DEL GIOCO\n";

			}
		}


	}

	if (scelta1 == 2) {																		// PRIMA SCELTA
		std::cout << " /\\     /\\	Decidi di ignorare il rumore e continui a guardare la TV.\n"
			<< "{  `---'  }	Il rumore sembra essere solo un oggetto che cade, niente di grave.\n"
			<< "{  O   O  }	Tuttavia, dopo qualche minuto, senti il tuo gatto miagolare insistentemente dalla cucina. Sembra che voglia attirare la tua attenzione.\n"
			<< "~~>  V  <~~\n"
			<< " \\  \\|/  /	1. Vai a controllare il gatto in cucina.\n"
			<< "  `-----'	2. Ignori il gatto e continui a guardare la TV.\n\n"
			<< "		Inserisci il numero della tua scelta e premi invio: ";

		int scelta1_2;

		std::cin >> scelta1_2;

		std::system("cls");					// Pulisce la console)							// SECONDA SCELTA

		if (scelta1_2 == 1) {
			std::cout << "       .           .	Entri in cucina e trovi un vaso caduto a terra, il tuo gatto però non è presente, potrebbe essere passato dietro al divano mentre eri impegnato con la TV.\n"
				<< "      /|__________/|	Mentre stai pulendo il vaso, noti un piccolo biglietto accanto al vaso. Lo prendi e leggi le parole scritte su di esso: 'Non fidarti del tuo gatto, non è quello che sembra'.\n"
				// Non è stato trovato nella scelta 1_1 Perché i livelli di monossido di Carbonio sono aumentati a causa della scelta1 nella quale è stata selezionata l'opzione 2.
				<< "    .// /       .//|	Sei estremamente confuso, decidi di ignorare il biglietto e ti dirigi verso la camera da letto a riposarti, presumendo che sia tutto frutto della tua immaginazione,\n"
				<< "    |/_/________|//|	è ormai da qualche settimana che ti senti sempre più stanco, attribuisci questo al lavoro e al cambio di stagione.\n"
				<< "    |_|_________|/	Arrivi davanti alla porta della camera da letto, appena poggi la mano sulla maniglia senti il gatto miagolare da dentro la stanza.\n"
				<< "    |           |\n"
				<< "			1. Apri la porta e entri nella camera da letto.\n"
				<< "			2. Decidi di non aprire la porta e di dormire sul divano.\n\n"
				<< "			Inserisci il numero della tua scelta e premi invio: ";

			int scelta1_2_1;

			std::cin >> scelta1_2_1;

			std::system("cls");					// Pulisce la console						// TERZA SCELTA

			if (scelta1_2_1 == 1) {
				std::cout << " _______	Apri la porta e entri nella camera da letto. Il tuo gatto è seduto sul letto, fissandoti con uno sguardo confuso.\n"
					<< "|___|___|	Decidi di avvicinarti al letto per accarezzarlo, ma noti che il gatto sembra essere spaventato da qualcosa.\n"
					<< "|___|___|	Mentre ti avvicini al letto, noti un'ombra muoversi rapidamente dietro di te. Ti giri di scatto, ma non c'è nessuno.\n"
					<< "|_o_|_o_|	Ti rigiri verso il letto e noti che il gatto è scomparso. In quel momento, senti un rumore provenire dall'armadio.\n"
					<< "|___|___|\n"
					<< " ||   ||	1. Apri l'armadio per vedere cosa c'è dentro.\n"
					<< "		2. Decidi di non aprire l'armadio e di andare a dormire.\n\n"
					<< "		Inserisci il numero della tua scelta e premi invio: ";

				int scelta1_2_1_1;

				std::cin >> scelta1_2_1_1;

				std::system("cls");					// Pulisce la console						// TERZA SCELTA 

				if (scelta1_2_1_1 == 1) {
					std::cout << "               ......				Apri l'armadio e trovi il tuo gatto disteso a terra privo di vita. Non capisci cosa stia succedendo, ma noti un'ombra muoversi rapidamente nella stanza.\n"
							  << "            .:||||||||:.			Ti giri di scatto istintivamente, ma non vedi nessuno, senti però una voce sussurrare il tuo nome, " << nome << ", " << nome << ", " << nome << "...\n"
							  << "           /            \\			Prima che tu possa reagire, senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
							  << "          (   o      o   )			Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n"
							  << "--@@@@----------:  :----------@@@@--\n"
							  << "					FINE DEL GIOCO\n";
				}

				if (scelta1_2_1_1 == 2) {
					std::cout << "               ......				Decidi di non aprire l'armadio e di andare a dormire. Ti sdrai sul letto e chiudi gli occhi, cercando di rilassarti.\n"
							  << "            .:||||||||:.			Dopo qualche ora, un continuo beep ti sveglia. Ti alzi e noti che il tuo gatto è disteso a terra privo di vita.\n"
							  << "           /            \\			Non capisci cosa stia succedendo, ma noti un'ombra muoversi rapidamente nella stanza.\n"
							  << "          (   o      o   )			Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
							  << "--@@@@----------:  :----------@@@@--\n"
							  << "					Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n\n"
							  << "					FINE DEL GIOCO\n";
				}
			}

			if (scelta1_2_1 == 2) {
				std::cout << "	.-.		Decidi di non aprire la porta e di dormire sul divano. Ti sdrai e chiudi gli occhi, cercando di rilassarti.\n"
						  << "     _/ ee\\		Dopo qualche ora, un continuo beep ti sveglia. Ti alzi e noti che il tuo gatto è disteso a terra privo di vita.\n"
						  << "    ( \\  o/__		Non capisci cosa stia succedendo, ma noti un'ombra muoversi rapidamente nella stanza.\n"
						  << "     \\    \\__)		Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
						  << "     /     \\		\n"
						  << "  __/       \\		Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n\n"
						  << "			FINE DEL GIOCO\n";

			}

		}

		if (scelta1_2 == 2) {
			std::cout << "               ......				Decidi di ignorare il gatto e continui a guardare la TV. Dopo qualche minuto, inizi a sentirti sempre più stanco.\n"
					  << "            .:||||||||:.			Scegli allora di fare un pisolino, ti addormenti, ma dopo qualche minuto senti una strana sensazione di disagio che ti fa svegliare, apri quindi gli occhi e noti un'ombra muoversi rapidamente nella stanza.\n"
					  << "           /            \\			Prima che tu possa reagire, l'ombra si avvicina a te e senti un dolore acuto al petto. Cadi a terra, incapace di respirare.\n"
					  << "          (   o      o   )			\n"
					  << "--@@@@----------:  :----------@@@@--		Realizzi finalmente cos'erano tutti quei beep mentre tutto diventa nero...\n\n"
					  << "					FINE DEL GIOCO\n";
		}
	}

	if (eta < 18) {
		std::cout << "\n\nQuesto sarebbe potuto succedere a chiunque, persino a te, " << nome << ".\n"
			<< "In questa storia non c'erano mostri, nè fantasmi, nè creature sovrannaturali.\n"
			<< "C'era invece un killer silenzioso, invisibile e letale: il monossido di carbonio.\n"
			<< "Non sottovalutare mai i sintomi di questo gas, come mal di testa, nausea, stanchezza e allucinazioni.\n\n"
			<< "Ricorda ai tuoi genitori di assicurarsi sempre di avere rilevatori di monossido di carbonio funzionanti in casa e di ventilare adeguatamente gli ambienti.\n"
			<< "Grazie per aver giocato, " << nome << ". Spero che questa storia ti abbia fatto riflettere sull'importanza della sicurezza domestica.\n";

		return(0);

	
	}
	
	else {
		std::cout << "\n\nQuesto sarebbe potuto succedere a chiunque, persino a te, " << nome << ".\n"
			<< "In questa storia non c'erano mostri, nè fantasmi, nè creature sovrannaturali.\n"
			<< "C'era invece un killer silenzioso, invisibile e letale: il monossido di carbonio.\n"
			<< "Non sottovalutare mai i sintomi di questo gas, come mal di testa, nausea, stanchezza e allucinazioni.\n\n"
			<< "Assicurati sempre di avere rilevatori di monossido di carbonio funzionanti in casa e di ventilare adeguatamente gli ambienti.\n"
			<< "Grazie per aver giocato, " << nome << ". Spero che questa storia ti abbia fatto riflettere sull'importanza della sicurezza domestica.\n";

		return(0);

	}
}

// Il codice è molto rudimentale, non segue le gerarchie di programmazione e non è ottimizzato (piramidi di if).
// Tuttavia, è il mio primo progetto più "complesso" in C++ svolto con un paio di giorni di esperienza, oltretutto le mie conoscenze sono molto basiche.
// Continuerò a studiare e a migliorare le mie capacità di programmazione, ma per ora sono soddisfatto del risultato ottenuto con questo progetto.

// Dubito che ritornerò su questo progetto, preferisco mantenerlo su GitHub come ricordo del mio primo progetto più complesso in C++ e come esempio di come ero all'inizio del mio percorso di apprendimento della programmazione.

// ASCII presi dal sito https://www.asciiart.eu/ , i diritti d'autore vanno a loro, io li ho solo copiati e incollati nel mio progetto.
// Tutto il resto però è stato scritto da me, senza copiare e incollare da nessuna parte, e soprattutto senza AI (tranne riga 8).



// furbi, 06/09/2026.
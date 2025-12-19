// Attendre 5 secondes avant de commencer (pour laisser le temps au système de se préparer)
delay(5000); 
 
// Ouvre la boîte de dialogue "Exécuter" (Windows : Win + R) 
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
delay(500); // Attendre la frappe
 
// Remplacez 'cmd' (dans le script complet) par 'notepad' pour cette étape de test
DigiKeyboardFr.print("notepad"); // Taper le nom du programme à lancer
DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Valider (Lancer le bloc-notes)
delay(1000);
 
// Le script devrait ensuite simuler la frappe du texte "hacked" dans le bloc-notes
DigiKeyboardFr.print("hacked");

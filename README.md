[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/6iq0MBKt)
# Antagningsprov – Programmeringstest

Detta är ett programmeringstest där du ska lösa **10 uppgifter** av varierande svårighetsgrad.  
Testet börjar med enkla operationer och ökar gradvis i komplexitet.  

## **Regler och riktlinjer**
- Läs instruktionerna noggrant innan du börjar.
- **Alla uppgifter ska implementeras i de befintliga filerna** `uppg1.c` till `uppg10.c`.
- **Du får inte skapa nya filer eller ändra andra filer** i projektet.
- **All inmatning sker via tangentbordet**.
- **All utmatning ska ske exakt enligt beskrivningen** (inga extra texter eller formatering).
- I vissa uppgifter får du lägga till funktioner utöver `main()`, detta anges i uppgiften.
- **Du får inte använda `math.h`** i uppgifterna.

---

## **Poängfördelning**
| Uppgift | Poäng |
|---------|-------|
| Uppgift 1 | 1 |
| Uppgift 2 | 1 |
| Uppgift 3 | 1 |
| Uppgift 4 | 2 |
| Uppgift 5 | 2 |
| Uppgift 6 | 2 |
| Uppgift 7 | 2 |
| Uppgift 8 | 3 |
| Uppgift 9 | 3 |
| Uppgift 10 | 3 |
| **Totalpoäng** | **20** |

---

## **Uppgifter**

### **Uppgift 1: Summera två tal** (1 poäng)
1. Läs in två heltal från tangentbordet.
2. Summera heltalen.
3. Skriv ut resultatet (**bara siffror, ingen övrig text**).

---

### **Uppgift 2: Störst av tre tal** (1 poäng)
1. Läs in tre heltal från tangentbordet.
2. Ta fram det största av dem.
3. Skriv ut det största talet (**bara siffror, ingen övrig text**).

---

### **Uppgift 3: Teckenräknare** (1 poäng)
1. Läs in en sträng från tangentbordet (**max 20 tecken**).
2. Ta fram hur många tecken strängen innehåller (**bortsett från `\0`**).
3. Skriv ut antalet tecken (**bara siffror, ingen övrig text**).

---

### **Uppgift 4: Skriv ut det tredje tecknet i en sträng** (2 poäng)
1. Läs in en sträng från tangentbordet (**max 20 tecken**).
2. Ta fram det tredje tecknet i strängen (**ex: `"hejsan"` → `'j'`**).
3. Om strängen är kortare än tre tecken, skriv ut `"Too short"`.
4. Om strängen är minst tre tecken lång, skriv ut det tredje tecknet.

---

### **Uppgift 5: Multiplikationstabell** (2 poäng)
1. Läs in ett heltal från tangentbordet.
2. Skapa en multiplikationstabell för talet upp till **10 × talet**.
3. Skriv ut din gångertabell, **ett tal per rad** (**så 10 rader**).  
   **OBS:** Ingen övrig formatering eller text. Bara siffror och radbrytningar.

---

### **Uppgift 6: Hitta det näst största talet** (2 poäng)
1. Läs in **fem heltal** från tangentbordet.
2. Hitta det **näst största** av de fem talen (**förutsätt att alla är unika**).
3. Skriv ut talet (**bara siffror, ingen övrig text**).  
   **OBS:** Du får **inte** använda `math.h` i den här uppgiften.

---

### **Uppgift 7: Beräkna kroppsmassaindex (BMI)** (2 poäng)
1. Skriv färdigt funktionen för BMI enligt formeln:  
   **BMI = vikt / (längd * längd)**
2. Rör **inte** `main()`-funktionen, den är redan klar.
3. **OBS:** Du får **inte** använda `math.h` i den här uppgiften.

---

### **Uppgift 8: Räkna vokaler i en sträng** (3 poäng)
1. Läs in en **sträng** (**inga mellanslag, ej åäö eller specialtecken**).
2. Strängen kan innehålla **både stora och små bokstäver**.
3. Strängen är **max 20 tecken lång**.
4. Räkna hur många vokaler (`a, e, i, o, u, y`) strängen innehåller.
5. Skriv ut det **totala antalet vokaler**.  
   **OBS:** Du får lägga till funktioner i koden utöver det som skrivs i `main()`.

---

### **Uppgift 9: Addera numeriska strängar** (3 poäng)
**Ibland när tal ska läsas in får man dem som en sträng istället för som ett tal.**  
1. Läs in **två strängar**.
2. Båda strängarna kommer att vara **tre tecken långa** och **bara innehålla siffror**  
   **Exempel:** `"123"` och `"456"`.
3. Omvandla strängarna till heltal.
4. Addera talen.
5. Skriv ut resultatet.  
   **Exempel:**  
   **In:** `"123" "456"`  
   **Ut:** `579` (**Bara detta tal skrivs ut**)  
   **OBS:** Du får lägga till funktioner i koden utöver det som skrivs i `main()`.

---

### **Uppgift 10: Sortera bokstäver i en sträng** (3 poäng)
1. Läs in en **sträng** (**bara små bokstäver a-z, max 20 tecken**).
2. Sortera bokstäverna i **alfabetisk ordning**.
3. Skriv ut den **sorterade strängen**.  
   **Exempel:**  
   **In:** `"banana"`  
   **Ut:** `"aaabnn"`  
   **OBS:** Du får lägga till funktioner i koden utöver det som skrivs i `main()`.

---

## **Slutord**
- **Alla uppgifter ska implementeras i filerna `uppg1.c` till `uppg10.c`**.
- **Du får inte ändra andra filer eller skapa nya filer**.
- Lycka till! Se till att följa instruktionerna noggrant och skriv **endast ut det som efterfrågas**.

---

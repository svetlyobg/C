#Символни низове в С++

#HSLIDE

* Какво е символен низ  
* Декларация и инициализация  
* Въвеждане и извеждане  
* Достъп до отделен елемент  
* Допустими операции  
* Вградени функции  

#HSLIDE
####Последователност от елементи от символен тип
|**__Тип__**|**__Размер__** _byte_|**__Обхват__**|
|---|:---:|---|
|<font color="white">**`char`**</font>|<font color="white">1</font>|<font color="white">0/255</font>|
|int|4|-2 147 483 648 до 2 147 483 647|
|float|4|7 знака след .|
|double|8|15 знака след .|

#HSLIDE
##Декларация & Инициализация
```c++
char name2[10]={'S','v','e','t','l','o','z','a','r'};
char name[10]="Svetlozar";
char lastName[]="Kosev";
char str1[10];
char str3 []="123";
```
#HSLIDE
##Индекс

|RAM|I|v|a|n|\0|\0|\0|\0|\0|
|---|---|---|---|---|---|---|---|---|
|индекс|0|1|2|3|4|5|6|7|8|
|Символ|S|v|e|t|l|o|z|a|r|
|индекс|0|1|2|3|4|5|6|7|8|

#HSLIDE

##Грешно инициализиране

```
char name[5];
name = "Ivan";
```
<p align="left">__или__</p>
```
char name2[5];
name 2 = {'I','v','a','n'};
```

<u><font color="red">Недопустимо е инициализирането да бъде направено нa хода на програмата след декларацията!</font></u>
#HSLIDE
```c++
char emptyString [] = "";
char spaceString [] = " ";
char helloWorld[] = "Hello World";
char svetlozar[] = "Светлозар";
char num [] = "1436";
char shlokavica [] = "sjdfnsdjfn23123_ 1 2 5 .-( ";
char someSymbols[] = "¥►▫♥█☻ﺶ";" )"
char specialSymbols[] = "Това е наклонена черта \\";
char directory[] = "D:\\Programs\\Ebook Reader\\translations";
```
#HSLIDE
####ASCII таблицата със символите
|Dec|Chr|Dec|Chr|
|---|---|---|---|
|<font color="white">64</font>|<font color="white">@</font>|<font color="white">96</font>|<font color="white">`</font>|
|64|A|97|a|
|66|B|98|b|
|67|C|99|c|
|68|D|100|d|
|69|E|101|e|

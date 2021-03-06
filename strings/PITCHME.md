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
<br \>
<font color="red">Недопустимо е инициализирането да бъде направено нa хода на програмата след декларацията!</font>
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
###ASCII таблицата със символите
|<font color="white">Dec</font>|<font color="white">Chr</font>|<font color="white">Dec</font>|<font color="white">Chr</font>|
|---|---|---|---|
|64|@|96|`|
|<font color="white">64</font>|<font color="white">A</font>|<font color="white">97</font>|<font color="white">a</font>|
|66|B|98|b|
|67|C|99|c|
|68|D|100|d|
|69|E|101|e|

#HSLIDE
##Въвеждане на низ от клавиатурата

```c++
char name[20];
cin >> name;
```

<font color="red">Предвидете място за символа, указвайщ край на низ __\0__</font>
#HSLIDE
##Извеждане на низ на конзолата

```c++
char printBackSlash[2] = "\\";
count << printBackSlash << endl;
```
#HSLIDE
##Достъп до отделен елемент на низ

```c++
char name [] = "Svetlozar Kosev", s;

count << name[0] << endl;
count << name[1] << endl;
count << name[2] << endl;
count << name[7] << endl;
count << name[14] << endl;

s = name[7];
count << "s = name[7] -> " << s << endl;
```
#HSLIDE
##Допустими операции
<br \>
* Може да се извъриват опирации над отделни символ;  
* Тези операции трябва да са допустими за тип char.  
  <br \>
  <br \>
<font color="red">Директни операции над цели низове не са допустими!</font>

#HSLIDE
##Вградени фунцкии за работа с низове
- Намиране дължината на низ
- Въвеждане на низ
- Копиране на низ
- Сравняване на два низа

```c++
#include <string.h>
```
#HSLIDE
##Намиране дължина на низ
```c++
strlen(имеНаНиз);

char a [] = "hello";
count<<"Низът съдържа "<<strlen(a)<<" брой елементи"<<endl;
```

Връща цяло число = дължината на низа.
#HSLIDE
##Въвеждане на низ
```c++
cin.getline(имеНаНиз,бройСимволи);
char str[5];
cin.getline(str, 5);
cout << str;
```
```c++
cin.getline(имеНаНиз, бройСимволи,'символ');
char niz[10];
cin.getline(niz, 10, '@');
cout << niz;
```
<i>Въвежда до първото срещане на **'символ'**</i>
#HSLIDE
##Копиране на един низ в друг
```c++
strcpy(имеНаНиз1,имеНаНиз2);
char a[15],b[] = "INFORMATIKA";
strcpy(a, b);
cout << a <<"\n" <<b << endl;
```
<i>Копира низ 2 в виз 1</i>
```c++
strncpy(имеНаНиз1,имеНаНиз2,n);
char a[15],b[] = "INFORMATIKA";
strncpy(a, b, 4);
cout << a << endl;
```
<i>Копира първите **n** символа</i>
#HSLIDE
##Сравняване на два низа
```c++
strcmp(низ1,низ2);
char a[] = "aaa", b[] = "aaa";
cout << strcmp(a, b)<<endl;
```
0 ако двата низа са равни  
-1 ако низ1 < низ2 (в първите си n символа)  
1 ако низ1 > низ2 (в първите си n символа)  
```c++
strcmp(низ1,низ2, );
char a[] = "matematika", b[] = "matura";
cout << strncmp(a, b, 4) << endl;
```
#HSLIDE
###Какво научихте дотук
- Какво е символен тип и за какво се използва
- Как се декларира и инициализират низове
- Как се въвеждат и извеждат низове
- Как се извършва достъп до елемент
- Кои са допустими операции при работа с низове
- Кои са основните функции за работа с низове  
:computer:

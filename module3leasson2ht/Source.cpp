#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

void main() {
	//one:
	//	int z;
	//	printf("z = ");
	//	scanf("%d", &z);
	//
	//	switch (z)
	//	{
	//	case 1: system("color 40");
	//		break;
	//	case 2: system("color 50");
	//		break;
	//	case 3: system("color 60");
	//		break;
	//	case 4: system("color 70");
	//		break;
	//	case 5: system("color 80");
	//		break;
	//	case 6: system("color 90");
	//		break;
	//	case 7: system("color 30");
	//		break;
	//	case 8: system("color 20");
	//		break;
	//	default:
	//		break;
	//	}
	//	goto one;


	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//system("color 5");

	int n = 1;
start:
	printf("n (1-7) = ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: {
		printf("1.	Напишите функцию f(int& h, int& m, int& s, int sec), которая принимает количество секунд, прошедших с начала дня, и возвращает три целых переменных (часы, минуты и секунды)\n\n");

		int h, m, s;

		printf("sekynd prowlo = ");
		scanf("%d", &s);

		if (s >= 0 && s < 86400)
		{
			h = s / 3600;
			m = (s - h * 3600) / 60;
			s = s % 60;
			printf("vremya =  %d:%d:%d\n\n", h, m, s);
		}
		else printf("max 86399/n");
	}
			break;
	case 2: {
		printf("2.	Напишите функцию int f(int x), которая принимает целое значение (не больше пяти знаков) и возвращает число с обратным порядком цифр. Например, принимается число 7631, возвращается число 1367\n\n");

		int x, digitCount, r1, r2;
	start2:
		printf("x = ");
		scanf("%d", &x);

		digitCount = log10(x) + 1;

		switch (digitCount)
		{
		case 1: printf("x = %d", x);
			break;
		case 2: printf("x = %d%d\n\n", x % 10, x / 10);
			break;
		case 3: printf("x = %d%d%d\n\n", x % 10, x / 10 % 10, x / 100);
			break;
		case 4: printf("x = %d%d%d%d\n\n", x % 10, x / 10 % 10, x / 100 % 10, x / 1000);
			break;
		case 5: printf("x = %d%d%d%d%d\n\n", x % 10, x / 10 % 10, x / 100 % 10, x / 1000 % 10, x / 10000);
			break;
		default: {
			printf("max 5 simvolov minimum 1\n");
			goto start2;
		}
				 break;
		}
	}
			break;
	case 3: {
		/*3.	Палиндром – число или текст, который одинаково читается слева направо и справа налево.
			Например, каждое из следующих пятизначных целых чисел является палиндромом : 12321, 55555, 45554 и 11611.
			Текст–палиндром : Ешь немытого ты меньше.Напишите функцию bool f(int N),
			которая определяет, является ли пятизначное целое число N палиндромом*/

		int a, b, c, d, e, x, y;
	start3:
		printf("Введите пятизначное число: ");
		scanf("%d", &x);

		if (x > 9999 && x < 100000) {
			a = x % 10000;
			b = x % 1000;
			c = x % 100;
			d = x % 10;
			e = x - a;
			a -= b;
			b -= c;
			c -= d;

			y = d * 10000 + c * 100 + b * 1 + a / 100 + e / 10000;

			if (x == y)
				printf("палиндромом!\n");
			else
				printf("не палиндром!\n");
		}
		else {
			goto start3;
		}
	}
			break;
	case 4: {
		/*4.	Говорят, что целое число является совершенным числом, если его сомножители,
		включая 1 (но не само число) в сумме дают это число.Например, 6 – совершенное число,
		так как 6 = 1 + 2 + 3. Напишите функцию bool f(int n), которая определяет, является ли
		ее параметр n совершенным числом.Используйте эту функцию в программе,
		которая определяет и печатает все совершенные числа в диапазоне от 1 до 1000.*/

		int i = 0, n = 0, sum = 0, j, s, l;


		printf("Все совершенные числа в диапазоне от 1 до 1000\n\n");


		for (i = 2; i <= 1000; i++)
		{
			s = 0;
			for (j = 1; j < i; j++)

				if (i%j == 0)	s += j;
			if (s == i)	printf("%d\n", i);
		}
		printf("\n");

	}
			break;
	case 5: {
		printf("5.	Напишите программу, которая с помощью функции rand() ставит оценки в пределах от 2 до 5. В файл протокола направляйте слово “Неуд” при появлении 2, «Удовл» при появлении 3, и т.д. Используйте оператор switch.\n");

		int x = 2 + rand() % 4;

		printf("x = %d\n\n", x);

		switch (x)
		{
		case 2: printf("neydov.\n");
			break;
		case 3: printf("ydov.\n");
			break;
		case 4:printf("horowo!\n");
			break;
		case 5:printf("otli4no!!!");
			break;
		default:
			break;
		}
	}
			break;
	case 6: {
		//	/*Билет на одну поездку в метро стоит 15 тенге, билет на 10 поездок стоит 125 тенге,
		//		билет на 60 поездок стоит 440 тенге.Пассажир планирует совершить n поездок.
		//		Определите, сколько билетов каждого вида он должен приобрести, чтобы суммарное
		//		количество оплаченных поездок было не меньше n, а общая стоимость приобретенных билетов – минимальна
		//		Входные данные : количество поездок n.Выходные данные – три целых числа, равные необходимому количеству
		//		билетов на 1, на 10, на 60 поездок.Например, при вводе 129 программа должна вывести 0 1 2
		//		(2 билета на 60 поездок и 1 билет на 10 поездок).*/

		int n = 0, k1 = 0, k10 = 0, k60 = 0, ostatok = 0, pi = 0;

		printf("Введите колличество поездок: \t");
		scanf("%d", &n);

		if (n >= 60) {
			k60 = n / 60;
			ostatok = n % 60;

			if (ostatok >= 10) {
				k10 = ostatok / 10;
				ostatok = ostatok % 10;

				if (ostatok >= 1)	k1 = ostatok / 1;
				else {
					k10 = 0;
					k1 = ostatok;
				}

				pi = (k10 * 125) + (k1 * 15);

				if (pi >= 440)
				{
					k60++;
					printf("0, 0, %d\n", k60);
				}
				else {
					if (k1 * 15 >= 125)
					{
						k10++;
						printf("0, %d, %d\n", k10, k60);
					}
					else printf("%d, %d, %d\n", k1, k10, k60);
				}
			}
			else if (n < 60)
			{
				k60 = 0;
				k10 = n / 10;
				k1 = n % 10;
				pi = (k10 * 125) + (k1 * 15);
				if (pi >= 440)
				{
					k60++;
					printf("0, 0, %d\n", k60);
				}
				else
				{
					if (k1 * 15 >= 125)
					{
						k10++;
						printf("0, %d, %d\n", k10, k60);

					}
					else
					{
						printf("%d, %d, %d\n", k1, k10, k60);
					}
				}
			}
			else if (n < 10)
			{
				k60 = 0;
				k10 = 0;
				k1 = n;
				if (k1 * 15 >= 125)
				{
					k10++;
					k1 = 0;
					printf("%d, %d, %d\n", k1, k10, k60);
				}
			}
		}
	}
			break;
	case 7:

	{
		/*7.	Решите предыдущую задачу при наличии следующих билетов: 1 поездка - 15 тенге, 5 поездок - 70 тенге,
			10 поездок - 125 тенге, 20 поездок - 230 тенге, 60 поездок - 440 тенге. Если для какого-то данного
			n существует несколько способов приобретения билетов одинаковой стоимости, необходимо вывести ту 
			комбинацию билетов, которая дает большее число поездок.*/

		int k1 = 0, k5 = 0, k10 = 0, k20 = 0, k60 = 0, n = 0, ostatok = 0, pi = 0;

		printf("Введите колличество поездок: \t");
		scanf("%d", &n);

		if (n >= 60)
		{
			k60 = n / 60;
			ostatok = n % 60;
		} else	k60 = 0;

		if (ostatok >= 20)
		{
			k20 = ostatok / 20;
			ostatok = ostatok % 20;
		}
		else k20 = 0;
	
		if (ostatok >= 10)
		{
			k10 = ostatok / 10;
			ostatok = ostatok % 10;
		}
		else k10 = 0;
		
		if (ostatok >= 5)
		{
			k5 = ostatok / 5;
			ostatok = ostatok % 5;
		}
		else k5 = 0;
		(ostatok >= 1) ? k1 = ostatok / 1: k1 = 0;

		pi = (k20 * 230) + (k10 * 125) + (k5 * 70) + (k1 * 15);
		if (pi >= 440)
		{
			k60++;
			k20 = 0;
			k10 = 0;
			k5 = 0;
			k1 = 0;

			printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
		}
		else	{
			pi = (k10 * 125) + (k5 * 70) + (k1 * 15);
			if (pi >= 230)
			{
				k20++;
				k10 = 0;
				k5 = 0;
				k1 = 0;
	
				printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
			}
			else	{
				pi = (k5 * 70) + (k1 * 15);
				if (pi >= 125)
				{
					k10++;
					k5 = 0;
					k1 = 0;
					
					printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
				}
				else {
					if (k1 * 15 >= 70)
					{
						k5++;
						k1 = 0;
						
						printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
					}
					else {
						printf("%d, %d, %d, %d, %d\n", k1, k5, k10, k20, k60);
					}
				}
			}
		}
	}
	break;
	default:
		goto start;
		break;
	}
	goto start;
}

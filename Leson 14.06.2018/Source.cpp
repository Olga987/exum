#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

start:

	int n = 0;
	printf("Введите номер задания 11,12: ");
	scanf("%d", &n);

	switch (n)
	{
	
	case 11: {
		//11.	Отработал ли следующий код, если да, то что выйдет на экран, если не то укажите ошибки:
		//cout << " Вычислить частное q и остаток r при делении, а на d:" << endl;
		int a = 0, d = 0, q = 0, r = 0;

		printf("Введите значение а: ");
		scanf("%d", &a);

		printf("Введите значение d: ");
		scanf("%d", &d);

		q = a / d;
		printf("частное - %d\n", q);

		r = a%d;
		printf("остаток - %d\n", r);

	}
			break;
	case 12: {
		int a = 0;
		printf("Хотите ли вы стать профессиональным музыкантом? да: 1 нет: 2");
		scanf("%d", &a);
		if (a == 1) {
			printf("Вы богаты? да: 1 нет: 2");
			scanf("%d", &a);
			if (a == 1) {
				printf("Любите отрываться? да: 1 нет: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("Пьете пиво? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1) {
						printf("Хотите играть классику? да: 1 нет: 2 не знаю: 3  ");
						scanf("%d", &a);
						if (a == 1) {
							printf("Готовы работать круглые сутки? да: 1 нет: 2");
							scanf("%d", &a);
							if (a == 1)
								printf("Гобой\n");
							else if (a == 2) {
								printf("Готовы к тому что будут проблемы с работой даже если круто играете? да: 1 нет: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("Кларнет\n");
								else if (a == 2)
									printf("Валторна\n");

							}

						}
						else if (a == 2) {
							printf("...а джаз? да: 1 нет: 2");
							scanf("%d", &a);
							if (a == 1)
								printf("Саксафон\n");
							else if (a == 2) {
								printf("У вас есть немецкие корни? да: 1 нет: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("Труба\n");
								else if (a == 2)
									printf("Дудук\n");

							}
						}
						else if (a == 3)
							printf("Тромбон\n");


					}
					else if (a == 2) {
						printf("Вы страстная натура? да: 1 нет: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("Виолончель\n");
						else if (a == 2)
							printf("Домбра\n");

					}

				}
				else if (a == 2) {
					printf("Готовы заниматься по 8 часов в день? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1) {
						printf("Хотите учить детей? да: 1 нет: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("Флейта\n");
						else if (a == 2)
							printf("Скрипка\n");
					}
					else if (a == 2) {
						printf("Ноты знаете? да: 1 нет: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("Арфа\n");
						else if (a == 2)
							printf("Альт\n");
					}
				}
	



			}
				else if (a == 2) {
					printf("Любите деньги? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("Забудьте о музыке");
					else if (a == 2) {
						printf("Любите отрываться? да: 1 нет: 2");
						scanf("%d", &a);
						if (a == 1) {
							printf("Пьете пиво? да: 1 нет: 2");
							scanf("%d", &a);
							if (a == 1) {
								printf("Хотите играть классику? да: 1 нет: 2 не знаю: 3  ");
								scanf("%d", &a);
								if (a == 1) {
									printf("Готовы работать круглые сутки? да: 1 нет: 2");
									scanf("%d", &a);
									if (a == 1)
										printf("Гобой\n");
									else if (a == 2) {
										printf("Готовы к тому что будут проблемы с работой даже если круто играете? да: 1 нет: 2");
										scanf("%d", &a);
										if (a == 1)
											printf("Кларнет\n");
										else if (a == 2)
											printf("Валторна\n");

									}

								}
								else if (a == 2) {
									printf("...а джаз? да: 1 нет: 2");
									scanf("%d", &a);
									if (a == 1)
										printf("Саксафон\n");
									else if (a == 2) {
										printf("У вас есть немецкие корни? да: 1 нет: 2");
										scanf("%d", &a);
										if (a == 1)
											printf("Труба\n");
										else if (a == 2)
											printf("Дудук\n");

									}
								}
								else if (a == 3)
									printf("Тромбон\n");


							}
							else if (a == 2) {
								printf("Вы страстная натура? да: 1 нет: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("Виолончель\n");
								else if (a == 2)
									printf("Домбра\n");

							}

						}
					}
				}
		}
		else if (a == 2) {
			printf("Хотите встречаться с девушками? да: 1 нет: 2");
			scanf("%d", &a);
			if (a == 1) {
				printf("Любите глупышек? да: 1 нет: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("Любите выпить? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("Гитара\n");
					else if ("Фортепиано\n");
				}
				else if (a == 2) {
					printf("Вы парень? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("Оперный певец\n");
					else if (a == 2)
						printf("Ударные\n");
				}
			}
			else if (a == 2) {
				printf("Хотите встречаться с парнями? да: 1 нет: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("Вы парень? да: 1 нет: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("Оперный певец\n");
					else if (a == 2)
						printf("Ударные\n");
				}
				else if (a == 2)
					printf("Фагот\n");
			}


		}
	}
			 break;
	default:
		break;
	}
	goto start;
}

#include<stdio.h>
main()
{
	int day;
	printf("Enter the value between 1-7:");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Sunday");
			break;
			case 2:
				printf("Monday");
				break;
				case 3:
					printf("Tuesday");
					break;
					case 4:
						printf("Wednesday");
						break;
						case 5:
							printf("Thirsday");
							break;
							case 6:
								printf("Friday");
								break;
								case 7:
									printf("Saterday");
									break;
									default:
										printf("Invailid  number;");
	}

}

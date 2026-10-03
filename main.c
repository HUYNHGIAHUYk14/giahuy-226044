#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>


//void main()
//{
	//bài 1
	//viết phương trình bật 2 :ax^2+ bx + c = 0
	//tính delta = b^2 - 4ac
	//nếu delta > 0 thì pt có 2 nghiệm x1 = (-b+sqrt(delta))/2a, x2 = (-b-sqrt(delta))/2a
	//nếu delta = 0 thì pt có 1 nghiệm kép x1 =x2 -b /2a
	//nếu delta < 0 thì pt vô nghiệm
	/*int a = 0;
	int b = 0;
	int c = 0;
	printf("Nhap vao gia tri a: ");
	scanf("%d", &a);
	printf("Nhap vao gia tri b: ");
	scanf("%d", &b);
	printf("Nhap vao gia tri c: ");
	scanf("%d", &c);

	int delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		float x1 = (-b + sqrt(delta)) / 2 * a;
		float x2 = (-b - sqrt(delta)) / 2 / a;
		printf("x1 = %.2f , x2 = %.2f \n ", x1, x2);
	}
	else if (delta == 0)
	{
		float x1 = ((float)-b / 2 * a);
		printf("x1 = x2 = %.2f \n", x1 );
	}
	else
	{
		printf("pt vo nghiem");

	}*/
	//bai2 
	//nhập vào từ bàn phíam số bất kì
	//kiểm tra và in ra số đó là số dương hay là số 0 hay là số âm
	/*int x;
	printf("nhap x:");
	scanf("%d",&x);
	if (x > 0)
	{
		printf("so duong");
		}
	else if (x == 0)
	{
		printf("so 0");
	}
	else
	{
		printf("so am");
	}*/
	//bai3 ktra nam nhuan
	//nhập vào từ bàn phím số năm 
	//nếu đó là năm nhuận thi in ra là năm nhuận
	//nếu đó không phải là năm nhuận thì in ra không phải là năm nhuận
	// 1 năm nhuận là một nmw chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
	/*int nam;
	printf("nhap nam:");
	scanf("%d", &nam);
	if (nam % 400 == 0 )
	{
		printf("day la nam nhuan");

	}
	else if (nam % 4 == 0 && nam % 100 != 0)
	{
		printf("la nam nhuan");
	}
	else
	{
		printf("khong phai nam nhuan");
	}*/

	//bài 4
	// nhập vào từ bàn phím 3 số a b c 
	//in ra số lớn nhất trong 3 số
	/*int q = 0;
	int w = 0;
	int e = 0;
	printf("nhap vao q");
	scanf("%d", &q);
	printf("nhap vao w");
	scanf("%d", &w);
	printf("nhap vao e");
	scanf("%d", &e);
	int max = q;
	if (w > q)
	{
		max = w;
	}
	if (e > max)
	{
		max = e;
	}
	printf("so lon nhat la:%d\n", max);*/

	// Bài 5
// nhập vào số điện sử dụng bất kì
// tính tiền điện theo bậc
// 
// Bậc 1 (0 - 50 kWh): 1.984 đồng/kWh
// Bậc 2 (51 - 100 kWh): 2.050 đồng/kWh
// Bậc 3 (101 - 200 kWh): 2.380 đồng/kWh
// Bậc 4 (201 - 300 kWh): 2.998 đồng/kWh
// Bậc 5 (301 - 400 kWh): 3.350 đồng/kWh
// Bậc 6 (từ 401 kWh trở lên): 3.460 đồng/kWh

// baitap 
// dong vong lap in ra bảng cửu chuong 2

	/*int i = 0;
	for (i = 0;i <= 10;i++)
	{
		printf("2 x %d=%d\n", i, 2 * i);

	}*/
	/*for (int i = 2;i <= 9;i++)
	{
		printf("Bang cuu chuong %d \n",i);
		for (int j = 1;j <= 10;j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);

		}
	}*/
	// bt2 nhập vào số nguyên n từ bàn phím
	//tính rga in ra kết quả giai thừa của n
	/*int n;
	int giaithua = 1;
	printf("nhap vao so nguyen n");
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		giaithua = giaithua * i;
	}
	printf("giai thua cua n la %d", giaithua);*/

	//bt3 nhập vào số nguyên n từ bàn phím
   //ktra xem số đó phải là số nguyên tố hay không
   //nếu đúng thì in ra n là số nguyên
   //nếu sai thì không phải là số 
//int n;
//int isSnt = 1;
//printf("nhap vao so nguyen n");
//scanf("%d", &n);
//for (int i = 2;i < n; i++)
//{
//	if (n % i == 0) {
//		isSnt = 0;
//		break;
//	}
//}
//if (isSnt) {
//	printf("%d la so nguyen to \n", n);
//}
//else {
//	printf("%d khong phai la soo nguyen to \n", n);
//}
//bt4 
// nhập vào số nguyên n, đếm số lượng chử số của n và in ra màn hình 
//vd 97421 suy ra n có 5 chử số 
//gợi ý dùng vòng lập while để chia nguyên cho 10 để đêms
//int n;
//
//printf("nhap vao so nguyen n");
//scanf("%d", &n);
//int t = n;
//int count = 0;
//if (n == 0)count = 1;
//while (n > 0)
//{
//	n = n / 10;
//	count++;
//}
//printf("%d co %d chu so \n", t, count);
//}
// btvn
//Tìm ước chung lớn nhất(GCD)
//Nhập hai số nguyên dương A và B, sử dụng vòng lặp để tìm ƯCLN của hai số.
//Không sử dụng hàm có sẵn.
// hãy tạo cho tôi hàm sort một giá trị int trong mảng
//}
//void main()
//{
//	int a;
//	int b;
//	printf("nhap va so nguyen a ");
//	scanf("%d", &a);
//	printf("nhap va so nguyen b ");
//	scanf("%d", &b);
//	while (b != 0)
//	{
//		int r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("UCLN la %d", a);	
//}
//Trò chơi đoán số ⭐
//Chương trình sinh ra một số bí mật trong khoảng 1–100.
// Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng.Sau mỗi lần nhập :
//Nếu số nhập nhỏ hơn số bí mật → thông báo "Lon hon"
//Nếu số nhập lớn hơn → thông báo "Nho hon"
//
// Nếu đúng → thông báo số lần đoán.
void main()
{
	srand(time(NULL));
	int bimat;
	int so = 0,lan = 0;
	bimat = rand() % 100 + 1;

	while (so!= bimat)
	{
		printf("nhap so ban doan ") ;
		scanf("%d", &so);
		lan++;
		if (so < bimat)
		{
			printf("lon hon \n");
		}
		else if (so > bimat)
		{
			printf("be hon\n");
		}
		else
		{
			printf("dung! ban doan %d lan", lan);
		}
	}	
}
	











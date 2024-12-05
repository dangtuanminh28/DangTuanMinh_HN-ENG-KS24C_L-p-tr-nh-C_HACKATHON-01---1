#include <stdio.h>
int main() {
	// Khai bao mang
    int arr[100]; 
    int size = 0; 
    int choice, num;
    do {
    // In menu ra ngoai man hinh
    printf("\n MENU \n");
    printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so luong cac so nguyen to co trong mang\n");
	printf("4.Tim gia tri nho thu hai trong mang\n");
	printf("5.Them mot phan tu vao vi tri ngau nhien trong mang va vi tri them vao phai do nguoi dung nhap vao\n");
	printf("6.Xoa phan tu tai mot vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu co ton tai trong mang hay khong\n");
	printf("9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang\n");
	printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
	printf("11.Thoat\n");
	printf("Lua chon cua ban:");
	// Gia tri nhap vao tu nguoi dung
	scanf("%d", &choice);
        switch (choice) {
            // Nhap so phan tu va gia tri cho mang
			case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);
                if (size <= 0 || size > 100) {
                    printf("So phan tu khong hop le!\n");
                    size = 0;
                } else {
                    for (int i = 0; i < size; i++) {
                        printf("Nhap gia tri phan tu arr[%d]: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            // In ra gia tri cac phan tu trong mang
			case 2: 
                if (size == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Cac phan tu trong mang la: ");
                    for (int i = 0; i < size; i++) {
                        printf("arr[%d] = %d, ", i, arr[i]);
                    }
                    printf("\n");
                }
                break;
            // Dem so luong cac so nguyen to co trong mang
			case 3: 
                if (size == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Cac phan tu so nguyen to co trong mang la: ");
                    for (int i = 0; i < size; i++) {
                        int so_nguyen_to = 1;
                        if (arr[i] <= 1) so_nguyen_to = 0;
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                so_nguyen_to = 0;
                                break;
                            }
                        }
                        if (so_nguyen_to) {
                            printf("%d ", arr[i]);
                        }
                    }
                    printf("\n");
                }
                break;
            // Tim gia tri nho thu hai trong mang
            case 4:
            	if (size == 0) {
                    printf("Mang rong!\n");
                } else {
            	printf("Gia tri nho nhat trong mang thu hai la:");
            	
				}
            // Them mot phan tu vao vi tri ngau nhien trong mang va vi tri them vao phai do nguoi dung nhap vao
			case 5:
                if (size >= 100) {
                    printf("Mang da day! Khong the them phan tu!\n");
                } else {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[size] = value;
                    size++;
                    printf("Da them %d vao mang.\n", value);
                }
                break;
            case 6: 
                // Xoa phan tu tai mot vi tri cu the
                if (size == 0) {
                    printf("Mang rong, khong co phan tu de xoa!\n");
                } else {
                    int index;
                    printf("Nhap vi tri can xoa (0 - %d): ", size - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= size) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Da xoa phan tu tai vi tri %d.\n", index);
                    }
                }
                break;
            // Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu co ton tai trong mang hay khong
            case 8:
            	if (size == 0) {
                    printf("Mang rong!\n");
                } else {
                    int flag=-1;
	 				printf("Moi nhap gia tri muon kiem tra:");
	 				scanf("%d", &num);
				 	for( int i = 0;i < size;i++){
	 					if (arr[i]==num){
	 						printf("Gia tri %d nam o vi tri %d\n",num,i);
	 						flag++;
		 				}
	 				}
	 			if (flag==-1){
	 	 		printf("Gia tri da nhap khong co trong mang");
	 			}
				}
            // Thoat chuong trinh
			case 11: {
                printf("Ket thuc chuong trinh.\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le!\n");
                break;
            }
        }
    } while (choice != 11);
    return 0;
}


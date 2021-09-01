#include<iostream>
#include<memory>

int main()
{
    int a = 20;
    std::shared_ptr<int> ptra = std::make_shared<int>(a);
    std::cout<<ptra.use_count()<<std::endl;//1

    std::shared_ptr<int> ptra2(ptra);
    std::cout<<ptra.use_count()<<std::endl;//2

    int b = 2;
    int *pb = &a;
    std::shared_ptr<int> ptrb = std::make_shared<int>(b);

    std::cout<< ptrb.use_count() <<std::endl;//3

    ptra2 = ptrb;
    pb = ptrb.get();

    std::cout<< ptra.use_count() <<std::endl;//4
    std::cout<< ptrb.use_count() <<std::endl;//5

    return 0;


}




// #include <iostream>
// #include <memory>

// int main() {
//     {
//         std::unique_ptr<int> uptr(new int(10));  //绑定动态对象
//         //std::unique_ptr<int> uptr2 = uptr;  //不能賦值
//         //std::unique_ptr<int> uptr2(uptr);  //不能拷貝
//         std::unique_ptr<int> uptr2 = std::move(uptr); //轉換所有權
//         uptr2.release(); //释放所有权
//     }
//     //超過uptr的作用域，內存釋放
// }



// #include <iostream>
// #include <memory>

// int main() {
//     {
//         std::shared_ptr<int> sh_ptr = std::make_shared<int>(10);
//         std::cout << sh_ptr.use_count() << std::endl;

//         std::weak_ptr<int> wp(sh_ptr);
//         std::cout << wp.use_count() << std::endl;

//         if(!wp.expired()){
//             std::shared_ptr<int> sh_ptr2 = wp.lock(); //get another shared_ptr
//             *sh_ptr = 100;
//             std::cout << wp.use_count() << std::endl;
//         }
//     }
//     //delete memory
// }




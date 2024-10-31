#include "Serializer.hpp"


int main()
{
        Data originalData;
    originalData.int_val = 42;
    originalData.double_val = 3.141592;
    originalData.char_val = 'C';

      // シリアライズ：Dataポインタをuintptr_tに変換
    uintptr_t serialized = Serializer::serialize(&originalData);
    std::cout << "Serialized: " << serialized << std::endl;

    // デシリアライズ：uintptr_tをDataポインタに戻す
    Data* deserializedData = Serializer::deserialize(serialized);

    // テスト結果の出力
    std::cout << "Original Data: " << originalData.int_val << ", "
              << originalData.double_val << ", "
              << originalData.char_val << std::endl;

    std::cout << "Deserialized Data: " << deserializedData->int_val << ", "
              << deserializedData->double_val << ", "
              << deserializedData->char_val << std::endl;

    // 元のデータとデシリアライズ後のデータが一致するか確認
    if (&originalData == deserializedData) {
        std::cout << "Test passed: The pointers are the same." << std::endl;
    } else {
        std::cout << "Test failed: The pointers are different." << std::endl;
    }

    return 0;
}



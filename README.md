# C++ Module 06: Type Conversion and Serialization

## 概要
このモジュールでは、C++のキャストやシリアライゼーション、オブジェクトの型識別について学びます。以下の課題を通じて、C++での型変換やメモリ操作に関する知識を深めます。

## 課題内容
1. **Conversion of Scalar Types**: スカラー型の変換を行う `ScalarConverter` クラスを実装し、文字列から異なる型（`char`、`int`、`float`、`double`）への変換方法を学びます。
2. **Serialization**: `Serializer` クラスを実装し、ポインタを整数値に変換するシリアライゼーションと、その逆のデシリアライゼーションの基礎を学びます。
3. **Identify Real Type**: 基底クラス `Base` から派生したクラスの実際の型を識別する方法を学び、ポリモーフィズムの理解を深めます。

## ex01: Serialization
- **概要**: ポインタを整数型にシリアライズし、逆にデシリアライズする方法を学ぶ。
- **ポイント**:
  - `uintptr_t`を使ってポインタのアドレスを整数型として扱う。
  - `reinterpret_cast`でポインタと整数間の型変換を行う。

## ex02: Identify Real Type
- **概要**: `dynamic_cast`を使い、実行時にオブジェクトの実際の型を識別する方法を学ぶ。
- **ポイント**:
  - ポインタの型判別では`nullptr`、参照では`std::bad_cast`例外で失敗を確認。
  - 多態性を使って、継承関係にあるクラス間で安全に型変換。

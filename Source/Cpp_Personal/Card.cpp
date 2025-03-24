#include "Card.h"

UCard::UCard()
{
    Suit = ESuit::Hearts;
    Rank = ERank::Ace;
    InitializeValue();
}

// 카드의 Suit와 Rank를 설정하는 함수
void UCard::SetCard(ESuit NewSuit, ERank NewRank)
{
    Suit = NewSuit;
    Rank = NewRank;
}

// 카드의 점수를 반환하는 함수 (Ace는 기본 11로 설정)
int32 UCard::GetCardValue() const
{
    switch (Rank)
    {
    case ERank::Ace:   return 11;  // 기본적으로 11로 설정 (플레이어가 선택 가능)
    case ERank::Two:   return 2;
    case ERank::Three: return 3;
    case ERank::Four:  return 4;
    case ERank::Five:  return 5;
    case ERank::Six:   return 6;
    case ERank::Seven: return 7;
    case ERank::Eight: return 8;
    case ERank::Nine:  return 9;
    case ERank::Ten:   return 10;
    case ERank::Jack:
    case ERank::Queen:
    case ERank::King:  return 10;
    default: return 0;
    }
}

// 카드 정보를 문자열로 변환
FString UCard::ToString() const
{
    const UEnum* SuitEnum = StaticEnum<ESuit>();
    const UEnum* RankEnum = StaticEnum<ERank>();

    FString SuitString = SuitEnum->GetNameStringByValue((int64)Suit);
    FString RankString = RankEnum->GetNameStringByValue((int64)Rank);

    return RankString + TEXT(" of ") + SuitString;
}

void UCard::SetAceValue(int32 NewValue)
{
    if (Rank == ERank::Ace)
    {
        Value = (NewValue == 1 || NewValue == 11) ? NewValue : 11;
    }
}

void UCard::InitializeValue()
{
    if (Rank >= ERank::Two && Rank <= ERank::Ten)
    {
        Value = static_cast<int32>(Rank) + 1;  // 2~10
    }
    else if (Rank >= ERank::Jack && Rank <= ERank::King)
    {
        Value = 10;  // J, Q, K는 10점
    }
    else if (Rank == ERank::Ace)
    {
        Value = 11;  // 기본적으로 A는 11점 (플레이어가 선택 가능)
    }
}

FString UCard::GetCardName() const
{
    FString SuitName;
    switch (Suit)
    {
    case ESuit::Hearts:
        SuitName = TEXT("Hearts");
        break;
    case ESuit::Diamonds:
        SuitName = TEXT("Diamonds");
        break;
    case ESuit::Clubs:
        SuitName = TEXT("Clubs");
        break;
    case ESuit::Spades:
        SuitName = TEXT("Spades");
        break;
    }

    FString RankName;
    switch (Rank)
    {
    case ERank::Ace:
        RankName = TEXT("Ace");
        break;
    case ERank::Two:
        RankName = TEXT("2");
        break;
    case ERank::Three:
        RankName = TEXT("3");
        break;
    case ERank::Four:
        RankName = TEXT("4");
        break;
    case ERank::Five:
        RankName = TEXT("5");
        break;
    case ERank::Six:
        RankName = TEXT("6");
        break;
    case ERank::Seven:
        RankName = TEXT("7");
        break;
    case ERank::Eight:
        RankName = TEXT("8");
        break;
    case ERank::Nine:
        RankName = TEXT("9");
        break;
    case ERank::Ten:
        RankName = TEXT("10");
        break;
    case ERank::Jack:
        RankName = TEXT("Jack");
        break;
    case ERank::Queen:
        RankName = TEXT("Queen");
        break;
    case ERank::King:
        RankName = TEXT("King");
        break;
    }

    return FString::Printf(TEXT("%s of %s"), *RankName, *SuitName);
}

#include <iostream>
#include <array>
#include <cstdlib>

enum Suit
{
    Spades,
    Worms,
    Diamonds,
    Crosses,
    Number_of_suits,
};

enum Card_value
{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen, 
    King,
    Ace,
    Number_of_cards,
};

typedef struct s_card
{
    int Card_value;
    int Suit;
}              t_card;

void printCard(const s_card &card)
{
    switch(card.Card_value)
    {
        case 0:
            std::cout << "2";
            break;
        case 1:
            std::cout << "3";
            break;
        case 2:
            std::cout << "4";
            break;
        case 3:
            std::cout << "5";
            break;
        case 4:
            std::cout << "6";
            break;
        case 5:
            std::cout << "7";
            break;
        case 6:
            std::cout << "8";
            break;
        case 7:
            std::cout << "9";
            break;
        case 8:
            std::cout << "10";
            break;
        case 9:
            std::cout << "J";
            break;
        case 10:
            std::cout << "Q";
            break;
        case 11:
            std::cout << "K";
            break;
        case 12:
            std::cout << "A";
            break;
        default:
            break;
    }
    switch(card.Suit)
    {
        case 0:
            std::cout << "S";
            break;
        case 1:
            std::cout << "W";
            break;
        case 2:
            std::cout << "D";
            break;
        case 3:
            std::cout << "C";
            break;
        default:
            break;
    }
}

void printDeck(std::array <s_card, 52> &deck)
{
    for (int i = 0; i < 52; i++)
        //std::cout << deck[i].Card_value;
       { 
        printCard(deck[i]);
        std::cout << " ";
       }
}

void swapCard(s_card &a, s_card &b)
{
    s_card temp;
    temp.Card_value = a.Card_value;
    temp.Suit = a.Suit;

    a.Card_value = b.Card_value;
    a.Suit = b.Suit;

    b.Card_value = temp.Card_value;
    b.Suit = temp.Suit;
}

int getRandomNumber(int min,int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array <s_card, 52> &deck)
{
    for (int i = 0; i < 52; i++)
    {
        int random_number = getRandomNumber(0, 51);
        // std::cout << random_number << " ";
        swapCard(deck[i], deck[random_number]);
    }
}

int getCardValue (s_card a)
{
    switch(a.Card_value)
    {
        case 0: return 2; break;
        case 1: return 3; break;
        case 2: return 4; break;
        case 3: return 5; break;
        case 4: return 6; break;
        case 5: return 7; break;
        case 6: return 8; break;
        case 7: return 9; break;
        case 8: return 10; break;
        case 9: return 10; break;
        case 10: return 10; break;
        case 11: return 10; break;
        case 12: return 11; break;
        default: break;
    }
}

bool playBlackJack(std::array<s_card, 52> &deck)
{
    std::array<s_card, 52> * cardPtr;
    int gamer = 0;
    int diller = 0;
}

int main ()
{

    std::array <s_card, 52> deck;
    int card = 0;
    for (int suit = 0; suit < Number_of_suits; suit++)
        for (int value = 0; value < Number_of_cards; value++)
        {
            deck[card].Suit = static_cast<Suit>(suit);
            deck[card].Card_value = static_cast<Card_value>(value);
            card++;
        }

    printDeck(deck);

    std::cout << std::endl;
    shuffleDeck(deck);
    shuffleDeck(deck);
    std::cout << std::endl;
    printDeck(deck);

    std::cout<< getCardValue(deck[0]);

    return 0;
}
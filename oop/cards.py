import random

class Card(object):
    """docstring for card."""
    def __init__(self, suit, number):
        self.suit = suit
        self.number = number

    def show(self):
        print (self.suit, self.number)


class Deck(object):
    """docstring for Deck."""
    def __init__(self):
        self.cards = []
        self.build()

    def build(self):
        for s in ["Spades", "Clubs", "Diamonds", "Hearts"]:
            for i in range(1,14):
                self.cards.append(Card(s,i))

    def show(self):
        for c in self.cards:
            c.show()

    def shuffle(self):
        for i in range(len(self.cards)-1,0,-1):
            r = random.randint(0,i)
            self.cards[i],self.cards[r] = self.cards[r], self.cards[i]

    def drawCard(self):
        return self.cards.pop()

class Player(object):
    """docstring for Player."""
    def __init__(self,name):
        self.name = name
        self.hand = []

    def draw(self,deck):
        self.hand.append(deck.drawCard())
        return self

    def showHand(self):
        for card in self.hand:
            card.show()

    def discard(self):
        return self.hand.pop()

# c = Card("Clubs",3)
# c.show()

deck = Deck()
deck.shuffle()
# deck.show()
card = deck.drawCard()
# card.show()
bob = Player("Bob")
bob.draw(deck).draw(deck)
bob.showHand()
# bob.discard()

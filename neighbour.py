
class Neighbour:
    def __init__(self, name, age, hobby, personality):
        self.name = name
        self.age = age
        self.hobby = hobby
        self.personality = personality

    def introduce(self):
        print(f"My neighbour's name is {self.name}.")
        print(f"He is {self.age} years old.")
        print(f"His hobby is {self.hobby}.")
        print(f"Personality: {self.personality}")

    def greet(self):
        print(f"{self.name} says: 'Hey! How are you doing today?'")

    def play_hobby(self):
        print(f"{self.name} is playing {self.hobby} right now.")

    def visit(self):
        print(f"{self.name} just came over to visit.")

    def describe_personality(self):
        print(f"{self.name} is known to be {self.personality}.")

# Create the neighbour object
neighbour1 = Neighbour(
    name="Joshua Kinuthia",
    age=20,
    hobby="PES",
    personality="friendly and funny"
)

neighbour1.introduce()
neighbour1.greet()
neighbour1.play_hobby()
neighbour1.visit()
neighbour1.describe_personality()

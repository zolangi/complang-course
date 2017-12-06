import sys

class Brain:
    #This represents one victim's brain.  It has a variable that tracks the person's IQ, which is determined by checking the value in the victim's Brain.
    def __init__(self, iq):
        self.iq = iq
    
    def get_iq(self):
        return self.iq

    def __str__(self):
        return 'IQ = ' + self.iq

class Victim:
    #A Victim has a name, a Brain, and a way to track whether the person is living or dead.  The __str__ should return a string showing the victim's name and IQ.
    def __init__(self, name, Brain, status):
        self.name = name
        self.Brain = Brain
        self.status = status
        
    def get_name():
        return self.name

    def set_status(status):
        self.status = status
        
    def get_status(self):
        return self.status

    def __str__(self):
        return self.name +'\'s ' + self.b

class Zombie:
    #A Zombie has a name, a way to track whether or not the Zombie has been destroyed, and a feast() method.  feast() takes a Victim as its only argument (besides self).  It prints a message indicating that the Zombie has eaten the victim's brain, and it sets the person's status to dead (in this application, a dead person just dies; he or she does not become a Zombie.)
    def __init__(self, name, active):
        self.name = name
        self.active = active
        
    def feast(self, Victim):
        Victim.set_status('dead')

    def __str__(self):
        return self.name + ' has eaten the victim\'s brain!!'

class HorrorStory:
# This class contains a list of Zombies and a list of Victims, the name of the city where the story occurs, and all the methods the driver script will need.  These include methods to create a Zombie and add him or her to the list, one to create a Victim and add him or her to the list, one to tell the story, and any other methods you need. 

# The story method contains a nested loop in which, as long as at least one Victim remains alive and at least one Zombie has not been destroyed, the survivors on each side take turns fighting each other.   Make sure that neither a Victim who is already dead nor a Zombie who has already been destroyed ever fights.  In each individual fight, generate a random double between 0 and 1 with the method random.random() (you will need to import random).  If the random number is less than .5, the Zombie wins the fight (call feast(), sending the Victim as an argument) otherwise the Victim wins (set the Zombie's status to destroyed.)  The carnage ends when either a) there are no surviving Victims or b) all the Zombies have been destroyed.  Print messages indicating which of these is the case and listing everyone who is still alive.
    def __init__(self, city):
        self.zombies = []
        self.victims = []
        self.city = city

    def create_zombie(self):
        zombi = Zombie('Jenny', 'destroyed')
        zombi2 = Zombie('Gertrude', 'active')
        zombi3 = Zombie('Fry', 'active')
        zombi4 = Zombie('Nick', 'destroyed')
        zombi5 = Zombie('Leia', 'active')
        zombies.append(zombi)
        zombies.append(zombi1)
        zombies.append(zombi2)
        zombies.append(zombi3)
        zombies.append(zombi4)
        zombies.append(zombi5)
        
    def create_victims(self):
        vic = Victim('Lucy', 'alive')
        vic2 = Victim('Mary', 'dead')
        vic3 = Victim('Dean', 'alive')
        vic4 = Victim('Sam', 'alive')
        vic5 = Victim('Karen', 'dead')
        victims.append(vic)
        victims.append(vic2)
        victims.append(vic3)
        victims.append(vic4)
        victims.append(vic5)
        
def main():
#     The driver can be a top-level script; it does not need to be a class method.  It must call *only* methods in HorrorStory, not any methods in Victim or Zombie.  It should use the HorrorStory methods to add some Zombies and some Victims and then call the story method.  All this data can be hard-coded; you do not need to take user input.  However, test the application several times, and make sure that the either outcome (Zombies win or Victims win) is possible.
    print('Welcome to the Battle of Zombies vs. Victims')
    hs = HorrorStory('Chicago')
    
    hs.create_zombie()
    hs.create_victims()
    
if __name__ =="__main__":
    sys.exit(main())
